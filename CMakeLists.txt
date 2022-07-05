cmake_minimum_required(VERSION 3.14)

project(advent-of-code-2019 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(advent-of-code-2019
  main.cpp
  day-1/day-1.cpp
  day-1/day-1.h
  utils/file-utils.h
  utils/file-utils.cpp
)
target_link_libraries(advent-of-code-2019 Qt${QT_VERSION_MAJOR}::Core)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/day-1/input.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/day-1)
