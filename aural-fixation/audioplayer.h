#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include "playlist.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>

class AudioPlayer
{
public:
    AudioPlayer();
private:
    QStringList CurrentPlaylist;

    void shuffle();
    void play();
    void stop();
    void pause();
    void skip_fwd();
    void skip_back();
    void ffwd();
    void rew();
    void repeat();
};

#endif // AUDIOPLAYER_H
