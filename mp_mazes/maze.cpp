/* Your code here! */
#include "maze.h"
#include <map>
#include <queue>
#include <math.h>

SquareMaze::SquareMaze()
{
  mazeWidth = 0;
  mazeHeight = 0;
  mazeSize = 0;
}

void SquareMaze::makeMaze(int width, int height)
{
  mazeWidth = width;
  mazeHeight = height;
  mazeSize = mazeHeight * mazeWidth;

  DisjointSet.addelements(mazeSize);

  for(int i = 0; i < mazeWidth; i++)
  {
    rightWall.push_back(vector<bool>());
    downWall.push_back(vector<bool>());

    for(int j = 0; j < mazeHeight; j++)
    {
      rightWall[i].push_back(true);
      downWall[i].push_back(true);
    }
  }

  while(DisjointSet.size(0) < mazeSize)
  {
    int randX = rand() % mazeWidth;
    int randY = rand() % mazeHeight;
    int rightHelp = mazeWidth * randY + randX + 1;
    int downHelp = mazeWidth * randY + randX + mazeWidth;


    if(rand() % 2 == 1 && randX != mazeWidth - 1 &&
    DisjointSet.find(mazeWidth * randY + randX) != DisjointSet.find(rightHelp) &&
    rightWall[randX][randY])
    {
      setWall(randX, randY, 0, false);
      DisjointSet.setunion(mazeWidth * randY + randX, rightHelp);
    }

    if(rand() % 2 == 0 && randY != mazeHeight - 1 &&
    DisjointSet.find(mazeWidth * randY + randX) != DisjointSet.find(downHelp) &&
    downWall[randX][randY])
    {
      setWall(randX, randY, 1, false);
      DisjointSet.setunion(mazeWidth * randY + randX, downHelp);
    }
  }
}


bool SquareMaze::canTravel(int x, int y, int direction) const
{
  if(direction == 0)
  {
    if(x < mazeWidth - 1)
    {
      if(rightWall[x][y] == false)
      {
        return true;
      }
    }
    return false;

  }

  if(direction == 1)
  {
    if(y < mazeHeight - 1)
    {
      if(downWall[x][y] == false)
      {
        return true;
      }
    }
    return false;

  }

  if(direction == 2)
  {
    if(x > 0)
    {
      if(rightWall[x - 1][y] == false)
      {
        return true;
      }
    }
    return false;

  }

  if(direction == 3)
  {
    if(y > 0)
    {
      if(downWall[x][y - 1] == false)
      {
        return true;
      }
    }
    return false;

  }

  return false;

}

void SquareMaze::setWall(int x, int y, int direction, bool exists)
{
  if(direction == 0)
  {
    rightWall[x][y] = exists;
  }
  if(direction == 1)
  {
    downWall[x][y] = exists;
  }
}

vector<int> SquareMaze::solveMaze()
{
  int maxDist = 0;
  vector<vector<bool>> visited;
  vector<int> tempPath;
  vector<int> longestPath;
  map<int, int> tempMap;
  stack<int> search;

  search.push(0);


  for(int i = 0; i < mazeWidth; i++)
  {
    visited.push_back(vector<bool>());
    for(int j = 0; j < mazeHeight; j++)
    {
      visited[i].push_back(false);
    }
  }

  while(!search.empty())
  {
    int curr = search.top();
    int currX = curr % mazeWidth;
    int currY = curr / mazeWidth;

    int rightStep = mazeWidth * currY + currX + 1;
    int downStep = mazeWidth * currY + currX + mazeWidth;
    int leftStep = mazeWidth * currY + currX - 1;
    int upStep = mazeWidth * currY + currX - mazeWidth;

    search.pop();


    if(canTravel(currX,currY,0) && visited[currX + 1][currY] == false)
    {
      visited[currX + 1][currY] = true;
      search.push(rightStep);
      tempMap[rightStep] = curr;
    }

    if(canTravel(currX,currY,1) && visited[currX][currY + 1] == false)
    {
      visited[currX][currY + 1] = true;
      search.push(downStep);
      tempMap[downStep] = curr;
    }

    if(canTravel(currX,currY,2) && visited[currX - 1][currY] == false)
    {
      visited[currX - 1][currY] = true;
      search.push(leftStep);
      tempMap[leftStep] = curr;
    }

    if(canTravel(currX,currY,3) && visited[currX][currY - 1] == false)
    {
      visited[currX][currY - 1] = true;
      search.push(upStep);
      tempMap[upStep] = curr;
    }
  }

  for(int i = 0; i < mazeWidth; i++)
  {
    tempPath.clear();
    int length = 0;
    int goal = mazeWidth * (mazeHeight - 1) + i;

    while(goal != 0)
    {
      if(goal - tempMap[goal] == 1)
      {
        tempPath.push_back(0);
      }
      else if(goal - tempMap[goal] == mazeWidth)
      {
        tempPath.push_back(1);
      }
      else if(goal - tempMap[goal] == -1)
      {
        tempPath.push_back(2);
      }
      else if(goal - tempMap[goal] == -mazeWidth)
      {
        tempPath.push_back(3);
      }
      goal = tempMap[goal];
      length++;
    }

    if(length > maxDist)
    {
      maxDist = length;
      longestPath = tempPath;
    }
  }

  reverse(longestPath.begin(), longestPath.end());
  return longestPath;

}

