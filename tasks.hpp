#pragma once

#include <functional>
#include "log.hpp"

using namespace LogSystemModule;

using task_t = std::function<void()>;

void check()
{
    LOG(LogLevel::DEBUG) << "测试check函数";
}