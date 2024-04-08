#ifndef MAIN_ABARROTE_H
#define MAIN_ABARROTE_H

#include <iostream>
#include <sstream>

using namespace std;

class Abarrote {
private:
    string empresaNombre;
public:
    Abarrote(string = "");
    ~Abarrote();

    void setEmpresaNombre(string);

    string getEmpresaNombre() const;

    string toString() const;

    friend ostream& operator << (ostream&, const Abarrote&);
};
#endif //MAIN_ABARROTE_H