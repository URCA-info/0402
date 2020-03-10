cmake_minimum_required(VERSION 3.9)
project(Devel)

set(CMAKE_CXX_STANDARD 17)
add_executable(map        main.cpp map.h)
add_executable(map-int    main-int.cpp map-int.h)
