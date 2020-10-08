cmake_minimum_required(VERSION 3.17)
project(Lab2020_P)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2020_P main.cpp container.h figure.h parallelepiped_struct.h sphere_struct.h
        sphere.h parallelepiped.h container_struct.h element.h figure_struct.h mType.h
        figure_clear.h figure_in.h figure_out.h figure_clear.cpp figure_in.cpp figure_out.cpp figure_getkey.cpp
        figure_getkey.h parallelepiped_clear.cpp parallelepiped_clear.h parallelepiped_in.h parallelepiped_in.cpp
        parallelepiped_out.cpp parallelepiped_out.h sphere_out.h sphere_clear.cpp sphere_clear.h
        sphere_in.cpp sphere_in.h sphere_out.cpp container_clear.cpp container_clear.h container_hashfunctions.cpp
        container_hashfunctions.h container_in.cpp container_in.h container_out.cpp container_out.h
        figure_funct.cpp figure_funct.h parallelepiped_funct.h parallelepiped_funct.cpp sphere_funct.cpp
        sphere_funct.h container_sort.cpp container_sort.h
        tetraedr.h tetraedr_clear.cpp tetraedr_clear.h tetraedr_struct.h tetraedr_in.cpp tetraedr_in.h
        tetraedr_out.cpp tetraedr_out.h tetraedr_funct.cpp tetraedr_funct.h)
