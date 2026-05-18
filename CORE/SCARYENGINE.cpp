#include "SCARYENGINE.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <random>

SCARYENGINE::SCARYENGINE() {
    clear();
    std::cout << "=========================================\n"
                 "        POWERED BY SCARYENGINE           \n"
                 "           (c) sscarycat                 \n"
                 "=========================================\n";
    sleep_for(2000);
    clear();
}

void SCARYENGINE::clear() {
    std::cout << "\033[2J\033[H";
}

void SCARYENGINE::sleep_for(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int SCARYENGINE::Random(int min, int max) {
    static std::random_device rd;
    static std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}