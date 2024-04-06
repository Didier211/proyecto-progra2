#include "../header/Conserva.h"

Conserva::Conserva(string _codigo, string _nombreComercial, string _descripcion, double _precioCosto, string _categoria, int _existencia, int _limite, Fecha* _fechaIngreso, Categoria* _cat, bool _envasado) : Producto(_codigo, _nombreComercial, _descripcion, _precioCosto, _categoria, _existencia, _limite, _fechaIngreso, _cat), envasado(_envasado)
{
}

Conserva::~Conserva()
{
}

void Conserva::setEnvasado(bool _envasado)
{
    envasado = _envasado;
}

bool Conserva::getEnvasado() const
{
    return envasado;
}

string Conserva::toString() const
{
    stringstream s;
    s << "--- Producto Conserva ---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre Comercial: " << nombreComercial << endl;
    s << "Descripcion: " << descripcion << endl;
    s << "Precio costo: " << precioCosto << endl;
    s << "Categoria: " << categoria << endl;
    s << "Existencia: " << existencia << endl;
    s << "Limite: " << limite << endl;
    s << "Fecha de ingreso: " << fechaIngreso->toString() << endl;
    s << "Envasado: ";
    if (envasado == true) {
        s << "si" << endl;
    }
    else {
        s << "no" << endl;
    }
    return s.str();
}

ostream &operator<<(ostream& salida, const Conserva& c2) {
    salida<<c2.toString();
    return salida;
}
