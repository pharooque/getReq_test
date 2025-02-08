cmake_minimum_required(VERSION 3.25)

project(getReq)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(cpr_DIR "C:/msys64/mingw64/lib/cmake/cpr")

find_package(CURL REQUIRED)
find_package(cpr REQUIRED)

if (cpr_FOUND)
    message(STATUS "Found cpr: ${cpr_CONFIG} (found version ${cpr_VERSION})")
endif ()

add_executable(getReq main.cpp)
target_link_libraries(getReq PRIVATE cpr::cpr CURL::libcurl)
