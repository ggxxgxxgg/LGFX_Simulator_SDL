cmake_minimum_required(VERSION 3.8)
set(CMAKE_C_STANDARD 11)#C11
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(user)

file(GLOB_RECURSE SIMU_PROJECT_SRCS
        core_test/*.cpp
        widget_test/*.cpp
        hal/hal_simulator/*.c
        hal/hal_simulator/*.cpp
)

set(SIMU_PROJECT_SRCS_EXTRA
        simu_project.cpp
        hal/hal.cpp
        hal/lgfx_fx/lgfx_fx.cpp
)

include_directories(PRIVATE "../lib/mooncake/src")
include_directories(PRIVATE "../lib/LovyanGFX/src")
include_directories(PRIVATE "../lib/spdlog/include")

#  Build library
add_library(${PROJECT_NAME} ${SIMU_PROJECT_SRCS} ${SIMU_PROJECT_SRCS_EXTRA})
## Include
#target_include_directories(${PROJECT_NAME} PUBLIC ".")
