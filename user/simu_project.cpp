/**
 * @file rachel.cpp
 * @author Forairaaaaa
 * @brief
 * @version 0.1
 * @date 2023-11-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "simu_project.h"
#include "hal/hal.h"
#include <mooncake.h>

#ifndef ESP_PLATFORM
#include "hal/hal_simulator/hal_simulator.hpp"
#else
#include "hal/hal_core2/hal_core2.hpp"
#endif

void SIMU_PROJECT::Setup()
{
    spdlog::info("simu project setup");

// HAL injection
#ifndef ESP_PLATFORM
    // HAL::Inject(new HAL_Simulator(640, 640));
    // HAL::Inject(new HAL_Simulator(320, 240));
    HAL::Inject(new HAL_Simulator(1280, 800));
#else
    HAL::Inject(new HAL_Core2());
#endif
}

// #include <random>
// std::random_device rd;
// std::mt19937 gen(rd());
// int Game_random(int low, int high)
// {
//     std::uniform_int_distribution<> dist(low, high);
//     return dist(gen);
// }

void easing_path_simple_test();
void easing_path_play_with_transition();
void transition_simple_test();
void transition_user_data_test();
void smooth_point_simple_test();
void smooth_point_bubble_pool_test();
void smooth_drag_simple_test();
void smooth_drag_content_test();
void smooth_color_test();

void select_menu_smooth_option_test();
void select_menu_smooth_selector_test();
void ring_buffer_test();
void line_chart_test();
void line_chart_test2();

void draw_line_test();

void smooth_widget_base_test();

void SIMU_PROJECT::Loop()
{
    // easing_path_simple_test();
    // easing_path_play_with_transition();

    // transition_simple_test();
    // transition_user_data_test();

    // smooth_point_simple_test();
    // smooth_point_bubble_pool_test();

    // smooth_drag_simple_test();
    // smooth_drag_content_test();

    // select_menu_smooth_option_test();
    // select_menu_smooth_selector_test();

    // ring_buffer_test();
    // line_chart_test();
    line_chart_test2();
//    draw_line_test();

    // smooth_color_test();

    // smooth_widget_base_test();
}

void SIMU_PROJECT::Destroy()
{
    // Free
    HAL::Destroy();
    spdlog::warn("simu project destroy");
}
