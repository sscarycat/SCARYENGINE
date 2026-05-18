
#ifndef SCARYENGINE_SCARYRENDERER_H
#define SCARYENGINE_SCARYRENDERER_H
#include <string>
#include <vector>
#include <iostream>
#include "../CORE/SCARYENGINE.h"


class SCARYRENDERER {
public:
    void print_ascii_pointer(const char* splash);
    void print_ascii(const std::string& splash);
    void type_text(std::string_view text, int delay, SCARYENGINE& engine);
    void play_dialog(const std::vector<Line>& dg, SCARYENGINE& engine);
    void make_call(int count, int ms, std::string text, SCARYENGINE& engine);
    void DrawMenu(const char *splash, const std::vector<std::string>& elements);
};


#endif //SCARYENGINE_SCARYRENDERER_H
