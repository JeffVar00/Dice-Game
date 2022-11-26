
#ifndef JUEGO_H
#define JUEGO_H

#include <cstdlib>
using namespace std;

#include "conjuntoDados.h"
#include "conjuntoJugadores.h"

class juego {
public:
    static const int MAX_RONDAS;

    juego();
    virtual ~juego();

    virtual void agregarJugador(jugador*);
    virtual int numeroJugadores();
    virtual void jugar(int);
    virtual jugador* ganador();

private:
    virtual void jugarRonda();

    conjuntoDados dados;
    conjuntoJugadores jugadores;
};

#endif /* JUEGO_H */
