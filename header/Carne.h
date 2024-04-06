#ifndef MAIN_CARNE_H
#define MAIN_CARNE_H

#include <iostream>
#include <sstream>

using namespace std;

class Carne {
private:
    string nombreAnimal;
    string parteAnimal;
public:
    Carne(string = "", string = "");
    ~Carne();

    void setNombreAnimal(string);
    void setParteAnimal(string);

    string getNombreAnimal() const;
    string getParteAnimal() const;

    string toString() const;

};
#endif //MAIN_CARNE_H