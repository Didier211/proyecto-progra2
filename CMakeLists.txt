cmake_minimum_required(VERSION 3.00)    # Minimum version of CMake
project(main VERSION 1.0)               # Project name and version

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)              # C++17
SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)    # Export compile commands for clangd
# Check operating system and set the compiler
if(APPLE)
    # For macOS
    set(CMAKE_CXX_COMPILER "clang++")
elseif()
    # For Windows, Linux and other Unix-like systems, excluding macOS
    set(CMAKE_CXX_COMPILER "g++")
endif()
SET(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES  ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}) # Add implicit include directories
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")   # Disable optimization for debug builds
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")       # Disable optimization for debug builds

include_directories(include)            # Add include directory
file(GLOB SRC src/*.cpp include/*.h)    # Add source files
add_executable(main ${SRC}
        src/Producto.cpp
        include/Producto.h
        include/Producto.h
        src/Fecha.cpp
        include/Fecha.h
        src/Categoria.cpp
        include/Categoria.h
        src/Conserva.cpp
        include/Conserva.h
        src/Perecedero.cpp
        include/Perecedero.h
        src/Abarrote.cpp
        include/Abarrote.h
        src/Embutido.cpp
        include/Embutido.h
        src/Carne.cpp
        include/Carne.h
        src/Empaque.cpp
        include/Empaque.h
        include/Nodo.h
        include/Lista.h
        src/main.cpp
)
# Copy compile_commands.json to project root
add_custom_target(
        copy-compile-commands ALL
        ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_CURRENT_LIST_DIR}
)
