#ifndef MAIN_LISTA_H
#define MAIN_LISTA_H

#include <iostream>
#include <sstream>

#include "Nodo.h"

using namespace std;

template <class T>
class Lista{
private:
    Nodo<T>* inicio;
    int cant;
public:
    Lista();
    virtual ~Lista();

    void ingresarElemento(T*);
    string toString();
    Nodo<T>* getInicio();
    int getCant();
    void setCant(int);
    T* retornaPosicion(int);
    bool elimina(int);
};

template<class T>
bool Lista<T>::elimina(int pos) {
    Nodo<T>* borrado = NULL;
    int cantidad = getCant();
    int contador = 1;
    Nodo<T>* i = inicio;

    if(cantidad >= pos){
        if(pos == 1){
            borrado = inicio;
            if(borrado != NULL){
                inicio = borrado->getSiguiente();
                delete borrado;
            }
            cantidad--;
            return true;
        }
        while(contador < pos-1){
            i = i->getSiguiente();
            contador++;
        }
        borrado = i->getSiguiente();
        if(borrado != NULL){
            i->setSiguiente(borrado->getSiguiente());
            delete borrado;
        }
        cantidad--;
        return  true;
    }
    else{
        return false;
        //Este caso sería porque ese lugar no está en la lista
    }
}

template<class T>
T *Lista<T>::retornaPosicion(int pos) {
    Nodo<T>* i = inicio;
    int contador = 0;

    while(i != NULL){
        contador++;
        if(contador == i){
            return i->getElemento();
        }
        i = i->getSiguiente();
    }
    return NULL;
}

template<class T>
void Lista<T>::setCant(int _cant) {
    cant = _cant;
}

template<class T>
int Lista<T>::getCant() {
    return inicio;
}

template<class T>
Nodo<T> *Lista<T>::getInicio() {
    return inicio;
}

template<class T>
string Lista<T>::toString() {
    stringstream s;
    Nodo<T>* i = inicio;
    while(i != NULL){
        s << *i->getElemento() << endl;
        i = i->getSiguiente();
    }
}

template<class T>
void Lista<T>::ingresarElemento(T* elemento) {
    Nodo<T>* nuevo = new Nodo<T>(elemento, NULL);
    Nodo<T>* actual = inicio;

    if(inicio == NULL){
        inicio = nuevo;
    }
    else{
        while(actual->getSiguiente() != NULL){
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }
    cant++;
}

template<class T>
Lista<T>::~Lista() {

}

template<class T>
Lista<T>::Lista() {
    inicio = NULL;
    cant = 0;
}

#endif //MAIN_LISTA_H