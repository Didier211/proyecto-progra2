#ifndef MAIN_PRODUCTO_H
#define MAIN_PRODUCTO_H


#include <iostream>

#include "Fecha.h"
#include "Categoria.h"

using namespace std;

class Categoria;

class Producto
{
protected:
    string codigo;
    string nombreComercial;
    string descripcion;
    double precioCosto;
    string categoria;
    int existencia;
    int limite;
    Fecha* fechaIngreso;
    Categoria* cat;
public:
    Producto(string = "", string = "", string = "", double = 0, string = "", int = 0, int = 0, Fecha* = nullptr, Categoria* = nullptr);
    virtual ~Producto();

    virtual void setCodigo(string);
    virtual void setNombreComercial(string);
    virtual void setDescripcion(string);
    virtual void setPrecioCosto(double);
    virtual void setCategoria(string);
    virtual void setExistencia(int);
    virtual void setLimite(int);
    void setFechaIngreso(Fecha*);

    virtual string getCodigo();
    virtual string getNombreComercial();
    virtual string getDescripcion();
    virtual double getPrecioCosto();
    virtual string getCategoria();
    virtual int getExistencia();
    virtual int getLimite();
    Fecha* getFechaIngreso();

    double precioVenta() const;

    virtual string toString() = 0;
};

#endif //MAIN_PRODUCTO_H