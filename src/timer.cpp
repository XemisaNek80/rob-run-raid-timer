// timer.cpp — part of rob-run-raid-timer.

#include "robrunraidtimer/timer.h"

#include <cstdio>

namespace robrunraidtimer {

Timer::Timer(const std::string& config_path)
    : config_path_(config_path) {}

void Timer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Timer::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-raid-timer] timer: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunraidtimer
