
#include "SCARYENGINE.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <random>
#include <vector>
#include <string_view>
#include <cstdio>

void SCARYENGINE::clear() {
    std::cout << "\033[2J\033[H";
}

void SCARYENGINE::sleep_for(int ms) {
    this_thread::sleep_for(chrono::milliseconds(ms));
}

void SCARYENGINE::make_call(int count, int ms, string text) {
    for (int call = 0; call < count; call++) {
        clear();
        cout << text;
        sleep_for(ms);
    }
}

void SCARYENGINE::print_ascii_pointer(const char* splash) {
    while (*splash) {
        putchar(*splash++);
    }
}

void SCARYENGINE::print_ascii(const std::string& splash) {
    std::cout << splash;
}

void SCARYENGINE::play_dialog(const vector<Line>& dg) {
    for (size_t x = 0; x < dg.size(); x++) {
        clear();
        cout << dg[x].text;
        sleep_for(dg[x].ms);
    }
}

int SCARYENGINE::Random(int min, int max) {
    static random_device rd;
    static mt19937 mt(rd());
    uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}

void SCARYENGINE::type_text(string_view text, int delay) {
    for (char c : text) {
        cout << c << flush;
        sleep_for(delay);
    }
}
