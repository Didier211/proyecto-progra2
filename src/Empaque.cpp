#include "Empaque.h"

Empaque::Empaque(bool _tripa) : tripa(_tripa) {

}

Empaque::~Empaque() {

}

void Empaque::setTripa(bool _tripa) {
    tripa = _tripa;
}

bool Empaque::getTripa() const {
    return tripa;
}

string Empaque::toString() const {
    stringstream s;
    s << "Tripa: ";
    if(tripa == true){
        s << "si" << endl;
    } else {
        s << "no" << endl;
    }
    return s.str();
}

ostream &operator<<(ostream& salida, const Empaque& e2) {
    salida << e2.toString();
    return salida;
}
