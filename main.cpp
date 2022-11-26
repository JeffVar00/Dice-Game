
#include <cstdlib>
#include <iostream>
using namespace std;

#include "juego.h"
#include "jugador.h"

int main(int argc, char** argv) {

    juego j;

    j.agregarJugador(new jugador("Hugo"));
    j.agregarJugador(new jugador("Paco"));
    j.agregarJugador(new jugador("Luis"));

    int rondas = juego::MAX_RONDAS;
    cout << endl;
    cout << "Inicia el juego con " << j.numeroJugadores();
    cout << " jugador(es) a " << rondas << " ronda(s).." << endl;
    cout << endl;

    j.jugar(rondas);
    jugador* g = j.ganador();
    if (g != NULL) {
        cout << "El ganador del juego es " << g->obtenerNombre();
        cout << ", quien obtuvo " << g->obtenerVictorias();
        cout << " victoria(s)." << endl;
    } else {
        cout << "El juego termina y no hay ningún ganador.." << endl;
    }

    cout << endl;

    return 0;
}

