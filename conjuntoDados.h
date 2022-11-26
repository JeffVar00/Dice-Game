
#ifndef CONJUNTODADOS_H
#define CONJUNTODADOS_H

#include <cstdlib>
#include <list>
using namespace std;

#include "dado.h"

class conjuntoDados {
public:
    static const int MAX_DADOS;

    conjuntoDados(int = conjuntoDados::MAX_DADOS);
    virtual ~conjuntoDados();

    virtual void lanzar();
    virtual int obtenerPuntos();

private:
    list<dado*> dados;
};

#endif /* CONJUNTODADOS_H */

