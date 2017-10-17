#include "labelviewer.h"
#include "sliderviewer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Temperature* froid = new Temperature(2);
    Temperature* chaud = new Temperature(38);

    LabelViewer* voirLeFroid = new LabelViewer(froid);
    LabelViewer* voirLeChaud = new LabelViewer(chaud);

    SliderViewer* controlerLeFroid = new SliderViewer(froid);
    SliderViewer* controlerLeChaud = new SliderViewer(chaud);

    voirLeFroid->show();
    voirLeChaud->show();

    controlerLeFroid->show();
    controlerLeChaud->show();

    return a.exec();
}
