#include "SCARYRENDERER.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <cstring>
void SCARYRENDERER::print_ascii_pointer(const char* splash) {
    std::fwrite(splash, 1, strlen(splash), stdout);
}

void SCARYRENDERER::print_ascii(const std::string_view splash) {
    std::cout << splash;
}

void SCARYRENDERER::type_text(std::string_view text, int delay, SCARYENGINE& engine) {
    for (char c : text) {
        std::cout << c << std::fflush;
        engine.sleep_for(delay);
    }
}

void SCARYRENDERER::play_dialog(const std::vector<Line>& dg, SCARYENGINE& engine) {
    for (size_t x = 0; x < dg.size(); x++) {
        engine.clear();
        std::cout << dg[x].text;
        engine.sleep_for(dg[x].ms);
    }
}



void SCARYRENDERER::make_call(int count, int ms, const std::string_view text, SCARYENGINE& engine) {
    for (int call = 0; call < count; call++) {
        engine.sleep_for(ms);
        engine.clear();
        std::cout << text;
        engine.sleep_for(ms);
    }
}

void SCARYRENDERER::DrawMenu(const char *splash, const std::vector<std::string_view>& elements) {
    std::fwrite(splash, 1, std::strlen(splash), stdout);

    for (size_t x = 0; x < elements.size(); x++) {
        std::cout << elements[x] << std::endl;
    }
}

std::string_view SCARYRENDERER:: get_user_name() {
    const char* user = std::getenv("USERNAME");

    if (!user) user = std::getenv("USER");

    if (user) return user;

    return "Unknown Victim";
}

