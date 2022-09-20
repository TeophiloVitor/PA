/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "color.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionSave;
    QWidget *centralwidget;
    Plotter *widget;
    QPushButton *pushButtonCriaCanvas;
    Color *widget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderGreen;
    QLabel *Azul;
    QLabel *Verde;
    QSpinBox *spinBoxG;
    QSlider *horizontalSliderBlue;
    QSpinBox *spinBoxA;
    QLabel *Vermelho;
    QSpinBox *spinBoxR;
    QSlider *horizontalSliderRed;
    QLabel *Alfa;
    QSlider *horizontalSliderAlfa;
    QSpinBox *spinBoxB;
    QLabel *YGeral;
    QSlider *horizontalSliderZCanvas;
    QSpinBox *spinBoxXCanvas;
    QSpinBox *spinBoxYCanvas;
    QLabel *ZGeral;
    QSpinBox *spinBoxZCanvas;
    QSlider *horizontalSliderXCanvas;
    QLabel *XGeral;
    QSlider *horizontalSliderYCanvas;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSliderDimZ;
    QSlider *horizontalSliderDimX;
    QSlider *horizontalSliderDimY;
    QSpinBox *spinBoxDimZ;
    QSpinBox *spinBoxDimY;
    QSpinBox *spinBoxDimX;
    QLabel *DimZ;
    QLabel *DimY;
    QLabel *DimX;
    QLabel *labelBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelSphere;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBoxRaio;
    QSlider *horizontalSliderRaio;
    QLabel *Raio;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelEllipsoid;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBoxRx;
    QLabel *Rx;
    QSlider *horizontalSliderRx;
    QSpinBox *spinBoxRy;
    QLabel *Ry;
    QSlider *horizontalSliderRy;
    QSpinBox *spinBoxRz;
    QLabel *Rz;
    QSlider *horizontalSliderRz;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonPutVoxel;
    QRadioButton *radioButtonCutVoxel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonPutBox;
    QRadioButton *radioButtonCutBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonPutSphere;
    QRadioButton *radioButtonCutSphere;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonPutEllipsoid;
    QRadioButton *radioButtonCutEllipsoid;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(725, 638);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 441, 371));
        pushButtonCriaCanvas = new QPushButton(centralwidget);
        pushButtonCriaCanvas->setObjectName(QString::fromUtf8("pushButtonCriaCanvas"));
        pushButtonCriaCanvas->setGeometry(QRect(480, 30, 80, 22));
        widget_2 = new Color(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(180, 520, 61, 61));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 450, 161, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSliderGreen = new QSlider(layoutWidget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMinimum(1);
        horizontalSliderGreen->setMaximum(254);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 1, 2, 1, 1);

        Azul = new QLabel(layoutWidget);
        Azul->setObjectName(QString::fromUtf8("Azul"));

        gridLayout->addWidget(Azul, 2, 1, 1, 1);

        Verde = new QLabel(layoutWidget);
        Verde->setObjectName(QString::fromUtf8("Verde"));

        gridLayout->addWidget(Verde, 1, 1, 1, 1);

        spinBoxG = new QSpinBox(layoutWidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMaximum(255);

        gridLayout->addWidget(spinBoxG, 1, 0, 1, 1);

        horizontalSliderBlue = new QSlider(layoutWidget);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setMinimum(1);
        horizontalSliderBlue->setMaximum(254);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 2, 1, 1);

        spinBoxA = new QSpinBox(layoutWidget);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMaximum(255);

        gridLayout->addWidget(spinBoxA, 3, 0, 1, 1);

        Vermelho = new QLabel(layoutWidget);
        Vermelho->setObjectName(QString::fromUtf8("Vermelho"));

        gridLayout->addWidget(Vermelho, 0, 1, 1, 1);

        spinBoxR = new QSpinBox(layoutWidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMaximum(255);

        gridLayout->addWidget(spinBoxR, 0, 0, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setMinimum(1);
        horizontalSliderRed->setMaximum(254);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 0, 2, 1, 1);

        Alfa = new QLabel(layoutWidget);
        Alfa->setObjectName(QString::fromUtf8("Alfa"));

        gridLayout->addWidget(Alfa, 3, 1, 1, 1);

        horizontalSliderAlfa = new QSlider(layoutWidget);
        horizontalSliderAlfa->setObjectName(QString::fromUtf8("horizontalSliderAlfa"));
        horizontalSliderAlfa->setMinimum(1);
        horizontalSliderAlfa->setMaximum(254);
        horizontalSliderAlfa->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlfa, 3, 2, 1, 1);

        spinBoxB = new QSpinBox(layoutWidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMaximum(255);

        gridLayout->addWidget(spinBoxB, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        YGeral = new QLabel(centralwidget);
        YGeral->setObjectName(QString::fromUtf8("YGeral"));
        YGeral->setGeometry(QRect(584, 36, 16, 16));
        horizontalSliderZCanvas = new QSlider(centralwidget);
        horizontalSliderZCanvas->setObjectName(QString::fromUtf8("horizontalSliderZCanvas"));
        horizontalSliderZCanvas->setGeometry(QRect(640, 71, 84, 16));
        horizontalSliderZCanvas->setOrientation(Qt::Horizontal);
        spinBoxXCanvas = new QSpinBox(centralwidget);
        spinBoxXCanvas->setObjectName(QString::fromUtf8("spinBoxXCanvas"));
        spinBoxXCanvas->setGeometry(QRect(597, 5, 37, 23));
        spinBoxYCanvas = new QSpinBox(centralwidget);
        spinBoxYCanvas->setObjectName(QString::fromUtf8("spinBoxYCanvas"));
        spinBoxYCanvas->setGeometry(QRect(597, 36, 37, 23));
        ZGeral = new QLabel(centralwidget);
        ZGeral->setObjectName(QString::fromUtf8("ZGeral"));
        ZGeral->setGeometry(QRect(584, 67, 16, 16));
        spinBoxZCanvas = new QSpinBox(centralwidget);
        spinBoxZCanvas->setObjectName(QString::fromUtf8("spinBoxZCanvas"));
        spinBoxZCanvas->setGeometry(QRect(597, 67, 37, 23));
        horizontalSliderXCanvas = new QSlider(centralwidget);
        horizontalSliderXCanvas->setObjectName(QString::fromUtf8("horizontalSliderXCanvas"));
        horizontalSliderXCanvas->setGeometry(QRect(640, 9, 84, 16));
        horizontalSliderXCanvas->setOrientation(Qt::Horizontal);
        XGeral = new QLabel(centralwidget);
        XGeral->setObjectName(QString::fromUtf8("XGeral"));
        XGeral->setGeometry(QRect(584, 5, 16, 16));
        horizontalSliderYCanvas = new QSlider(centralwidget);
        horizontalSliderYCanvas->setObjectName(QString::fromUtf8("horizontalSliderYCanvas"));
        horizontalSliderYCanvas->setGeometry(QRect(640, 40, 84, 16));
        horizontalSliderYCanvas->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setEnabled(true);
        layoutWidget1->setGeometry(QRect(260, 470, 151, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSliderDimZ = new QSlider(layoutWidget1);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setEnabled(true);
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimZ, 4, 2, 1, 1);

        horizontalSliderDimX = new QSlider(layoutWidget1);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setEnabled(true);
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimX, 2, 2, 1, 1);

        horizontalSliderDimY = new QSlider(layoutWidget1);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setEnabled(true);
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimY, 3, 2, 1, 1);

        spinBoxDimZ = new QSpinBox(layoutWidget1);
        spinBoxDimZ->setObjectName(QString::fromUtf8("spinBoxDimZ"));
        spinBoxDimZ->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimZ, 4, 0, 1, 1);

        spinBoxDimY = new QSpinBox(layoutWidget1);
        spinBoxDimY->setObjectName(QString::fromUtf8("spinBoxDimY"));
        spinBoxDimY->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimY, 3, 0, 1, 1);

        spinBoxDimX = new QSpinBox(layoutWidget1);
        spinBoxDimX->setObjectName(QString::fromUtf8("spinBoxDimX"));
        spinBoxDimX->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimX, 2, 0, 1, 1);

        DimZ = new QLabel(layoutWidget1);
        DimZ->setObjectName(QString::fromUtf8("DimZ"));
        DimZ->setEnabled(true);

        gridLayout_2->addWidget(DimZ, 4, 1, 1, 1);

        DimY = new QLabel(layoutWidget1);
        DimY->setObjectName(QString::fromUtf8("DimY"));
        DimY->setEnabled(true);

        gridLayout_2->addWidget(DimY, 3, 1, 1, 1);

        DimX = new QLabel(layoutWidget1);
        DimX->setObjectName(QString::fromUtf8("DimX"));
        DimX->setEnabled(true);

        gridLayout_2->addWidget(DimX, 2, 1, 1, 1);

        labelBox = new QLabel(layoutWidget1);
        labelBox->setObjectName(QString::fromUtf8("labelBox"));
        labelBox->setEnabled(true);

        gridLayout_2->addWidget(labelBox, 1, 0, 1, 3);


        verticalLayout_2->addLayout(gridLayout_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setEnabled(true);
        widget1->setGeometry(QRect(260, 420, 331, 46));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSphere = new QLabel(widget1);
        labelSphere->setObjectName(QString::fromUtf8("labelSphere"));
        labelSphere->setEnabled(true);

        verticalLayout_5->addWidget(labelSphere);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinBoxRaio = new QSpinBox(widget1);
        spinBoxRaio->setObjectName(QString::fromUtf8("spinBoxRaio"));
        spinBoxRaio->setEnabled(true);

        gridLayout_4->addWidget(spinBoxRaio, 0, 0, 1, 1);

        horizontalSliderRaio = new QSlider(widget1);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setEnabled(true);
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderRaio, 0, 2, 1, 1);

        Raio = new QLabel(widget1);
        Raio->setObjectName(QString::fromUtf8("Raio"));
        Raio->setEnabled(true);

        gridLayout_4->addWidget(Raio, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setEnabled(true);
        widget2->setGeometry(QRect(420, 470, 171, 111));
        verticalLayout_4 = new QVBoxLayout(widget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelEllipsoid = new QLabel(widget2);
        labelEllipsoid->setObjectName(QString::fromUtf8("labelEllipsoid"));
        labelEllipsoid->setEnabled(true);

        verticalLayout_4->addWidget(labelEllipsoid);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spinBoxRx = new QSpinBox(widget2);
        spinBoxRx->setObjectName(QString::fromUtf8("spinBoxRx"));
        spinBoxRx->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRx, 0, 0, 1, 1);

        Rx = new QLabel(widget2);
        Rx->setObjectName(QString::fromUtf8("Rx"));
        Rx->setEnabled(true);

        gridLayout_3->addWidget(Rx, 0, 1, 1, 1);

        horizontalSliderRx = new QSlider(widget2);
        horizontalSliderRx->setObjectName(QString::fromUtf8("horizontalSliderRx"));
        horizontalSliderRx->setEnabled(true);
        horizontalSliderRx->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRx, 0, 2, 1, 1);

        spinBoxRy = new QSpinBox(widget2);
        spinBoxRy->setObjectName(QString::fromUtf8("spinBoxRy"));
        spinBoxRy->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRy, 1, 0, 1, 1);

        Ry = new QLabel(widget2);
        Ry->setObjectName(QString::fromUtf8("Ry"));
        Ry->setEnabled(true);

        gridLayout_3->addWidget(Ry, 1, 1, 1, 1);

        horizontalSliderRy = new QSlider(widget2);
        horizontalSliderRy->setObjectName(QString::fromUtf8("horizontalSliderRy"));
        horizontalSliderRy->setEnabled(true);
        horizontalSliderRy->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRy, 1, 2, 1, 1);

        spinBoxRz = new QSpinBox(widget2);
        spinBoxRz->setObjectName(QString::fromUtf8("spinBoxRz"));
        spinBoxRz->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRz, 2, 0, 1, 1);

        Rz = new QLabel(widget2);
        Rz->setObjectName(QString::fromUtf8("Rz"));
        Rz->setEnabled(true);

        gridLayout_3->addWidget(Rz, 2, 1, 1, 1);

        horizontalSliderRz = new QSlider(widget2);
        horizontalSliderRz->setObjectName(QString::fromUtf8("horizontalSliderRz"));
        horizontalSliderRz->setEnabled(true);
        horizontalSliderRz->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRz, 2, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(500, 130, 189, 181));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonPutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutVoxel->setObjectName(QString::fromUtf8("radioButtonPutVoxel"));

        horizontalLayout->addWidget(radioButtonPutVoxel);

        radioButtonCutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutVoxel->setObjectName(QString::fromUtf8("radioButtonCutVoxel"));

        horizontalLayout->addWidget(radioButtonCutVoxel);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButtonPutBox = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutBox->setObjectName(QString::fromUtf8("radioButtonPutBox"));

        horizontalLayout_2->addWidget(radioButtonPutBox);

        radioButtonCutBox = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutBox->setObjectName(QString::fromUtf8("radioButtonCutBox"));

        horizontalLayout_2->addWidget(radioButtonCutBox);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButtonPutSphere = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutSphere->setObjectName(QString::fromUtf8("radioButtonPutSphere"));

        horizontalLayout_3->addWidget(radioButtonPutSphere);

        radioButtonCutSphere = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutSphere->setObjectName(QString::fromUtf8("radioButtonCutSphere"));

        horizontalLayout_3->addWidget(radioButtonCutSphere);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonPutEllipsoid = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutEllipsoid->setObjectName(QString::fromUtf8("radioButtonPutEllipsoid"));

        horizontalLayout_4->addWidget(radioButtonPutEllipsoid);

        radioButtonCutEllipsoid = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutEllipsoid->setObjectName(QString::fromUtf8("radioButtonCutEllipsoid"));

        horizontalLayout_4->addWidget(radioButtonCutEllipsoid);


        verticalLayout_6->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(spinBoxRaio, &QSpinBox::valueChanged, horizontalSliderRaio, &QSlider::setValue);
        QObject::connect(horizontalSliderRaio, &QSlider::valueChanged, spinBoxRaio, &QSpinBox::setValue);
        QObject::connect(spinBoxRx, &QSpinBox::valueChanged, horizontalSliderRx, &QSlider::setValue);
        QObject::connect(horizontalSliderRx, &QSlider::valueChanged, spinBoxRx, &QSpinBox::setValue);
        QObject::connect(spinBoxRy, &QSpinBox::valueChanged, horizontalSliderRy, &QSlider::setValue);
        QObject::connect(horizontalSliderRy, &QSlider::valueChanged, spinBoxRy, &QSpinBox::setValue);
        QObject::connect(spinBoxRz, &QSpinBox::valueChanged, horizontalSliderRz, &QSlider::setValue);
        QObject::connect(horizontalSliderRz, &QSlider::valueChanged, spinBoxRz, &QSpinBox::setValue);
        QObject::connect(spinBoxDimX, &QSpinBox::valueChanged, horizontalSliderDimX, &QSlider::setValue);
        QObject::connect(horizontalSliderDimX, &QSlider::valueChanged, spinBoxDimX, &QSpinBox::setValue);
        QObject::connect(spinBoxDimY, &QSpinBox::valueChanged, horizontalSliderDimY, &QSlider::setValue);
        QObject::connect(horizontalSliderDimY, &QSlider::valueChanged, spinBoxDimY, &QSpinBox::setValue);
        QObject::connect(spinBoxDimZ, &QSpinBox::valueChanged, horizontalSliderDimZ, &QSlider::setValue);
        QObject::connect(horizontalSliderDimZ, &QSlider::valueChanged, spinBoxDimZ, &QSpinBox::setValue);
        QObject::connect(spinBoxR, &QSpinBox::valueChanged, horizontalSliderRed, &QSlider::setValue);
        QObject::connect(horizontalSliderRed, &QSlider::valueChanged, spinBoxR, &QSpinBox::setValue);
        QObject::connect(spinBoxG, &QSpinBox::valueChanged, horizontalSliderGreen, &QSlider::setValue);
        QObject::connect(horizontalSliderGreen, &QSlider::valueChanged, spinBoxG, &QSpinBox::setValue);
        QObject::connect(spinBoxB, &QSpinBox::valueChanged, horizontalSliderBlue, &QSlider::setValue);
        QObject::connect(horizontalSliderBlue, &QSlider::valueChanged, spinBoxB, &QSpinBox::setValue);
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);
        QObject::connect(horizontalSliderAlfa, &QSlider::valueChanged, spinBoxA, &QSpinBox::setValue);
        QObject::connect(spinBoxXCanvas, &QSpinBox::valueChanged, horizontalSliderXCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderXCanvas, &QSlider::valueChanged, spinBoxXCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxYCanvas, &QSpinBox::valueChanged, horizontalSliderYCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderYCanvas, &QSlider::valueChanged, spinBoxYCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxZCanvas, &QSpinBox::valueChanged, horizontalSliderZCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderZCanvas, &QSlider::valueChanged, spinBoxZCanvas, &QSpinBox::setValue);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(sair()));
        QObject::connect(horizontalSliderBlue, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_b(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_g(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_r(int)));
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButtonCriaCanvas->setText(QCoreApplication::translate("MainWindow", "Criar Espa\303\247o", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Selecione a cor em RGBA", nullptr));
        Azul->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Verde->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        Vermelho->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        Alfa->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        YGeral->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        ZGeral->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        XGeral->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DimZ->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        DimY->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        DimX->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        labelBox->setText(QCoreApplication::translate("MainWindow", "Add as Dim de Caixa", nullptr));
        labelSphere->setText(QCoreApplication::translate("MainWindow", "Selecione o Raio da Esfera", nullptr));
        Raio->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        labelEllipsoid->setText(QCoreApplication::translate("MainWindow", "Add as Dim de Elipse", nullptr));
        Rx->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        Ry->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        Rz->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selecione Algum metodo", nullptr));
        radioButtonPutVoxel->setText(QCoreApplication::translate("MainWindow", "Add Voxel", nullptr));
        radioButtonCutVoxel->setText(QCoreApplication::translate("MainWindow", "Tirar Voxel", nullptr));
        radioButtonPutBox->setText(QCoreApplication::translate("MainWindow", "Add  Caixa", nullptr));
        radioButtonCutBox->setText(QCoreApplication::translate("MainWindow", "Tirar Caixa", nullptr));
        radioButtonPutSphere->setText(QCoreApplication::translate("MainWindow", "Add Esfera", nullptr));
        radioButtonCutSphere->setText(QCoreApplication::translate("MainWindow", "Tirar Esfera", nullptr));
        radioButtonPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Add Elipsoide", nullptr));
        radioButtonCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Tirar Elipsoide", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
