// checklist.cpp — part of rob-run-raid-timer.

#include "robrunraidtimer/checklist.h"

#include <cstdio>

namespace robrunraidtimer {

Checklist::Checklist(const std::string& config_path)
    : config_path_(config_path) {}

void Checklist::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Checklist::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-raid-timer] checklist: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunraidtimer
