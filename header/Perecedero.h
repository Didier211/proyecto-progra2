#ifndef MAIN_PERECEDERO_H
#define MAIN_PERECEDERO_H

#include <iostream>
#include <sstream>

#include "Producto.h"
#include "Fecha.h"

using namespace std;

class Perecedero : public Producto {
private:
    Fecha* fechaVencimiento;
public:
    Perecedero(string = "", string = "", string = "", double = 0, string = "", int = 0, int = 0, Fecha* = nullptr, Fecha* = nullptr);
    ~Perecedero();

    void setFechaVencimiento(Fecha*);

    Fecha* getFechaVencimiento() const;

    string toString() const;
};
#endif //MAIN_PERECEDERO_H