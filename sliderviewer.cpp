#include "sliderviewer.h"

SliderViewer::SliderViewer(Temperature* temperature):
    slider(new QSlider(Qt::Horizontal)),
    temperature(temperature),
    hLayout(new QHBoxLayout),
    vLayout(new QVBoxLayout)
{

    this->temperature->addObserver(this);
    this->hLayout->addWidget(this->slider);

    this->setLayout(this->hLayout);
    this->slider->setRange(-180, 180);
    this->slider->setSliderPosition(this->temperature->getValue());
    this->setMinimumSize(300,100);

    connect(this->slider, SIGNAL(valueChanged(int)), this, SLOT(updateTemp(int)));
}

void SliderViewer::update(){
    this->slider->setSliderPosition(this->temperature->getValue());
}

void SliderViewer::updateTemp(int temp) {
    this->temperature->changeValue(temp);
}
