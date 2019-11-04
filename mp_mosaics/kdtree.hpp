
/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include <cmath>


using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */

     if(first[curDim] == second[curDim])
     {
       return first < second;
     }

    return first[curDim] < second[curDim])
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     double distanceCurr = distance(target, currentBest);
     double distancePotential = distance(target, potential);

    return (potential < currentBest) && (distancePotential < distanceCurr || distancePotential == distanceCurr);
}


template <int Dim>
double KDTree<Dim>::distance(const Point<Dim>& first, const Point<Dim>& second) const
{
  double dist = 0;
  for(int i = 0; i < Dim; i++)
  {
    dist += sqrt((first[i] - second[i]) * (first[i] - second[i]));
  }
  return dist;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
  root = NULL;
  size = 0;

  if(newPoints.empty())
  {
    return;
  }

  vector<Point<Dim>> points = newPoints;
  

    /**
     * @todo Implement this function!
     */


}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}
