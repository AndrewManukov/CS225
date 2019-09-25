#include "Image.h"
#include "StickerSheet.h"


StickerSheet::StickerSheet(const Image &picture, unsigned max)
{
  scene = new Image* [max];
  xMap = new unsigned int [max];
  yMap = new unsigned int [max];
  for(unsigned int i = 0; i < max; i++)
  {
    scene[i] = NULL;
    xMap[i] = 0;
    yMap[i] = 0;
  }
  maxStickers = max;
  stickers = 0;
  defaultImage = new Image(picture);
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
  if(max == maxStickers)
  {
    return;
  }
  Image** tmp = new Image * [stickers];
  unsigned int* xTmp = new unsigned int [stickers];
  unsigned int* yTmp = new unsigned int [stickers];
  for(unsigned int i = 0; i < stickers; i++)
  {
    tmp[i] = NULL;
    xTmp[i] = 0;
    yTmp[i] = 0;
  }

  if(max < stickers)
  {
    for(unsigned int i = 0; i < stickers; i++)
    {
      tmp[i] = scene[i];
      xTmp[i] = xMap[i];
      yTmp[i] = yMap[i];
    }
    delete[] scene;
    delete[] xMap;
    delete[] yMap;
    scene = new Image * [max];
    xMap = new unsigned int [max];
    yMap = new unsigned int [max];
    for(unsigned int i = max; i < stickers; i++)
    {
      delete tmp[i];
      tmp[i] = NULL;
    }
    stickers = max;
    for(unsigned int i = 0; i < stickers; i++)
    {
      scene[i] = tmp[i];
      xMap[i] = xTmp[i];
      yMap[i] = yTmp[i];
    }
  }
  else
  {
    for(unsigned int i = 0; i < stickers; i++)
    {
      tmp[i] = scene[i];
      xTmp[i] = xMap[i];
      yTmp[i] = yMap[i];
    }
    delete[] scene;
    delete[] xMap;
    delete[] yMap;
    scene = new Image * [max];
    xMap = new unsigned int [max];
    yMap = new unsigned int [max];
    for(unsigned int i = 0; i < stickers; i++)
    {
      scene[i] = tmp[i];
      xMap[i] = xTmp[i];
      yMap[i] = yTmp[i];
    }
  }
  maxStickers = max;
  delete[] tmp;
  delete[] xTmp;
  delete[] yTmp;
}


int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y)
{
  for(unsigned int i = 0; i < maxStickers; i++)
  {
    if(stickers == maxStickers)
    {
      return -1;
    }
    if(i == stickers)
    {
      scene[i] = new Image(sticker);
      xMap[i] = x;
      yMap[i] = y;
      stickers++;
      return i;
    }
  }
  return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y)
{
  if(index > stickers)
  {
    return false;
  }
  else
  {
    xMap[index] = x;
    yMap[index] = y;
    return true;
  }
}

void StickerSheet::removeSticker(unsigned index)
{
  if(index < maxStickers && scene[index] != NULL)
  {
    delete scene[index];
    for(unsigned int i = index; i < maxStickers - 1; i++)
    {
      scene[i] = scene[i + 1];
      xMap[i] = xMap[i + 1];
      yMap[i] = yMap[i + 1];
    }
    scene[maxStickers - 1] = NULL;
    stickers--;

  }
  else
  {
    return;
  }
}

Image* StickerSheet::getSticker(unsigned index)
{
  if(index >= stickers)
  {
    return NULL;
  }
  return scene[index];
}

Image StickerSheet::render() const
{
  Image output(*defaultImage);
  unsigned int maxWidth = defaultImage->width();
  unsigned int maxHeight = defaultImage->height();
  for(unsigned int i = 0; i < stickers; i++)
  {
    unsigned int sceneWidth = scene[i]->width();
    unsigned int sceneHeight = scene[i]->height();
    if(sceneWidth + xMap[i] > output.width())
    {
      maxWidth = sceneWidth + xMap[i];
    }
    if(sceneHeight + yMap[i] > output.height())
    {
      maxHeight = sceneHeight + yMap[i];
    }
    output.resize(maxWidth,maxHeight);
    for(unsigned int x = 0; x < sceneWidth; x++)
    {
      for(unsigned int y = 0; y < sceneHeight; y++)
      {
        HSLAPixel & outputPixel = output.getPixel(x + xMap[i], y + yMap[i]);
        HSLAPixel & scenePixel = scene[i]->getPixel(x,y);
        if(scenePixel.a != 0)
        {
          outputPixel = scenePixel;
        }
      }
    }
  }
  return output;
}

void StickerSheet::copy(const StickerSheet &other)
{
  stickers = other.stickers;
  maxStickers = other.maxStickers;
  defaultImage = new Image(*other.defaultImage);
  xMap = new unsigned int [maxStickers];
  yMap = new unsigned int [maxStickers];
  scene = new Image* [maxStickers];
  for(unsigned int i = 0; i < stickers; i++)
  {
    scene[i] = NULL;
    scene[i] = new Image();
    *scene[i] = *other.scene[i];
    xMap[i] = other.xMap[i];
    yMap[i] = other.yMap[i];
  }
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
    delete[] scene;
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
