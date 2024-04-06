#ifndef MAIN_EMPAQUE_H
#define MAIN_EMPAQUE_H

#include <iostream>
#include <sstream>

using namespace std;

class Empaque {
private:
    bool tripa;
public:
    Empaque(bool = false);
    ~Empaque();

    void setTripa(bool);

    bool getTripa() const;

    string toString() const;
};
#endif //MAIN_EMPAQUE_H