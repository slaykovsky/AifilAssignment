project(Primes)

set(HEADER_FILES primes.h)
set(SOURCE_FILES primes.cpp)

add_library(Primes STATIC ${SOURCE_FILES} ${HEADER_FILES})