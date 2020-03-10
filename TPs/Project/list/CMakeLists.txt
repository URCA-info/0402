cmake_minimum_required(VERSION 3.9)
project(Devel)

set(CMAKE_CXX_STANDARD 17)
add_executable(list        main.cpp list.h)
add_executable(list-int    main-int.cpp list-int.h)
