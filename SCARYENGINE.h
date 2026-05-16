// created by sscarycat


#ifndef SCARYENGINE_SCARYENGINE_H
#define SCARYENGINE_SCARYENGINE_H
#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <string_view>


/*
 *
 * Краткая сводка по псевдодвижку
 * SCARYENGINE() Это просто плашка что он сделан на моем псевдодвижке. лол
 * Clear() чистит экран используя ANSI последовательность. не рекомендуется к применению если у вас стандартный cmd.exe
 * Sleep_for() Аналог функции из Winapi Sleep(). работает точно также (ну почти)
 * void make_call(int count, int ms, string text) Используется просто чтобы сделать псевдо звонок главному герою принимает. Число Звонков, Задержку между звонками, Текст. по типу *Calling!*
 * print_ascii_pointer(const char* splash) Не рекомендуется к использованию если у вас огромный логотип. если вы будете использовать его то логотип станет выводится быстрее. (правда на пару миллисекунд)
 * print_ascii(const std::string& splash) Не Рекомендуется к огромным логотипам.
 * play_dialog(const vector<Line>& dg) Принимает вектор формата "Текст", Задержка между сообщенями.
 * int Random(int min, int max) Рандом. возвращает рандомное число ОТ. и ДО
 * type_text(string_view text, int delay) медленный принт текста. принимает текст и задержку между буквами.
*/

using namespace std;

struct Line {
    string text;
    int ms;
};

class SCARYENGINE {
public:

    SCARYENGINE() {
        clear();

        const std::string logo =
        "=========================================\n"
        "        POWERED BY SCARYENGINE           \n"
        "           (c) sscarycat                 \n"
        "=========================================\n";

        print_ascii(logo);
        sleep_for(2000);
        clear();
    }

    void clear();
    void sleep_for(int ms);
    void make_call(int count, int ms, string text);
    void print_ascii_pointer(const char* splash);
    void print_ascii(const std::string& splash);
    void play_dialog(const vector<Line>& dg);
    int Random(int min, int max);
    void type_text(string_view text, int delay);
};


#endif //SCARYENGINE_SCARYENGINE_H
