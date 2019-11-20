/* Your code here! */
#pragma once

#include "dsets.h"
#include "cs225/PNG.h"
#include <stack>

using namespace cs225;

class SquareMaze
{
  public:
    SquareMaze();
    void makeMaze(int width, int height);
    bool canTravel(int x, int y, int direction) const;
    void setWall(int x, int y, int direction, bool exists);
    vector<int> solveMaze();

    PNG * drawMaze() const;
    PNG * drawMazeWithSolution();
    PNG * drawCreativeMaze() const;
  private:
    int mazeWidth;
    int mazeHeight;
    int mazeSize;

    vector<vector<bool>> rightWall;
    vector<vector<bool>> downWall;

    DisjointSets DisjointSet;

};
