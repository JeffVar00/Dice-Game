
#include <iostream>
using namespace std;

#include "dado.h"

dado::dado() {
//    cout << "dado::dado()" << endl;
    lanzar();
}

dado::~dado() {
//    cout << "dado::~dado()" << endl;
}

void dado::lanzar() {
    puntos = 1 + rand() % 6;

    cout << "Se lanzaron los dados y se obtuvieron ";
    cout << obtenerPuntos() << " punto(s).." << endl;
}

int dado::obtenerPuntos() {
    return puntos;
}
