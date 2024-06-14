cmake_minimum_required(VERSION 3.8)
project(LGFX_SDL)

add_definitions(-DLGFX_SDL)

file(GLOB LGFX_SRC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURE_DEPENDS
    *.cpp
    lib/LovyanGFX/src/lgfx/Fonts/efont/*.c
    lib/LovyanGFX/src/lgfx/Fonts/IPA/*.c
    lib/LovyanGFX/src/lgfx/utility/*.c
    lib/LovyanGFX/src/lgfx/v1/*.cpp
    lib/LovyanGFX/src/lgfx/v1/misc/*.cpp
    lib/LovyanGFX/src/lgfx/v1/panel/Panel_Device.cpp
    lib/LovyanGFX/src/lgfx/v1/panel/Panel_FrameBufferBase.cpp
    lib/LovyanGFX/src/lgfx/v1/platforms/sdl/*.cpp
)

add_executable (LGFX_SDL
        ${LGFX_SRC}
)

set(SDL2_DIR "lib/SDL2/x86_64-w64-mingw32")
add_subdirectory("lib/mooncake")
add_subdirectory("lib/smooth_ui_toolkit")
add_subdirectory("user")
# 设置要关联的库的路径
target_link_directories(LGFX_SDL PUBLIC "${SDL2_DIR}/bin")
#target_link_directories(LGFX_SDL PUBLIC "lib/smooth_ui_toolkit/src/")

target_include_directories(LGFX_SDL PUBLIC "lib/smooth_ui_toolkit/src/")
target_include_directories(LGFX_SDL PUBLIC "lib/spdlog/include/")
target_include_directories(LGFX_SDL PUBLIC "lib/LovyanGFX/src/")
target_include_directories(LGFX_SDL PUBLIC "${SDL2_DIR}/include")
target_include_directories(LGFX_SDL PUBLIC "user")

target_link_libraries(LGFX_SDL mingw32 SDL2main SDL2 smooth_ui_toolkit mooncake user)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/Zc:__cplusplus>")

target_compile_features(LGFX_SDL PUBLIC cxx_std_17)

