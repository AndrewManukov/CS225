#include "Image.h"

namespace cs225
{
  void Image::lighten()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.l + 0.1 <= 1)
        {
          pixel.l += 0.1;
        }
        else
        {
          pixel.l = 1;
        }
      }
    }
  }
  void Image::lighten(double amount)
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.l + amount <= 1)
        {
          pixel.l += amount;
        }
        else
        {
          pixel.l = 1;
        }
      }
    }
  }

  void Image::darken()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.l - 0.1 >= 0)
        {
          pixel.l -= 0.1;
        }
        else
        {
          pixel.l = 0;
        }
      }
    }
  }

  void Image::darken(double amount)
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.l - amount >= 0)
        {
          pixel.l -= amount;
        }
        else
        {
          pixel.l = 0;
        }
      }
    }
  }

  void Image::saturate()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.s + 0.1 <= 1)
        {
          pixel.s += 0.1;
        }
        else
        {
          pixel.l = 1;
        }
      }
    }
  }

  void Image::saturate(double amount)
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.s + amount <= 1)
        {
          pixel.s += amount;
        }
        else
        {
          pixel.l = 1;
        }
      }
    }
  }

  void Image::desaturate()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.s - 0.1 >= 0)
        {
          pixel.s -= 0.1;
        }
        else
        {
          pixel.s = 0;
        }
      }
    }
  }

  void Image::desaturate(double amount)
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.s - amount >= 0)
        {
          pixel.s -= amount;
        }
        else
        {
          pixel.s = 0;
        }
      }
    }
  }

  void Image::scale(double factor)
  {
    Image *image = new Image(*this);
    unsigned int width = this->width();
    unsigned int height = this->height();
    width = width * factor;
    height = height * factor;
    resize(width, height);
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        unsigned int x2 = x / factor;
        unsigned int y2 = y / factor;
        HSLAPixel & pixel1 = this->getPixel(x,y);
        HSLAPixel & pixel2 = image->getPixel(x2,y2);
        pixel1 = pixel2;
      }
    }

    delete image;


  }

  void Image::scale(unsigned w, unsigned h)
  {
    Image *image = new Image(*this);
    unsigned int width = this->width();
    unsigned int height = this->height();
    width = width * w;
    height = height * w;
    resize(w, h);
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        unsigned int x2 = x / width;
        unsigned int y2 = y / height;
        HSLAPixel & pixel1 = this->getPixel(x,y);
        HSLAPixel & pixel2 = image->getPixel(x2,y2);
        pixel1 = pixel2;
      }
    }
    delete image;

  }


  void Image::grayscale()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        pixel.s = 0;
      }
    }
  }

  void Image::rotateColor(double degrees)
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        pixel.h = ((int)pixel.h + (int)degrees) % 360;
      }
    }
  }

  void Image::illinify()
  {
    for(unsigned int x = 0; x < this->width(); x++)
    {
      for(unsigned int y = 0; y < this->height(); y++)
      {
        HSLAPixel & pixel = this->getPixel(x,y);
        if(pixel.h >= 113.5 && pixel.h <= 293.5)
        {
          pixel.h = 216;
        }
        else
        {
          pixel.h = 11;
        }
      }
    }
  }


}
