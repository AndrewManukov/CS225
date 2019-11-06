
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

    return first[curDim] < second[curDim];
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    double distanceCurr = distanceSqr(target, currentBest);
    double distancePotential = distanceSqr(target, potential);

    if(distanceCurr < distancePotential)
    {
      return false;
    }
    if(distanceCurr > distancePotential)
    {
      return true;
    }
    return distancePotential < distanceCurr;

}


template <int Dim>
double KDTree<Dim>::distanceSqr(const Point<Dim>& first, const Point<Dim>& second) const
{
  double dist = 0;
  for(int i = 0; i < Dim; i++)
  {
    dist += (first[i] - second[i]) * (first[i] - second[i]);
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
  root = build(points, 0, points.size() - 1, 0);


    /**
     * @todo Implement this function!
     */
}

template <int Dim>
int KDTree<Dim>::partiton(vector<Point<Dim>> & newPoints, int left, int right, int dim, int index)
{
  Point<Dim> value = newPoints[index];
  std::swap(newPoints[index], newPoints[right]);
  int storeIndex = left;

  for(int i = left; i < right; i++)
  {
    if(smallerDimVal(newPoints[i], value, dim))
    {
      std::swap(newPoints[storeIndex], newPoints[i]);
      storeIndex++;
    }
  }
  std::swap(newPoints[storeIndex], newPoints[right]);
  return storeIndex;
}

template <int Dim>
Point<Dim> & KDTree<Dim>::quickSelect(vector<Point<Dim>> & newPoints, int left, int right, int dim, int index)
{

  if(left == right)
  {
    return newPoints[left];
  }
  int pivot = index;
  pivot = partiton(newPoints, left, right, dim, pivot);
  if(index < pivot)
  {
    return quickSelect(newPoints, left, pivot - 1, dim, index);
  }
  if(index > pivot)
  {
    return quickSelect(newPoints, pivot + 1, right, dim, index);
  }
  return newPoints[index];
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::build(vector<Point<Dim>> & newPoints, int left, int right, int dim)
{
  KDTreeNode * subroot = NULL;
  if(left > right)
  {
    return NULL;
  }

  int mid = (left + right) / 2;
  subroot = new KDTreeNode(quickSelect(newPoints, left, right, dim % Dim, mid));

  dim++;
  size++;
  subroot->left = build(newPoints, left, mid - 1, dim);
  subroot->right = build(newPoints, mid + 1, right, dim);
  return subroot;
}



template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other)
{
  /**
   * @todo Implement this function!
   */
   copy_(root, other->root);
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs)
{
  /**
   * @todo Implement this function!
   */

  destroy_(root);
  copy_(root, rhs->root);


  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree()
{

  destroy_(root);
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
void KDTree<Dim>::copy_(KDTreeNode * subroot, KDTreeNode * other)
{
  if(subroot == NULL)
  {
    return;
  }
  subroot = new KDTreeNode();
  subroot->point = other->point;
  copy_(subroot->left, other->left);
  copy_(subroot->right, other->right);
}

template <int Dim>
void KDTree<Dim>::destroy_(KDTreeNode * subroot)
{
  if(subroot == NULL)
  {
    return;
  }
  destroy_(subroot->left);
  destroy_(subroot->right);
  delete subroot;
}



template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
  return findNearestNeighbor(root, query, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(KDTreeNode * subroot, const Point<Dim> & query, int dim) const //Point<Dim>& query, Point<Dim>& best, KDTreeNode * node, int dim) const
{
  Point<Dim> bestNode = subroot->point;
  KDTreeNode * check = NULL;
  bool checkOther;
  double rad = 0.0;
  double dist = 0.0;

  if(subroot->left == NULL && subroot->right == NULL)
  {
    return subroot->point;
  }
  checkOther = smallerDimVal(query, subroot->point, dim) ? true : false;

  if(smallerDimVal(query, subroot->point, dim))
  {
    if(subroot->left != NULL)
    {
      bestNode = findNearestNeighbor(subroot->left, query, (dim + 1) % Dim);
    }
    else
    {
      bestNode = findNearestNeighbor(subroot->right, query, (dim + 1) % Dim);
    }
  }
  else
  {
    if(subroot->right != NULL)
    {
      bestNode = findNearestNeighbor(subroot->right, query, (dim + 1) % Dim);
    }
    else
    {
      bestNode = findNearestNeighbor(subroot->left, query, (dim + 1) % Dim);
    }
  }

  if(shouldReplace(query, bestNode, subroot->point))
  {
    bestNode = subroot->point;
  }

  rad = radius(query, bestNode);
  dist = (subroot->point[dim] - query[dim]) * (subroot->point[dim] - query[dim]);
  if(checkOther == true)
  {
    check = subroot->right;
  }
  else
  {
    check = subroot->left;
  }

  if(check == NULL || dist > rad)
  {
    return bestNode;
  }
  else
  {
    Point<Dim> bestOther = findNearestNeighbor(check, query, (dim + 1) % Dim);
    if(shouldReplace(query, bestNode, bestOther))
    {
      return bestOther;
    }
    return bestNode;
  }
}

template <int Dim>
double KDTree<Dim>::radius(const Point<Dim>& first, const Point<Dim>& second) const
{
  double rad = 0;
  for(int i = 0; i < Dim; i++)
  {
    rad += (first[i] - second[i]) * (first[i] - second[i]);
  }
  return rad;
}
