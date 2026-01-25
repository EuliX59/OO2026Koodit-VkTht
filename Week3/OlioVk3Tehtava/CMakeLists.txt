cmake_minimum_required(VERSION 3.16)

project(OlioVk3Tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OlioVk3Tehtava main.cpp
    chef.cpp chef.h  CMakeLists.txt.user italianchef.cpp italianchef.h
)

include(GNUInstallDirs)
install(TARGETS OlioVk3Tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
