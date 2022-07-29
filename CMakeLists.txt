cmake_minimum_required(VERSION 3.2)

project(mplayer)

find_package(yaml-cpp)
add_definitions(-std=c++11)
include_directories(include)
set(SRCS src/mplayer.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
list(APPEND thirdparty_libraries
    ${Boost_LIBRARIES}
    ${OpenCV_LIBRARIES}
)

add_executable(mplayer ${SRCS})

target_link_libraries(mplayer yaml-cpp ${thirdparty_libraries})
