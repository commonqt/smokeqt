cmake_minimum_required(VERSION 2.8.11)
project(SMOKEQT5)
#set(CMAKE_CXX_STANDARD 14)

if(NOT SMOKE_PARTS)
    set(SMOKE_PARTS 20)
endif()

function(get_smokegen_args RESULT_NAME moduleName)
    set(clangOptions "-clangOptions")
    if(NOT WIN32)
        list(APPEND clangOptions  "-fPIC")
    endif()

    if(MSVC AND MSVC_VERSION GREATER 1600)
        # The features that clang reports and the features that Qt will detect at
        # compile time must match.  MSVC2015 supports c++14, but does not support
        # only the c++11 subset that clang would turn on with -std=c++11.  When
        # running inside smokegen, Qt's compiler detection sees the compiler as
        # clang under msvc.
        list(APPEND clangOptions "-std=c++14")
    elseif(${Qt5Core_VERSION} VERSION_GREATER 5.6.99)
        # Qt >=5.7.0 requires c++11
        list(APPEND clangOptions "-std=c++11")
    endif()

    set(smokegenArgs
        -p ${SMOKE_PARTS}
        -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml"
        -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
        -L "${CMAKE_BINARY_DIR}"
        ${clangOptions}
        -- ${CMAKE_CURRENT_SOURCE_DIR}/${moduleName}_includes.h
    )
    set(${RESULT_NAME} ${smokegenArgs} PARENT_SCOPE)
    
endfunction()

function(create_configure_files dirs)
    set(qt_dirs)
    foreach(filename ${dirs})
        if("${filename}" MATCHES "\\.framework/?$")
            string(REGEX REPLACE "/[^/]+\\.framework" "" framework_path "${filename}")
            set(qt_dirs "${qt_dirs}        <framework>${framework_path}</framework>\n")
        else()
            set(qt_dirs "${qt_dirs}        <dir>${filename}</dir>\n")
        endif()
    endforeach(filename)

    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)
    endif()
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake)
        configure_file(${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml @ONLY)
    endif()
endfunction()

add_definitions(-DSMOKE_BUILDING)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5
    COMPONENTS
    DBus
    Gui
    Help
    Multimedia
    MultimediaWidgets
    Network
    OpenGL
    Positioning
    PrintSupport
    Qml
    Quick
    QuickWidgets
    Script
    Sql
    Svg
    Test
    UiTools
    WebChannel
    WebEngineCore
    WebEngineWidgets
    Widgets
    Xml
    XmlPatterns
    QUIET
)
find_package(Smoke)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
set(CMAKE_INSTALL_PREFIX ${SMOKE_INSTALL_PREFIX}
    CACHE PATH "Install prefix" FORCE)
endif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SMOKE_CMAKE_MODULE_DIR}")
include(MacroOptionalFindPackage)
include(MacroOptionalAddBindings)
include(MacroLogFeature)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_MACOSX_RPATH 1)

# the RPATH to be used when installing, but only if it's not a system directory
LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
IF("${isSystemDir}" STREQUAL "-1")
   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
ENDIF("${isSystemDir}" STREQUAL "-1")

# Set LIB_INSTALL_DIR if it's not set already.
if (NOT LIB_INSTALL_DIR)
    set (LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
endif (NOT LIB_INSTALL_DIR)

## disable deprecation waringins
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
endif()

#macro_optional_find_package(QImageBlitz)
#macro_log_feature(QIMAGEBLITZ_FOUND "QImageBlitz" "QImageBlitz library" "http://www.kde.org" FALSE "" "Needed to compile QImageBlitz bindings")
#
#macro_optional_find_package(Qwt5)
#macro_log_feature(Qwt5_Qt4_FOUND "Qwt5 for Qt4" "Qwt5 libraries for Qt4" "http://qwt.sourceforge.net" FALSE "" "Needed to compile Qwt5 bindings")
#
#macro_optional_find_package(Phonon)
#macro_log_feature(PHONON_FOUND "Phonon" "Phonon multimedia framework" "http://www.kde.org" FALSE "" "Needed to compile Phonon bindings")
#
#macro_optional_find_package(QScintilla)
#macro_log_feature(QSCINTILLA_FOUND "QScintilla2" "QScintilla2 libraries" "http://www.riverbankcomputing.co.uk/software/qscintilla/intro" FALSE "" "Needed to compile QScintilla2 bindings")

set(QTDEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/qtdefines)

add_subdirectory(qtcore)
#macro_optional_add_bindings(Qt5DBus_FOUND "QtDBus" qtdbus)
macro_optional_add_bindings(Qt5Gui_FOUND "QtGui" qtgui)
# macro_optional_add_bindings(Qt5Help_FOUND "QtHelp" qthelp)
# macro_optional_add_bindings(Qt5Multimedia_FOUND "QtMultimedia" qtmultimedia)
# macro_optional_add_bindings(Qt5MultimediaWidgets_FOUND "QtMultimediaWidgets" qtmultimediawidgets)
macro_optional_add_bindings(Qt5Network_FOUND "QtNetwork" qtnetwork)
# macro_optional_add_bindings(Qt5OpenGL_FOUND "QtOpenGL" qtopengl)
# macro_optional_add_bindings(Qt5Positioning_FOUND "QtPositioning" qtpositioning)
macro_optional_add_bindings(Qt5PrintSupport_FOUND "QtPrintSupport" qtprintsupport)
macro_optional_add_bindings(Qt5Qml_FOUND "QtQml" qtqml)
macro_optional_add_bindings(Qt5Quick_FOUND "QtQuick" qtquick)
# macro_optional_add_bindings(Qt5QuickWidgets_FOUND "QtQuickWidgets" qtquickwidgets)
# macro_optional_add_bindings(Qt5Script_FOUND "QtScript" qtscript)
# macro_optional_add_bindings(Qt5Sql_FOUND "QtSql" qtsql)
# macro_optional_add_bindings(Qt5Svg_FOUND "QtSvg" qtsvg)
# macro_optional_add_bindings(Qt5Test_FOUND "QtTest" qttest)
# macro_optional_add_bindings(Qt5UiTools_FOUND "QtUiTools" qtuitools)
macro_optional_add_bindings(Qt5WebChannel_FOUND "QtWebChannel" qtwebchannel)
macro_optional_add_bindings(Qt5WebEngineCore_FOUND "QtWebEngineCore" qtwebenginecore)
macro_optional_add_bindings(Qt5WebEngineWidgets_FOUND "QtWebEngineWidgets" qtwebenginewidgets)
macro_optional_add_bindings(Qt5Widgets_FOUND "QtWidgets" qtwidgets)
#macro_optional_add_bindings(Qt5Xml_FOUND "QtXml" qtxml)
#macro_optional_add_bindings(Qt5XmlPatterns_FOUND "QtXmlPatterns" qtxmlpatterns)
#
#macro_optional_add_bindings(PHONON_FOUND "Phonon" phonon)
#
#macro_optional_add_bindings(QSCINTILLA_FOUND "QScintilla" qsci)
#
#macro_optional_add_bindings(Qwt5_Qt4_FOUND "Qwt" qwt)
#
#macro_optional_add_bindings(QIMAGEBLITZ_FOUND "QImageBlitz" qimageblitz)




# for qtguess.pl
if (APPLE)
set(qt_test_threshold 15)
else (APPLE)
set(qt_test_threshold 10)
endif (APPLE)

macro_display_bindings_log()
macro_display_feature_log()
