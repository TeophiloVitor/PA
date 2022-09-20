#ifndef COLOR_H
#define COLOR_H

#include <QWidget>


//Criamos a class Color para editar as cores no ambiente 3D.

class Color : public QWidget{
    Q_OBJECT

private:
    // As cores vermelho verde e azul, com valores entre 0 e 255
    int r,g,b;
public:
    explicit Color(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);
signals:

public slots:
    // função para dar um valor da tonalidade de vermelho
    void set_r(int _r);
    // função para dar um valor da tonalidade verde
    void set_g(int _g);
    // função para dar um valor da tonalidade de azeul
    void set_b(int _b);
};

#endif // COLOR_H
