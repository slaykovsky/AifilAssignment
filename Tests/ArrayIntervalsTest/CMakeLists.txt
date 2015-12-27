project(ArrayIntervalsList)

include_directories(${gtest_SOURCE_DIR}/includes $gtest_SOURCE_DIR)

add_executable(RunArrayIntervalsTest ArrayIntervalsTest.cpp)

target_link_libraries(RunArrayIntervalsTest gtest gtest_main ArrayIntervals)