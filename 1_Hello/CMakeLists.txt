cmake_minimum_required(VERSION 3.2)

project(Hello VERSION 0.0.1 LANGUAGES CXX)
add_executable(Hello WIN32 hello.cpp)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})
target_link_libraries(Hello ${wxWidgets_LIBRARIES})