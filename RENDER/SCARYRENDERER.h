
#ifndef SCARYENGINE_SCARYRENDERER_H
#define SCARYENGINE_SCARYRENDERER_H
#include <string>
#include <vector>
#include <iostream>
#include "../CORE/SCARYENGINE.h"


class SCARYRENDERER {
public:
    static void print_ascii_pointer(const char* splash);
    static void print_ascii(const std::string_view splash);
    static void type_text(std::string_view text, int delay, SCARYENGINE& engine);
    static void play_dialog(const std::vector<Line>& dg, SCARYENGINE& engine);
    static void make_call(int count, int ms, const std::string_view text, SCARYENGINE& engine);
    static void DrawMenu(const char *splash, const std::vector<std::string>& elements);
    static std::string_view get_user_name(); 
};


#endif //SCARYENGINE_SCARYRENDERER_H
