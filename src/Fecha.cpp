#include "../header/Fecha.h"

Fecha::Fecha(int _dia, int _mes, int _annio) : dia(_dia), mes(_mes), annio(_annio)
{
}

Fecha::~Fecha()
{
}

void Fecha::setDia(int _dia)
{
    dia = _dia;
}

void Fecha::setMes(int _mes)
{
    mes = _mes;
}

void Fecha::setAnnio(int _annio)
{
    annio = _annio;
}

int Fecha::getDia() const
{
    return dia;
}

int Fecha::getMes() const
{
    return mes;
}

int Fecha::getAnnio() const
{
    return annio;
}

string Fecha::toString() const
{
    stringstream s;
    s << dia << "/" << mes << "/" << annio;
    return s.str();
}
