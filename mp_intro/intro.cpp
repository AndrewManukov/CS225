#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <string>
#include <ctime>

using namespace cs225;

void rotate(std::string inputFile, std::string outputFile)
{
  PNG image1;
  image1.readFromFile(inputFile);
  PNG image2(image1.width(), image1.height());
  unsigned int image1Width = image1.width();
  unsigned int image1Height = image1.height();

  for(unsigned int x = 0; x < image1.width(); x++)
  {
    for(unsigned int y = 0; y < image1.height(); y++)
    {
      HSLAPixel & image1pixel = image1.getPixel(x, y);
      HSLAPixel & image2pixel = image2.getPixel((image1Width - 1) - x, (image1Height - 1) - y);
      image2pixel = image1pixel;
    }
  }

  image2.writeToFile(outputFile);

}

cs225::PNG myArt(unsigned int width, unsigned int height)
{
  int i = 1;
  cs225::PNG png(width, height);
  for(unsigned int x = 0; x < png.width() / 5; x++)
  {
    for(unsigned int y = 0; y < png.height(); y++)
    {

    }
  }


  return png;
}
