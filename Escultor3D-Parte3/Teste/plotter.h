#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "sculptor.h"
#include "vector"
#include <iostream>

using namespace std;
/**
 * @brief A classe Plotter é resposável por permitir a criação de desenhos.
 */
class Plotter : public QWidget{
    Q_OBJECT
private:


public:
    explicit Plotter(QWidget *parent = nullptr);

        void paintEvent(QPaintEvent *event);


        //mousePressEvent é um evento que permite  que o desenhemos no canvas quando o mouse é pressionado.
        void mousePressEvent(QMouseEvent *event);


        // mouseReleaseEvent é um evento que desativa o desenho do voxel quando o mouse deixa de ser clicado.
        void mouseReleaseEvent(QMouseEvent *event);
        /* shape é uma função que designa a forma geometrica a ser desenhada identificada por
        meio de sh que é um identificador em um nuymero intreiro.*/

        void shape(int sh);

        Sculptor *s;

        int sh = 1;
        int dim, pl;
        int sx, sy, sz;
        int r, g, b, a;
        int rad, rx, ry,rz;
        int x,y,z;
        int h, w;
    private:
        vector<vector<Voxel>> p;
        QColor lineColor;
        int cor;
        QAction *actionMudaCor;
        int cube;
        int square;
        int px, py, pz;
        bool press;
        int mx, my;
    signals:
        //Função serve para guardar valor posição x do mouse
        void moveX(int);
        //Função serve para guardar valor posição y do mouse
        void moveY(int);


         //clickX é a função resposável por guardar as posições X do mouse quando clicado.
        void clickX(int);

        // clickY é a função resposável por guardar as posições Y do mouse quando clicado
        void clickY(int);
        /**
         * @brief planeChosen é a função resposável por guardar o plano que foi escolhido para o desenho.
         */
        void planeChosen(int);
    public slots:

        void changeDimX(int dimx);

        void changeDimY(int dimy);

        void changeDimZ(int dimz);

        void changeRaio(int raio);

        void changeRx(int radx);

        void changeRy(int rady);

        void changeRz(int radz);

        void changeRed(int red);

        void changeGreen(int green);

        void changeBlue(int blue);

        void changeAlfa(int alpha);

        void changePlano(int pln);

        void criaOff();

        void mouseMoveEvent(QMouseEvent *event);

public slots:

signals:

};

#endif // PLOTTER_H

