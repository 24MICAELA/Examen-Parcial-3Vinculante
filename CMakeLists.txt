cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_3Vinculante)

set(CMAKE_CXX_STANDARD 14)

include_directories(Actor)
include_directories(Crud)
include_directories(Launcher)
include_directories(Tarea)

add_executable(Examen_Parcial_3Vinculante
    Actor/Actor.cpp
    Actor/Actor.h
    Crud/Crud.cpp
    Crud/Crud.h
    Launcher/Launcher.cpp
    Launcher/Launcher.h
    Tarea/Tarea.cpp
    Tarea/Tarea.h
    main.cpp)
