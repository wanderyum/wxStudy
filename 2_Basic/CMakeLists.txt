cmake_minimum_required(VERSION 3.2)

project(Basic VERSION 0.0.1 LANGUAGES CXX)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(CMAKE_CXX_STANDARD 14)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
include_directories(${PROJECT_SOURCE_DIR}/include/)

add_library(MyFrame src/MyFrame.cpp)

add_executable(Basic WIN32 src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES} MyFrame)
