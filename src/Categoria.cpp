#include "../header/Categoria.h"

double Categoria::porcentajeGanancia(string categoria)
{
    if (categoria == "01") {
        return 0.15;
    }
    else if (categoria == "02") {
        return 0.20;
    }
    else if (categoria == "03") {
        return 0.30;
    }
}