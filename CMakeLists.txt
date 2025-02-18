# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# Установите название проекта
project(MyProject)

# Укажите стандарт C++
set(CMAKE_CXX_STANDARD 11)

# Добавьте подкаталог с исходным кодом
add_executable(MyProject src/main.cpp src/utils.cpp)