#include "../header/Producto.h"
Producto::Producto(string _codigo, string _nombreComercial, string _descripcion, double _precioCosto, string _categoria, int _existencia, int _limite, Fecha* _fechaIngreso, Categoria* _cat) : codigo(_codigo), nombreComercial(_nombreComercial), descripcion(_descripcion), precioCosto(_precioCosto), categoria(_categoria), existencia(_existencia), limite(_limite), fechaIngreso(_fechaIngreso), cat(_cat)
{
}

Producto::~Producto()
{
    delete fechaIngreso;
    delete cat;
}

void Producto::setCodigo(string _codigo)
{
    codigo = _codigo;
}

void Producto::setNombreComercial(string _nombreComercial)
{
    nombreComercial = _nombreComercial;
}

void Producto::setDescripcion(string _descripcion)
{
    descripcion = _descripcion;
}

void Producto::setPrecioCosto(double _precioCosto)
{
    precioCosto = _precioCosto;
}

void Producto::setCategoria(string _categoria)
{
    categoria = _categoria;
}

void Producto::setExistencia(int _existencia)
{
    existencia = _existencia;
}

void Producto::setLimite(int _limite)
{
    limite = _limite;
}

void Producto::setFechaIngreso(Fecha* _fechaIngreso)
{
    fechaIngreso = _fechaIngreso;
}

string Producto::getCodigo()
{
    return codigo;
}

string Producto::getNombreComercial()
{
    return nombreComercial;
}

string Producto::getDescripcion()
{
    return descripcion;
}

double Producto::getPrecioCosto()
{
    return precioCosto;
}

string Producto::getCategoria()
{
    return categoria;
}

int Producto::getExistencia()
{
    return existencia;
}

int Producto::getLimite()
{
    return limite;
}

Fecha* Producto::getFechaIngreso()
{
    return fechaIngreso;
}

double Producto::precioVenta() const
{
    return precioCosto + (precioCosto * cat->porcentajeGanancia(categoria));
}
