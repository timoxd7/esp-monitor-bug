cmake_minimum_required(VERSION 3.5)

set(COMPONENTS cxx app bootloader esptool_py main)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp-uart-empty)

idf_build_set_property(COMPILE_OPTIONS "-fdiagnostics-color=always" APPEND)
