#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "Interpretador.h"


using namespace std;

int main()
{
    Sculptor *cubo;
    Interpretador parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse("sculptor.txt");

    cubo = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < figuras.size(); i++){
        figuras[i] -> draw(*cubo);
    }

    cubo -> writeOFF((char*)"cubo.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete cubo;
    return 0;

}
