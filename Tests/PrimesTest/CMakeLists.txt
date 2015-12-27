project(PrimesTest)

include_directories(${gtest_SOURCE_DIR}/includes $gtest_SOURCE_DIR)

add_executable(RunPrimesTest PrimesTest.cpp)

target_link_libraries(RunPrimesTest gtest gtest_main Primes)