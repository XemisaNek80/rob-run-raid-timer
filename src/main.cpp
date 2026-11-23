// main.cpp — entry point. Wires config and subsystems together.

#include "robrunraidtimer/settings.h"
#include "robrunraidtimer/timer.h"
#include "robrunraidtimer/reminders.h"
#include "robrunraidtimer/checklist.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robrunraidtimer::Settings settings = robrunraidtimer::Settings::load_default();
    robrunraidtimer::Timer timer(settings.store_path);
    robrunraidtimer::Reminders reminders(settings.store_path);
    robrunraidtimer::Checklist checklist(settings.store_path);
    std::fprintf(stderr, "[rob-run-raid-timer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
