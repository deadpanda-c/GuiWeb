cmake_minimum_required(VERSION 3.22)
project(GuiWeb)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES src/*.cpp)
include_directories(include)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES
	WIN32_EXECUTABLE TRUE
	MACOSX_BUNDLE TRUE
)
target_compile_options(${PROJECT_NAME} PRIVATE -g3)
