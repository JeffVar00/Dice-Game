

#ifndef JUGADOR_H
#define JUGADOR_H

#include <cstdlib>
#include <iostream>
using namespace std;

#include "conjuntoDados.h"

class jugador {
public:
    jugador(string);
    virtual ~jugador();

    virtual string obtenerNombre();
    virtual int obtenerPuntos();
    virtual int obtenerVictorias();

    virtual void incrementarVictorias();
    virtual void jugar(conjuntoDados&);

private:
    string nombre;
    int puntosObtenidos;
    int victorias;
};

#endif /* JUGADOR_H */

