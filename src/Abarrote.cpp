#include "Abarrote.h"

Abarrote::Abarrote(string _empresaNombre) : empresaNombre(_empresaNombre) {
}

Abarrote::~Abarrote() {

}

void Abarrote::setEmpresaNombre(string _empresaNombre) {
    empresaNombre = _empresaNombre;
}

string Abarrote::getEmpresaNombre() const {
    return empresaNombre;
}

string Abarrote::toString() const {
    stringstream s;
    s << "Nombre de la empresa: " << empresaNombre <<endl;
    return s.str();
}

ostream &operator<<(ostream& salida, const Abarrote& a2) {
    salida << a2.toString();
    return salida;
}
