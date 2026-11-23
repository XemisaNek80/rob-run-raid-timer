// timer — part of rob-run-raid-timer.

#pragma once

#include <string>
#include <vector>

namespace robrunraidtimer {

class Timer {
public:
    explicit Timer(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robrunraidtimer
