add_library(filesWorkOn filesWorkOn.cpp)
target_link_libraries(filesWorkOn PRIVATE time)

target_include_directories(filesWorkOn PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
