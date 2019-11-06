/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    MosaicCanvas * mosaic = new MosaicCanvas(theSource.getRows(), theSource.getColumns());

    map<Point<3>, int> map_;
    vector<Point<3>> points_;

    for(unsigned int i = 0; i < theTiles.size(); i++)
    {
      LUVAPixel pixel = theTiles[i].getAverageColor();
      Point<3> point = convertToXYZ(pixel);
      points_.push_back(point);
      map_[point] = i;
    }
    KDTree<3> kdAvgColor(points_);

    for(int i = 0; i < theSource.getRows(); i++)
    {
      for(int j = 0; j < theSource.getColumns(); j++)
      {
        Point<3> color = convertToXYZ(theSource.getRegionColor(i, j));
        Point<3> closest = kdAvgColor.findNearestNeighbor(color);
        unsigned int index = map_[closest];
        mosaic->setTile(i, j, &theTiles[index]);
      }
    }


    return mosaic;
}
