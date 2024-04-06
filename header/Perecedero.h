#ifndef MAIN_PERECEDERO_H
#define MAIN_PERECEDERO_H

#include <iostream>
#include <sstream>

#include "Producto.h"
#include "Fecha.h"
#include "Abarrote.h"
#include "Embutido.h"

using namespace std;

class Perecedero : public Producto {
private:
    bool nacional;
    double peso;
    Fecha* fechaVencimiento;
    Abarrote* abarrote;
    Embutido* embutido;
public:
    Perecedero(string = "", string = "", string = "", double = 0, string = "", int = 0, int = 0, Fecha* = nullptr, bool = false, double = 0, Fecha* = nullptr);
    ~Perecedero();

    void setNacional(bool);
    void setPeso(double);
    void setFechaVencimiento(Fecha*);
    void setAbarrote(Abarrote*);
    void setEmbutido(Embutido*);

    bool getNacional() const;
    double getPeso() const;
    Fecha* getFechaVencimiento() const;
    Abarrote* getAbarrote() const;
    Embutido* getEmbutido() const;

    string toString() const;
    string toStringAbarrote() const;
    string toStringEmbutido() const;
};
#endif //MAIN_PERECEDERO_H