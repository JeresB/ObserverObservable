#ifndef SLIDERVIEWER_H
#define SLIDERVIEWER_H

#include <QWidget>
#include <QSlider>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "temperature.h"
#include "observer.h"

class SliderViewer : public QWidget, Observer
{
    Q_OBJECT

public:
    SliderViewer(Temperature* temperature);

    void update();

private:
    QHBoxLayout* hLayout;
    QVBoxLayout* vLayout;
    Temperature* temperature;
    QSlider* slider;

private slots:
    void updateTemp(int temp);
};

#endif // SLIDERVIEWER_H
