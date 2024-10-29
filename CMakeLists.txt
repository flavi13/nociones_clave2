cmake_minimum_required(VERSION 3.10)
project(nociones_clave2)

set(CMAKE_CXX_STANDARD 14)

# Crear la biblioteca estática
add_library(matematicas_static STATIC segunda_parte/matematicas.cpp)

# Crear la biblioteca dinámica
add_library(matematicas_shared SHARED segunda_parte/matematicas.cpp)

# Primer ejecutable enlazado a la biblioteca estática
add_executable(nociones_clave2
        primera_parte/main.cpp
        primera_parte/persona.cpp
        primera_parte/estudiante.cpp
        primera_parte/main.h
        primera_parte/estudiante.h
        primera_parte/persona.h
)

target_link_libraries(nociones_clave2 matematicas_static)

# Segundo ejecutable enlazado a la biblioteca dinámica
add_executable(nociones_clave2_2
        segunda_parte/main2.cpp
        segunda_parte/funciones.cpp
        segunda_parte/nuevo.cpp
        segunda_parte/funciones.h
        segunda_parte/matematicas.h
        segunda_parte/encabezado.cpp
        segunda_parte/encabezado.h
)

target_link_libraries(nociones_clave2_2 matematicas_shared)
