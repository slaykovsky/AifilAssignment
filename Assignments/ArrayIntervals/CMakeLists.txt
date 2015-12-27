project(ArrayIntervals)

set(HEADER_FILES arrayIntervals.h)
set(SOURCE_FILES arrayIntervals.cpp)

add_library(ArrayIntervals STATIC ${HEADER_FILES} ${SOURCE_FILES})