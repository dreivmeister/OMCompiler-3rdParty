cmake_minimum_required(VERSION 3.14)
project(colpack LANGUAGES CXX)

add_library(colpack STATIC)

# Build only the library sources (exclude examples and old helper dirs).
file(GLOB COLPACK_SOURCES
  "${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphPartialColoring/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/*.cpp"
)

target_sources(colpack PRIVATE ${COLPACK_SOURCES})

target_include_directories(colpack PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/inc
  ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities
  ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring
  ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring
  ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphPartialColoring
  ${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery
  ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC
)

set_target_properties(colpack PROPERTIES
  POSITION_INDEPENDENT_CODE ON
)
