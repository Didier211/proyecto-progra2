#include "../header/Embutido.h"

Embutido::Embutido(string _marca, Carne* _carne, Empaque* _empaque) : marca(_marca), carne(_carne), empaque(_empaque) {

}

Embutido::~Embutido() {
    delete carne;
    delete empaque;
}

void Embutido::setMarca(string _marca) {
    marca = _marca;
}

string Embutido::getMarca() const {
    return marca;
}

string Embutido::toString() const {
   stringstream s;
   s << "Marca: " << marca << endl;
   s << carne->toString() << endl;
   s << empaque->toString() << endl;

    return s.str();
}

void Embutido::setCarne(Carne* _carne) {
    carne = _carne;
}

void Embutido::setEmpaque(Empaque* _empaque) {
    empaque = _empaque;
}

Carne *Embutido::getCarne() const {
    return carne;
}

Empaque *Embutido::getEmpaque() const {
    return empaque;
}