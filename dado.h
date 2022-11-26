
#ifndef DADO_H
#define DADO_H

#include <cstdlib>

class dado {
public:
    dado();
    virtual ~dado();

    virtual void lanzar();
    virtual int obtenerPuntos();

private:
    int puntos;
};

#endif /* DADO_H */

