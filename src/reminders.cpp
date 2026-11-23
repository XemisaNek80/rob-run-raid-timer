// reminders.cpp — part of rob-run-raid-timer.

#include "robrunraidtimer/reminders.h"

#include <cstdio>

namespace robrunraidtimer {

Reminders::Reminders(const std::string& config_path)
    : config_path_(config_path) {}

void Reminders::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Reminders::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-raid-timer] reminders: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunraidtimer
