
#include "juego.h"

const int juego::MAX_RONDAS = 7;

juego::juego() {
//    cout << "juego::juego()" << endl;
}

juego::~juego() {
//    cout << "juego::~juego()" << endl;
}

void juego::agregarJugador(jugador* nuevoJugador) {
    jugadores.agregarJugador(nuevoJugador);
}

int juego::numeroJugadores() {
    return jugadores.numeroJugadores();
}

void juego::jugar(int rondas) {
    for (int r = 0; r < rondas; r++) {
        jugarRonda();
    }
}

void juego::jugarRonda() {
    cout << "Inicia una nueva ronda.." << endl;
    jugadores.jugar(dados);
    cout << endl;
}

jugador* juego::ganador() {
    return jugadores.ganador();
}
