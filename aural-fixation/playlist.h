#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include <QString>

class Playlist
{
public:
    Playlist();
    void addTrack(const QString&);
    void removeTrack(const QString&);
private:
    int lengthInSeconds;
};

#endif // PLAYLIST_H
