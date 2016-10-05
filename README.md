# aural-fixation-v2
### TO-DO:
- Find a way to extract and display metadata for media files -- at least the title.
- Write method to display song duration/elapsed time.
  - `QTMediaPlayer` has class methods `duration()` and `position()` with return values in msec.
  - This method should perform conversions and return something of the form `hh:mm:ss`.
- Create `PlayList` class.
  - This really only needs to be a `vector<QString>`, `QStringList`, or something similar with methods to add and remove songs
  and save the playlist.
    - `savePlaylist()` should write the contents of the playlist to a `.mmrs` file.
- Create the `AudioPlayer` class.
  - Should contain a `vector<QString>` for the current queue.
  - Should contain an instance of `QMediaPlayer`.
  - Should contain a singleton instance of `MainWindow`.
  - This class will implement the `play()`, `pause()`, etc. methods.
 - Modify `MainWindow` class:
  - Move `QMediaPlayer` functionality out of `MainWindow` and into `AudioPlayer`.
  - This class should function solely as a GUI element and pass any button presses along to the `AudioPlayer::QMediaPlayer` instance. 
