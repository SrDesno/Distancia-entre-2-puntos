#include <iostream>
#include "DistanciaPuntos.hpp"

using namespace std;

int main()
{
    punto p1,p2;

    p1.setX();
    p1.setY();

    p2.setX();
    p2.setY();

    cout<<"la distancia entre los puntos es: "<<p2.distanciaPuntos(p1);



    return 0;
}