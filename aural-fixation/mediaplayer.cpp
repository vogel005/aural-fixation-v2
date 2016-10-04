#include "mediaplayer.h"

MediaPlayer::MediaPlayer()
{
    _player = new QMediaPlayer();
    _mainWindow = new MainWindow();
    _mainWindow->show();



}

void MediaPlayer::playCurrentQueue()
{
    //_player->setMedia(QUrl::fromLocalFile(_currentQueue.front()));
}
