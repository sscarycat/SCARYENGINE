#include "SCARYRENDERER.h"
#include <iostream>

void SCARYRENDERER::print_ascii_pointer(const char* splash) {
    while (*splash) {
        putchar(*splash++);
    }
}

void SCARYRENDERER::print_ascii(const std::string& splash) {
    std::cout << splash;
}

void SCARYRENDERER::type_text(std::string_view text, int delay, SCARYENGINE& engine) {
    for (char c : text) {
        std::cout << c << std::flush;
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

void SCARYRENDERER::make_call(int count, int ms, std::string text, SCARYENGINE& engine) {
    for (int call = 0; call < count; call++) {
        engine.sleep_for(ms);
        engine.clear();
        std::cout << text;
        engine.sleep_for(ms);
    }
}

void SCARYRENDERER::DrawMenu(const char *splash, const std::vector<std::string>& elements) {
    while (*splash) {
        putchar(*splash++);
    }

    for (size_t x = 0; x < elements.size(); x++) {
        std::cout << elements[x] << std::endl;
    }
}