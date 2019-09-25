#include "Image.h"
#include "StickerSheet.h"

int main()
{
  Image cbtf;
  cbtf.readFromFile("cbtf.png");

  Image de;
  de.readFromFile("de.png");
  de.scale(.15);
  Image axe;
  axe.readFromFile("axe.png");
  axe.scale(.35);
  Image shampoo;
  shampoo.readFromFile("shampoo.png");
  shampoo.scale(.2);

  StickerSheet piazza(cbtf, 3);
  piazza.addSticker(de, 100, 400);
  piazza.addSticker(axe, 600, 350);
  piazza.addSticker(shampoo, 350, 410);

  Image cbtfNew = piazza.render();
  cbtfNew.writeToFile("myImage.png");


  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //

  return 0;
}
