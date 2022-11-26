
#include <iostream>
using namespace std;

#include "conjuntoJugadores.h"

conjuntoJugadores::conjuntoJugadores() : ganadorR(NULL) {
//    cout << "conjuntoJugadores::conjuntoJugadores()" << endl;
}

conjuntoJugadores::~conjuntoJugadores() {
    while (!jugadores.empty()) {
        jugador* j = jugadores.front();
        jugadores.pop_front();
        delete j;
    }

//    cout << "conjuntoJugadores::~conjuntoJugadores()" << endl;
}

void conjuntoJugadores::agregarJugador(jugador* nuevoJugador) {
    jugadores.push_back(nuevoJugador);

    cout << "Se une un nuevo jugador: ";
    cout << nuevoJugador->obtenerNombre() << endl;
}

int conjuntoJugadores::numeroJugadores() {
    return jugadores.size();
}

void conjuntoJugadores::jugar(conjuntoDados& dados) {
    for (list<jugador*>::iterator j = jugadores.begin();
            j != jugadores.end(); j++) {
        (*j)->jugar(dados);
    }

    obtenerGanadorRonda();
    if (ganadorRonda() != NULL) {
        cout << ganadorRonda()->obtenerNombre();
        cout << " gana esta ronda, y acumula ";
        cout << ganadorRonda()->obtenerVictorias();
        cout << " victoria(s).." << endl;
    } else {
        cout << "Esta ronda termina en un empate.." << endl;
    }
}

jugador* conjuntoJugadores::ganadorRonda() {
    return ganadorR;
}

jugador* conjuntoJugadores::ganador() {
    jugador* ultimoGanador = NULL;
    bool hayEmpate = false;
    for (list<jugador*>::iterator actual = jugadores.begin();
            actual != jugadores.end(); actual++) {
        if (ultimoGanador != NULL) {
            if ((*actual)->obtenerVictorias() > ultimoGanador->obtenerVictorias()) {
                ultimoGanador = *actual;
                hayEmpate = false;
            } else if ((*actual)->obtenerVictorias() == ultimoGanador->obtenerVictorias()) {
                hayEmpate = true;
            }
        } else {
            ultimoGanador = *actual;
        }
    }
    return (hayEmpate ? NULL : ultimoGanador);
}

void conjuntoJugadores::obtenerGanadorRonda() {
    ganadorR = NULL;

    jugador* ultimoGanador = NULL;
    bool hayEmpate = false;
    for (list<jugador*>::iterator actual = jugadores.begin();
            actual != jugadores.end(); actual++) {
        if (ultimoGanador != NULL) {
            if ((*actual)->obtenerPuntos() > ultimoGanador->obtenerPuntos()) {
                ultimoGanador = *actual;
                hayEmpate = false;
            } else if ((*actual)->obtenerPuntos() == ultimoGanador->obtenerPuntos()) {
                hayEmpate = true;
            }
        } else {
            ultimoGanador = *actual;
        }
    }

    if ((ultimoGanador != NULL) && !hayEmpate) {
        ganadorR = ultimoGanador;
        ganadorR->incrementarVictorias();
    }
}
