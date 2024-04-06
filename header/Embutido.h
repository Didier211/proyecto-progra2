#ifndef MAIN_EMBUTIDO_H
#define MAIN_EMBUTIDO_H

#include <iostream>
#include <sstream>

#include "Carne.h"
#include "Empaque.h"

using namespace std;

class Embutido {
private:
    string marca;
    Carne* carne;
    Empaque* empaque;
public:
    Embutido(string = "", Carne* = nullptr, Empaque* = nullptr);
    ~Embutido();

    void setMarca(string);
    void setCarne(Carne*);
    void setEmpaque(Empaque*);

    string getMarca() const;
    Carne* getCarne() const;
    Empaque* getEmpaque() const;

    string toString() const;

    friend ostream& operator << (ostream&, const Embutido&);
};
#endif //MAIN_EMBUTIDO_H