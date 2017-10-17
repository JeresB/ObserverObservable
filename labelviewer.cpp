#include "labelviewer.h"

LabelViewer::LabelViewer(Temperature* temperature) :
    hLayout(new QHBoxLayout),
    vLayout(new QVBoxLayout),
    label(new QLabel),
    temperature(temperature)
{

        this->temperature->addObserver(this);
        this->label->setText(QString::number(this->temperature->getValue()));
        this->label->show();

        this->hLayout->addWidget(this->label);

        this->setLayout(this->hLayout);
        this->setMinimumSize(200,100);
}

LabelViewer::~LabelViewer() {}

void LabelViewer::update() {
    this->label->setText(QString::number(this->temperature->getValue()));
}
