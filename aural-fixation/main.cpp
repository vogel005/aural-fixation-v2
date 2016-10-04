#include "mainwindow.h"
#include <QApplication>
#include "mediaplayer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MediaPlayer* m = new MediaPlayer();

    return a.exec();
}
