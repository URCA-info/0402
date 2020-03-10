cmake_minimum_required(VERSION 3.9)
project(Devel)

set(CMAKE_CXX_STANDARD 17)
add_executable(deque        main.cpp deque.h)
add_executable(deque-int    main-int.cpp deque-int.h)