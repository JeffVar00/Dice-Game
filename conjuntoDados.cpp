
#include <iostream>
using namespace std;

#include "conjuntoDados.h"

const int conjuntoDados::MAX_DADOS = 2;

conjuntoDados::conjuntoDados(int maxDados) {
//    cout << "conjuntoDados::conjuntoDados(int)" << endl;

    for (int i = 0; i < maxDados; i++) {
        dados.push_back(new dado());
    }
}

conjuntoDados::~conjuntoDados() {
    while (!dados.empty()) {
        dado* d = dados.front();
        dados.pop_front();
        delete d;
    }

//    cout << "conjuntoDados::~conjuntoDados()" << endl;
}

void conjuntoDados::lanzar() {
    for (list<dado*>::iterator d = dados.begin();
            d != dados.end(); d++) {
        (*d)->lanzar();
    }
}

int conjuntoDados::obtenerPuntos() {
    int r = 0;
    for (list<dado*>::iterator d = dados.begin();
            d != dados.end(); d++) {
        r += (*d)->obtenerPuntos();
    }
    return r;
}
