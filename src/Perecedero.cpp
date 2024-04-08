#include "Perecedero.h"

Perecedero::Perecedero(string _codigo, string _nombreComercial, string _descripcion, double _precioCosto, string _categoria, int _existencia, int _limite, Fecha* _fechaIngreso, bool _nacional, double _peso, Fecha* _fechaVencimiento) : Producto(_codigo, _nombreComercial, _descripcion, _precioCosto, _categoria, _existencia, _limite, _fechaIngreso), nacional(_nacional), peso(_peso), fechaVencimiento(_fechaVencimiento){
    abarrote = new Abarrote();
    embutido = new Embutido();
}

Perecedero::~Perecedero() {
    delete fechaVencimiento;
    delete abarrote;
    delete embutido;
}

void Perecedero::setNacional(bool _nacional) {
    nacional = _nacional;
}

void Perecedero::setPeso(double _peso) {
    peso = _peso;
}

void Perecedero::setFechaVencimiento(Fecha* _fechaVencimiento) {
    fechaVencimiento = _fechaVencimiento;
}

bool Perecedero::getNacional() const {
    return nacional;
}

double Perecedero::getPeso() const {
    return peso;
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
    s << "Nacional: ";
    if(nacional == true){
        s << "si"<<endl;
    }else{
        s << "no"<<endl;
    }
    s << "Peso: " << peso << endl;
    return s.str();
}

void Perecedero::setAbarrote(Abarrote* _abarrote) {
    abarrote = _abarrote;
}

void Perecedero::setEmbutido(Embutido* _embutido) {
    embutido = _embutido;
}

Abarrote *Perecedero::getAbarrote() const {
    return abarrote;
}

Embutido *Perecedero::getEmbutido() const {
    return embutido;
}

string Perecedero::toStringAbarrote() const {
    stringstream s;
    s << abarrote->toString() << endl;
    return s.str();
}

string Perecedero::toStringEmbutido() const {
    stringstream s;
    s << embutido->toString() << endl;
    return s.str();
}

ostream &operator<<(ostream& salida, const Perecedero& p2) {
    salida << p2.toString();
    salida << p2.toStringAbarrote();
    salida << p2.toStringEmbutido();
    return salida;
}







