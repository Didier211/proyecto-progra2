#ifndef MAIN_CONSERVA_H
#define MAIN_CONSERVA_H

#include <iostream>
#include <sstream>

#include "Producto.h"

using namespace std;

class Conserva : public Producto
{
private:
    bool envasado;
public:
    Conserva(string = "", string = "", string = "", double = 0, string = "", int = 0, int = 0, Fecha* = nullptr, bool = false);
    ~Conserva();

    void setEnvasado(bool);

    bool getEnvasado() const;

    string toString() const;
};

#endif //MAIN_CONSERVA_H