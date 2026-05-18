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

    void clear();
    void sleep_for(int ms);
    int Random(int min, int max);
    int get_input();
};

#endif