
#ifndef CONJUNTOJUGADORES_H
#define CONJUNTOJUGADORES_H

#include <cstdlib>
#include <list>
using namespace std;

#include "jugador.h"

class conjuntoJugadores {
public:
    conjuntoJugadores();
    virtual ~conjuntoJugadores();

    virtual void agregarJugador(jugador*);
    virtual int numeroJugadores();
    virtual void jugar(conjuntoDados&);
    virtual jugador* ganadorRonda();
    virtual jugador* ganador();

private:
    virtual void obtenerGanadorRonda();

    list<jugador*> jugadores;
    jugador* ganadorR;
};

#endif /* CONJUNTOJUGADORES_H */
