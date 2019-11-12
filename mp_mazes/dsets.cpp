/* Your code here! */
#include "dsets.h"

using namespace std;

void DisjointSets::addelements(int num)
{
  for(int i = 0; i < num; i++)
  {
    elems.push_back(-1);
  }
}

int DisjointSets::find(int elem)
{
  if(elems[elem] < 0)
  {
    return elem;
  }
  else
  {
    elems[elem] = find(elems[elem]);
    return elems[elem];
  }
}

void DisjointSets::setunion(int a, int b)
{
  int first = find(a);
  int second = find(b);
  int size_ = elems[first] + elems[second];

  if(elems[first] < elems[second])
  {
    elems[second] = a;
    elems[first] = size_;
  }
  else
  {
    elems[first] = b;
    elems[second] = size_;
  }
}

int DisjointSets::size(int elem)
{
  return -1 * elems[find(elem)];
}
