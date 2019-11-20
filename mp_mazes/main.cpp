#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
    //cout << "Add your own tests here! Modify main.cpp" << endl;
    SquareMaze canvas;
    canvas.makeMaze(45,65);

    PNG * maze = canvas.drawCreativeMaze();
    maze->writeToFile("creative.png");

    delete maze; 

    return 0;
}
