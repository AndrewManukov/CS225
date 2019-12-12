#include <queue>
#include <algorithm>
#include <string>
#include <list>


using namespace std;
/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end)
{
  // TODO: Part 3
  std::list<std::string> path;

  queue<string> queue_;
  unordered_map<string, string> parent;
  bool Neighbor;

  for(auto it = vertexMap.begin(); it != vertexMap.end(); it++)
  {
    parent[it->first] = "noEdge";
  }

  queue_.push(start);
  parent[start] = "start";

  while(!queue_.empty())
  {

    string front_ = queue_.front();
    queue_.pop();

    for(auto it = vertexMap.begin(); it != vertexMap.end(); it++)
    {
      Neighbor = false;
      for(edgeListIter iter : adjList.at(front_))
      {
        if((*iter).get().source().key() == it->first)
        {
          Neighbor = true;
        }
        if((*iter).get().dest().key() == it->first)
        {
          Neighbor = true;
        }
      }

      if(Neighbor && parent[it->first] == "noEdge")
      {
        queue_.push(it->first);
        parent[it->first] = front_;
      }
    }
  }

  string temp = end;
  path.push_back(end);

  while(temp != start)
  {
    path.push_front(parent[temp]);
    temp = parent[temp];
  }

  return path;
}
