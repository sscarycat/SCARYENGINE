#ifndef SCARYENGINE_H
#define SCARYENGINE_H

#include <string>
#include <vector>

struct Line {
    std::string text;
    int ms;
};

class SCARYENGINE {
public:
    SCARYENGINE();

    static void clear();
    static void sleep_for(int ms);
    static int Random(int min, int max);
    static int get_input();
};

#endif
