cmake_minimum_required(VERSION 3.22)

target_sources(${CMAKE_PROJECT_NAME} PRIVATE main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
        board tests
)
