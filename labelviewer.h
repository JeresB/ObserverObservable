#ifndef LABELVIEWER_H
#define LABELVIEWER_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "observer.h"
#include "temperature.h"

class LabelViewer : public QWidget, Observer
{
    Q_OBJECT

public:
    LabelViewer(Temperature* temperature);
    ~LabelViewer();

    void update();

private:
    QHBoxLayout* hLayout;
    QVBoxLayout* vLayout;
    QLabel* label;
    Temperature* temperature;
};

#endif // LABELVIEWER_H
