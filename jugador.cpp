
#include "jugador.h"

jugador::jugador(string nombre)
: nombre(nombre), victorias(0), puntosObtenidos(0) {
//    cout << "jugador::jugador(string)" << endl;
}

jugador::~jugador() {
//    cout << "jugador::~jugador()" << endl;
}

string jugador::obtenerNombre() {
    return nombre;
}

int jugador::obtenerVictorias() {
    return victorias;
}

int jugador::obtenerPuntos() {
    return puntosObtenidos;
}

void jugador::incrementarVictorias() {
    victorias++;
}

void jugador::jugar(conjuntoDados& dados) {
    cout << obtenerNombre();
    cout << " lanza los dados.." << endl;

    dados.lanzar();
    puntosObtenidos = dados.obtenerPuntos();

    cout << obtenerNombre();
    cout << " obtiene ";
    cout << obtenerPuntos() << " puntos.." << endl;
}
