#include "user/hal/hal.h"
#include "spdlog/spdlog.h"
#include "smooth_ui_toolkit.h"
using namespace SmoothUIToolKit;

/**
 * @file main.cpp
 * @author Forairaaaaa
 * @brief
 * https://github.com/lovyan03/LovyanGFX/tree/fa1e250bff49e933a5d2eeccd15dab0b8f5dfb02/examples_for_PC
 * @version 0.1
 * @date 2023-11-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "user/simu_project.h"

void setup()
{
    spdlog::info("setup");
    SIMU_PROJECT::Setup();
}

void loop()
{
    SIMU_PROJECT::Loop();
}
