//Ctrl-N 開新檔案,圖檔
PImage img;//宣告變數global全域變數
void setup(){
  size(400,400);
  img = loadImage("下載.png");//讀入圖片
}//圖片要事先放到資料夾

void draw(){
  image(img,0,0);
}
