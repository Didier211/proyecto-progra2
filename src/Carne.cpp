#include "../header/Carne.h"

Carne::Carne(string _nombreAnimal, string _parteAnimal) : nombreAnimal(_nombreAnimal), parteAnimal(_parteAnimal) {

}

Carne::~Carne() {

}

void Carne::setNombreAnimal(string _nombreAnimal) {
    nombreAnimal = _nombreAnimal;
}

void Carne::setParteAnimal(string _parteAnimal) {
    parteAnimal = _parteAnimal;
}

string Carne::getNombreAnimal() const {
    return nombreAnimal;
}

string Carne::getParteAnimal() const {
    return parteAnimal;
}

string Carne::toString() const {
    stringstream s;
    s << "Nombre de animal: " << nombreAnimal << endl;
    s << "Parte de animal: " << parteAnimal << endl;
    return s.str();
}
