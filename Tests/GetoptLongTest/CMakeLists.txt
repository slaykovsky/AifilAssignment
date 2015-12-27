project(GetoptLongTest)

include_directories(${gtest_SOURCE_DIR}/includes $gtest_SOURCE_DIR)

add_executable(RunGetoptLongTest GetoptLongTest.cpp)

target_link_libraries(RunGetoptLongTest gtest gtest_main GetoptLong)