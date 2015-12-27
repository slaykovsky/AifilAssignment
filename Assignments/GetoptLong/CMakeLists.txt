project(GetoptLong)

set(HEADER_FILES getoptLong.h)
set(SOURCE_FILES getoptLong.cpp)

add_library(GetoptLong STATIC ${HEADER_FILES} ${SOURCE_FILES})