/* Your code here! */
#pragma once

#include<vector>

using namespace std;

class DisjointSets
{
  public:
    vector<int> elems;

    void addelements(int num);
    int find(int elem);
    void setunion(int a, int b);
    int size(int elem);

  private:

};
