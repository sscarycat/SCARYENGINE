
#include "SCARYENGINE.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <random>
#include <vector>
#include <string_view>
#include <cstdio>
#include <conio.h>

void SCARYENGINE::clear() {
    std::cout << "\033[2J\033[H";
}

void SCARYENGINE::sleep_for(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void SCARYENGINE::make_call(int count, int ms, std::string text) {
    for (int call = 0; call < count; call++) {
        sleep_for(ms);
        clear();
        std::cout << text;
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

void SCARYENGINE::play_dialog(const std::vector<Line>& dg) {
    for (size_t x = 0; x < dg.size(); x++) {
        clear();
        std::cout << dg[x].text;
        sleep_for(dg[x].ms);
    }
}

int SCARYENGINE::Random(int min, int max) {
    static std::random_device rd;
    static std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}

void SCARYENGINE::type_text(std::string_view text, int delay) {
    for (char c : text) {
        std::cout << c << fflush;
        sleep_for(delay);
    }
}

void SCARYENGINE::ScaryRENDERER::DrawMenu(const char *splash, const std::vector<std::string>& elements) {
    while (*splash) {
        putchar(*splash++);
    }


    for (size_t x = 0; x < elements.size(); x++) {
        std::cout << elements[x] << std::endl;
    }
}

int SCARYENGINE::get_input() {
    int key = _getch();

    return key;
}
