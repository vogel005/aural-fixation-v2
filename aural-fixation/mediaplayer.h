#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include "playlist.h"
#include "mainwindow.h"
#include <QString>
#include <QMediaPlayer>
#include <queue>

class MediaPlayer
{
public:
    MediaPlayer();
    ~MediaPlayer();
    void playCurrentQueue();

private:
    std::queue<QString>     _currentQueue;
    MainWindow*              _mainWindow;
    QMediaPlayer*            _player;
};

#endif // AUDIOPLAYER_H
