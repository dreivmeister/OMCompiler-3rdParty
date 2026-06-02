cmake_minimum_required(VERSION 3.14)
project(colpack LANGUAGES CXX)

add_library(colpack STATIC)

set(COLPACK_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoringD1Orig.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoringD1.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCOrdering.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoringD2.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoring.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoringD1BIT.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGC.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCColoringHybrid.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/SMPGC/SMPGCGraph.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/stat.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/Pause.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/Timer.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/MatrixDeallocation.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/DisjointSets.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/mmio.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/StringTokenizer.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/extra.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/current_time.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/CoutLock.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/File.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Utilities/command_line_parameter_processor.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery/JacobianRecovery2D.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery/HessianRecovery.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery/JacobianRecovery1D.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/Recovery/RecoveryCore.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphPartialColoring/BipartiteGraphPartialColoring.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphPartialColoring/BipartiteGraphPartialColoringInterface.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphPartialColoring/BipartiteGraphPartialOrdering.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphInputOutput.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphVertexCover.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphOrdering.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphCore.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphBicoloringInterface.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/BipartiteGraphBicoloring/BipartiteGraphBicoloring.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/GraphColoringInterface.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/GraphInputOutput.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/GraphCore.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/GraphColoring.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/GeneralGraphColoring/GraphOrdering.cpp
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

install(TARGETS colpack
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(DIRECTORY inc/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
