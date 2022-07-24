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
  day-1/day-1.h day-1/day-1.cpp
  utils/file-utils.cpp utils/file-utils.h
  day-2/day-2.h day-2/day-2.cpp
  day-3/day-3.h day-3/day-3.cpp
  day-4/day-4.h day-4/day-4.cpp
  utils/intcodeparser.h utils/intcodeparser.cpp
  utils/opcodes/opcode.h
  utils/opcodes/add-opcode.h utils/opcodes/add-opcode.cpp
  utils/opcodes/opcode-service.h utils/opcodes/opcode-service.cpp
  utils/opcodes/halt-opcode.h utils/opcodes/halt-opcode.cpp
  utils/opcodes/mul-opcode.h utils/opcodes/mul-opcode.cpp
)
target_link_libraries(advent-of-code-2019 Qt${QT_VERSION_MAJOR}::Core)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/day-1/input.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/day-1)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/day-2/input.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/day-2)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/day-3/input.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/day-3)
