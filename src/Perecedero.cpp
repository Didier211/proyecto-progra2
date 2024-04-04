#include "../header/Perecedero.h"

Perecedero::Perecedero(string _codigo, string _nombreComercial, string _descripcion, double _precioCosto, string _categoria, int _existencia, int _limite, Fecha* _fechaIngreso, Fecha* _fechaVencimiento) : Producto(_codigo, _nombreComercial, _descripcion, _precioCosto, _categoria, _existencia, _limite, _fechaIngreso), fechaVencimiento(_fechaVencimiento){

}

Perecedero::~Perecedero() {
    delete fechaVencimiento;
}

void Perecedero::setFechaVencimiento(Fecha* _fechaVencimiento) {
    fechaVencimiento = _fechaVencimiento;
}

Fecha *Perecedero::getFechaVencimiento() const {
    return fechaVencimiento;
}

string Perecedero::toString() const {
    stringstream s;
    s << "--- Producto Perecedero ---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre Comercial: " << nombreComercial << endl;
    s << "Descripcion: " << descripcion << endl;
    s << "Precio costo: " << precioCosto << endl;
    s << "Categoria: " << categoria << endl;
    s << "Existencia: " << existencia << endl;
    s << "Limite: " << limite << endl;
    s << "Fecha de ingreso: " << fechaIngreso->toString() << endl;
    s << "Fecha de vencimiento: " << fechaVencimiento->toString() <<endl;
    return s.str();
}
