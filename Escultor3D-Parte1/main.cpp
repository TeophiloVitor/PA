#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>

#include "sculptor.h"

using namespace std;

int main(){

    Sculptor Cubo(100,100,100);

    //colunas
    Cubo.setColor(163, 144, 144, 1);
    Cubo.putBox(0 , 1 , 0 , 20 , 0 , 1);
    Cubo.putBox(19 , 20 , 0 , 20 , 19 , 20);
    Cubo.putBox(0 , 1 , 0 , 20 , 19 , 20);
    Cubo.putBox(19 , 20 , 0 , 20 , 0 , 1);

    //teto
    Cubo.setColor(255, 145, 0, 0.1);
    Cubo.putBox(0 , 20 , 19 , 20 , 0 , 20);
    Cubo.cutBox(5 , 15 , 19 , 20 , 5 , 15);

    //Chão
    Cubo.setColor(255, 145, 0, 0.1);
    Cubo.putBox(0 , 20 , 0 , 1 , 0 , 20);
    Cubo.cutBox(5 , 15 , 0 , 1 , 5 , 15);

    //Cubo central
    Cubo.setColor(204, 84, 90, 1);
    Cubo.putBox(5 , 15 , 5 , 15 , 5 , 15);
    Cubo.cutBox(7 , 13, 7 , 13 , 5 , 7);
    //Preenchimento
    Cubo.setColor(255, 255, 38 , 1);
    Cubo.putBox(7 , 13, 7 , 13 , 4 , 7);
    
    //Retângulo
    int lado = 13;
    for(int i = 7 ; i <= 13 ; i++){
        Cubo.cutBox(i, lado, 8, 12, 13, 15);
        lado-- ;
    }
    //Preenchimento
    Cubo.setColor (255, 255, 38 , 1);
    int lado1 = 13;
    for(int i = 7 ; i <= 13 ; i++){
        Cubo.putBox(i, lado1, 8, 12, 13, 16);
        lado1-- ;
    }
    //Triângulo
    int lado2 = 14;
    for(int i = 8 ; i < 14 ; i++){
        Cubo.cutBox(5, 7, i, i+1, i-2, lado2);
        lado2-- ;
    }

    //Losango
    int lado3 = 12;
    for(int i = 7 ; i < 12 ; i++){
        Cubo.cutBox(13, 15, i+3, i+4, i, lado3);
        lado3-- ;
    }
    int lado4 = 7;
    for(int i = 12 ; i > 7 ; i--){
        Cubo.cutBox(13, 15, i-3, i-2, lado4, i);
        lado4++ ;
    }

    //Esfera 
    Cubo.setColor(15, 255, 255,1);
    Cubo.putSphere(20 , 40 , 20 , 8);

    //Ellipsoid 
    Cubo.setColor(15, 255, 255,1);
    Cubo.putEllipsoid(20 , 4 , 20 , 8, 4, 8);

    //salvar arquivo em .OFF
    Cubo.writeOFF((char*)"EsculturaProjeto.OFF");

    system("pause");

    return 0;
}