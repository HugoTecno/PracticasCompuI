#include <math.h>
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto2D {
//métpodos de set
public:
    void SetPosicion(float temp1, float temp2);
    // métodos get
    float GetX();
    float GetY();

    void Trasladar(int temp1, int temp2);
    void RotarRespectoAlOrigen(int temp1);
    void Escalar(float temp1, float temp2);


private:
    float x,y;


};




#endif //PUNTOS_PUNTO_H

