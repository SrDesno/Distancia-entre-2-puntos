#include "DistanciaPuntos.hpp"
#include<iostream>
#include<cmath>

using namespace std;

punto::punto()
{
   x=0;
   y=0;
}


void punto::setX(){

    cout<<"Captura el valor de la coordenada x: ";
    cin>>x;

}
float punto::getX(){
    return x;
}


void punto::setY(){

    cout<<"Captura el valor de la coordenada y: ";
    cin>>y;

}

float punto::getY(){
    return y;

}

float punto::distanciaPuntos(punto p2){

    return sqrt(pow((x-p2.getX()),2)+pow((y-p2.getY()),2));
}


punto::~punto(){
    //dtor
}
