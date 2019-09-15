#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <string>
#include <cmath>
 
using namespace cs225;



void rotate(std::string inputFile, std::string outputFile)
{
  PNG* image1 = new PNG();
//  PNG* image2 = new PNG(image1->width(), image1->height());
  image1->readFromFile(inputFile);
  unsigned image1Width = image1->width();
  unsigned image1Height = image1->height();

  PNG* image2 = new PNG(image1Width , image1Height);
  for(unsigned x = 0; x < image1Width; x++)
  {
    for(unsigned y = 0; y < image1Height; y++)
    {
      HSLAPixel & image1Pixel = image1->getPixel(x, y);
      HSLAPixel & image2Pixel = image2->getPixel((image1Width - 1) - x, (image1Height - 1) - y);
      image2Pixel = image1Pixel;

    }
  }

  image2->writeToFile(outputFile);

  delete image1;
  delete image2;

}

cs225::PNG myArt(unsigned int width, unsigned int height)
{
  PNG image(width, height);
  int i = 3;
  for(unsigned int x = 0; x < width; x++)
  {
    for(unsigned int y = 0; y < height; y++)
    {
      HSLAPixel & pixel = image.getPixel(x, y);
      pixel.h = i * x * 150 % 320;
      pixel.s = .85;
      pixel.l = .5;
      pixel.a = 1;
      i++;
    }
  }

  return image;
}
  /*int i = 1;
  cs225::PNG png(width, height);
  unsigned width = png.width();
  unsigned height = png.height();
  for(unsigned int x = 0; x < width / 2; x++)
  {
    for(unsigned int y = 0; y < height / 4; y++)
    {
      HSLAPixel pixel =
    }
  }*/
