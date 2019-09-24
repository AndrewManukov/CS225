/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "iostream"
#include "cs225/PNG.h"
#include "Image.h"

using namespace cs225;

class StickerSheet
{
  public:
    Image** scene;
    unsigned int* xMap;
    unsigned int* yMap;
    unsigned int maxStickers;
    unsigned int stickers;
    Image* defaultImage;


    StickerSheet(const Image &picture, unsigned max);
    ~StickerSheet();
    StickerSheet(const StickerSheet &other);
    const StickerSheet & operator=(const StickerSheet &other);
    void changeMaxStickers(unsigned max);
    int addSticker(Image &sticker, unsigned x, unsigned y);
    bool translate(unsigned index, unsigned x, unsigned y);
    void removeSticker(unsigned index);
    Image* getSticker(unsigned index);
    Image render() const;
    void copy(const StickerSheet &other);
    void clear();

  private:


};
