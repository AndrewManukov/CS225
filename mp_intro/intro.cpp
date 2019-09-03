#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>


void rotate(std::string inputFile, std::string outputFile)
{
  for (unsigned x = 0; x < inputFile.width(); x++)
  {
    for (unsigned y = 0; y < inputFile.height(); y++)
    {
      outputFile(x,y) = inputFile(inputFile.width() - x, inputFile.height() - y);
    }
  }

  return firstImage;
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
