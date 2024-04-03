#ifndef MAIN_FECHA_H
#define MAIN_FECHA_H

#include <iostream>
#include <sstream>

using namespace std;

class Fecha
{
private:
    int dia;
    int mes;
    int annio;
public:
    Fecha(int = 0, int = 0, int = 0);
    ~Fecha();

    void setDia(int);
    void setMes(int);
    void setAnnio(int);

    int getDia() const;
    int getMes() const;
    int getAnnio() const;

    string toString() const;
};
#endif //MAIN_FECHA_H