#include "../header/Embutido.h"

Embutido::Embutido(string _marca) : marca(_marca) {

}

Embutido::~Embutido() {

}

void Embutido::setMarca(string _marca) {
    marca = _marca;
}

string Embutido::getMarca() {
    return marca;
}

string Embutido::toString() const {
   stringstream s;
   s<<"Marca: "<< marca << endl;
    return s.str();
}