PNG * SquareMaze::drawMaze() const
{
  int dimW = mazeWidth * 10 + 1;
  int dimH = mazeHeight * 10 + 1;

  PNG * maze = new PNG(dimW, dimH);

  for(int i = 0; i < dimH; i++)
  {
    HSLAPixel & pixel = maze->getPixel(0, i);
    pixel.l = 0;
  }

  for(int i = 10; i < dimW; i++)
  {
    HSLAPixel & pixel = maze->getPixel(i, 0);
    pixel.l = 0;
  }

  for(int i = 0; i < mazeWidth; i++)
  {
    for(int j = 0; j < mazeHeight; j++)
    {
      if(rightWall[i][j])
      {
        for(int k = 0; k < 11; k++)
        {
          HSLAPixel & pixel = maze->getPixel((i + 1) * 10, (j * 10 + k));
          pixel.l = 0;
        }
      }
      if(downWall[i][j])
      {
        for(int k = 0; k < 11; k++)
        {
          HSLAPixel & pixel = maze->getPixel((i * 10 + k), (j + 1) * 10);
          pixel.l = 0;
        }
      }
    }
  }
  return maze;

}


PNG * SquareMaze::drawMazeWithSolution()
{
  PNG * maze = drawMaze();
  vector<int> path = solveMaze();
  int x = 5;
  int y = 5;

  HSLAPixel red(0,1,.5,1);

  for(unsigned int i = 0; i < path.size(); i++)
  {
    if(path[i] == 0)
    {
      for(int j = 0; j < 10; j++)
      {
        HSLAPixel & pixel = maze->getPixel(x,y);
        pixel = red;
        x++;
      }
    }

    if(path[i] == 1)
    {
      for(int j = 0; j < 10; j++)
      {
        HSLAPixel & pixel = maze->getPixel(x,y);
        pixel = red;
        y++;
      }
    }

    if(path[i] == 2)
    {
      for(int j = 0; j < 10; j++)
      {
        HSLAPixel & pixel = maze->getPixel(x,y);
        pixel = red;
        x--;
      }
    }

    if(path[i] == 3)
    {
      for(int j = 0; j < 10; j++)
      {
        HSLAPixel & pixel = maze->getPixel(x,y);
        pixel = red;
        y--;
      }
    }
  }

  HSLAPixel & pixel = maze->getPixel(x,y);
  pixel = red;
  x = x - 4;
  y = y + 5;

  for(int i = 1; i < 10; i++)
  {
    HSLAPixel & pixel = maze->getPixel(x,y);
    pixel.h = 0;
    pixel.s = 0;
    pixel.l = 1;
    pixel.a = 1;
    x++;
  }

  return maze;

}

PNG * SquareMaze::drawCreativeMaze() const
{
  int dimW = mazeWidth * 10 + 1;
  int dimH = mazeHeight * 10 + 1;
  HSLAPixel bear1(16.14,.97,.395,1);
  HSLAPixel bear2(218.71,.58,.11,1);


  PNG * maze = new PNG(dimW, dimH);

  for(int i = 0; i < dimH; i++)
  {
    HSLAPixel & pixel = maze->getPixel(0, i);
    pixel.l = 0;
  }

  for(int i = 10; i < dimW; i++)
  {
    HSLAPixel & pixel = maze->getPixel(i, 0);
    pixel.l = 0;
  }

  for(int i = 0; i < sqrt(mazeWidth) * 2 ; i++)
  {
    for(int j = 0; j < mazeHeight; j++)
    {
      if(rightWall[i][j])
      {
        for(int k = 0; k < 11; k++)
        {
          HSLAPixel & pixel = maze->getPixel((i + 1) * 10, (j * 10 + k));
          pixel = bear1;
        }
      }
      if(downWall[i][j])
      {
        for(int k = 0; k < 11; k++)
        {
          HSLAPixel & pixel = maze->getPixel((i * 10 + k), (j + 1) * 10);
          pixel = bear2;
        }
      }
    }
    for(int i = 0; i < mazeWidth; i++)
    {
      for(int j = mazeWidth / 7; j < sqrt(mazeHeight) * 3; j++)
      {
        if(rightWall[i][j])
        {
          for(int k = 0; k < 11; k++)
          {
            HSLAPixel & pixel = maze->getPixel((i + 1) * 10, (j * 10 + k));
            pixel = bear1;
          }
        }
        if(downWall[i][j])
        {
          for(int k = 0; k < 11; k++)
          {
            HSLAPixel & pixel = maze->getPixel((i * 10 + k), (j + 1) * 10);
            pixel = bear2;
          }
        }
      }
    }
  }

  return maze;

}
