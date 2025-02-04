cmake_minimum_required(VERSION 3.15)

project(getReq)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")

find_package(cpr CONFIG REQUIRED)
add_executable(getReq main.cpp)
target_link_libraries(getReq PRIVATE cpr::cpr)