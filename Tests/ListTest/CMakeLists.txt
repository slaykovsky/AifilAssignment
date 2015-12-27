project(ListTest)

include_directories(${gtest_SOURCE_DIR}/includes $gtest_SOURCE_DIR)

add_executable(RunListTest ListTest.cpp)

target_link_libraries(RunListTest gtest gtest_main List)