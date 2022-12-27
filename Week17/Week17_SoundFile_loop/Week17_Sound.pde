//Ctrl-N開新程式,音樂
//Sketch-Library-Manager Libraries
//找sound看到Sound 可以Install
//裝好後,便可以有整套聲音的功能
//File-Examples可看到Libraries
//Sound 裡 Soundfile-SimplePlayback
//可以看他的範例
import processing.sound.*;
SoundFile file;
void setup(){
  size(400,400);    ///要先把beat.aiff拉進來
  file = new SoundFile(this,"beat.aiff");
  file.loop();//無限播放
}
void draw(){
  
}
