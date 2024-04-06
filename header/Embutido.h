#ifndef MAIN_EMBUTIDO_H
#define MAIN_EMBUTIDO_H

#include <iostream>
#include <sstream>

using namespace std;

class Embutido {
private:
    string marca;
public:
    Embutido(string = "");
    ~Embutido();

    void setMarca(string);

    string getMarca();

    string toString() const;

};
#endif //MAIN_EMBUTIDO_H