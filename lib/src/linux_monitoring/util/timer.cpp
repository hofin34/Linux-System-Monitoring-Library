/**
 * @author: Daniel Fuchs
 * @contact: fuxeysolutions@gmail.com
 *
 * distributed under the MIT License (MIT).
 * Copyright (c) Daniel Fuchs
 *
 */
#include <linux_monitoring/util/timer.hpp>

namespace linux_monitoring::util{
    std::shared_ptr<Timer> Timer::instance = nullptr;
}