cmake_minimum_required(VERSION 3.3)
project(AifilAssignment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(AifilAssignment ${SOURCE_FILES})

include_directories(Assignments/Primes)
include_directories(Assignments/List)
include_directories(Assignments/ArrayIntervals)
include_directories(Assignments/GetoptLong)

target_link_libraries(AifilAssignment Primes List ArrayIntervals GetoptLong)

add_subdirectory(Assignments/Primes)
add_subdirectory(Assignments/List)
add_subdirectory(Assignments/ArrayIntervals)
add_subdirectory(Assignments/GetoptLong)
add_subdirectory(Tests)