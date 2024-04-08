#ifndef MAIN_NODO_H
#define MAIN_NODO_H

#include <iostream>
#include <sstream>

using namespace std;

template <class T>
class Nodo{
private:
    T* elemento;
    Nodo<T>* siguiente;
public:
    Nodo(T*, Nodo<T>*);
    virtual ~Nodo();

    void setElemento(Nodo<T>*);
    void setSiguiente(Nodo<T>*);

    T* getElemento() const;
    Nodo<T>* getSiguiente() const;
};

template<class T>
Nodo<T> *Nodo<T>::getSiguiente() const {
    return siguiente;
}

template<class T>
T *Nodo<T>::getElemento() const {
    return elemento;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* _siguiente) {
    siguiente = _siguiente;
}

template<class T>
void Nodo<T>::setElemento(Nodo<T>* _elemento) {
    elemento = _elemento;
}

template<class T>
Nodo<T>::~Nodo() {

}

template<class T>
Nodo<T>::Nodo(T* _elemento, Nodo<T>* _siguiente) {
    elemento = _elemento;
    siguiente = _siguiente;
}

#endif //MAIN_NODO_H