cmake_minimum_required(VERSION 2.8.9)
project(rplidar)
find_package (Threads)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

file(GLOB SOURCES "source/src/*.cpp")

file(GLOB RPLIDAR "../deps/rplidar/include/*.h"
                   "../deps/rplidar/src/*.h"
                   "../deps/rplidar/src/*.cpp"
                   "../deps/rplidar/src/hal/*.h"
                   "../deps/rplidar/src/hal/*.cpp"
                    "../deps/rplidar/src/arch/win32/*.cpp"
                   "../deps/rplidar/src/arch/win32/*.h"
                   "../deps/rplidar/src/arch/win32/*.hpp"
                   "../deps/adt/source/include/ADT_Base.hpp"
                   "../deps/adt/source/include/Angle.hpp"
                   "../deps/adt/source/include/Length.hpp"
                   "../deps/adt/source/src/Angle.cpp"
                   "../deps/adt/source/src/Length.cpp"
                   )

include_directories(
  ../deps/rplidar/include
  ../deps/rplidar/src
  ../deps/adt/source/include)



add_executable(rplidar ${RPLIDAR} ${SOURCES} )
