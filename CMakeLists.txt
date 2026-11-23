cmake_minimum_required(VERSION 3.16)
project(rob-run-raid-timer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robrunraidtimer
    src/main.cpp
    src/timer.cpp
    src/reminders.cpp
    src/checklist.cpp
)

target_include_directories(robrunraidtimer PRIVATE include)

if(WIN32)
    target_link_libraries(robrunraidtimer PRIVATE userenv)
endif()
