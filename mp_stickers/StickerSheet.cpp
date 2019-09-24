#include "Image.h"
#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image &picture, unsigned max)
{
  stickers = 0;
  maxStickers = max;
  defaultImage = new Image(picture);
  scene = new Image* [maxStickers];
  xMap = new unsigned int [maxStickers];
  yMap = new unsigned int [maxStickers];
  for(unsigned int i = 0; i < maxStickers; i++)
  {
    scene[i] = NULL;
    xMap[i] = 0;
    yMap[i] = 0;
  }
}

StickerSheet::~StickerSheet()
{
  clear();
}

StickerSheet::StickerSheet(const StickerSheet &other)
{
  copy(other);
}

const StickerSheet & StickerSheet::operator=(const StickerSheet &other)
{
  if(this == &other)
  {
    return *this;
  }
  clear();
  copy(other);
  return *this;
}


void StickerSheet::changeMaxStickers(unsigned max)
{
  
}

void StickerSheet::copy(const StickerSheet &other)
{
  stickers = other.stickers;
  maxStickers = other.maxStickers;
  defaultImage = new Image(*(other.defaultImage));
  scene = new Image* [maxStickers];
  xMap = new unsigned [maxStickers];
  yMap = new unsigned [maxStickers];
}

void StickerSheet::clear()
{
  for(unsigned int i = 0; i < stickers; i++)
  {
    if(scene[i] != NULL)
    {
      delete scene[i];
      scene[i] = NULL;
    }
  }
  if(scene != NULL)
  {
    delete scene;
    scene = NULL;
  }
  if(scene != NULL)
  {
    delete scene;
    scene = NULL;
  }
  if(xMap != NULL)
  {
    delete[] xMap;
    xMap = NULL;
  }
  if(yMap != NULL)
  {
    delete[] yMap;
    yMap = NULL;
  }
  if(defaultImage != NULL)
  {
    delete defaultImage;
    defaultImage = NULL;
  }
}
