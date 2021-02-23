cmake_minimum_required(VERSION 3.9)
project(Devel)

set(CMAKE_CXX_STANDARD 17)
add_executable(set        main.cpp set.h)
add_executable(set-int    main-int.cpp set-int.h)
