/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() : head_(NULL), tail_(NULL), length_(0)
{
  // @TODO: graded in MP3.1
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy()
{
  ListNode* tmp = head_;
  while(tmp != NULL)
  {
    tmp = head_->next;
    delete head_;
    head_ = tmp;
  }
  tmp = NULL;
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
  /// @todo Graded in MP3.1

}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata)
{
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  newNode -> next = head_;
  newNode -> prev = NULL;


  if(head_ != NULL)
  {
    newNode->next = head_;
    head_->prev = newNode;
    head_ = newNode;
  }
  else
  {
    tail_ = newNode;
    head_ = newNode;
  }

  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata)
{
  ListNode * newNode = new ListNode(ndata);

  if(tail_ != NULL)
  {
    newNode->prev = tail_;
    tail_->next = newNode;
    tail_ = newNode;
  }
  if(tail_ == NULL)
  {
    head_ = newNode;
    tail_ = newNode;
  }

  length_++;

  /// @todo Graded in MP3.1
}


/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode * curr = start;

  for (int i = 0; i < splitPoint; i++) {
    curr = curr->next;
  }

  if (curr != NULL) {
      curr->prev->next = NULL;
      curr->prev = NULL;
  }

  return curr;
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall()
{
  ListNode * curr = head_;
  int i = 1;
  while(curr->next != NULL)
  {
    ListNode * tmp = curr->next;
    if(i % 2 == 0)
    {
      curr->next->prev = curr->prev;
      curr->prev->next = curr->next;

      curr->prev = tail_;
      curr->next = NULL;
      tail_->next = curr;

      tail_ = curr;
      curr = tmp;
    }
    else
    {
      curr = tmp;
    }
    i++;

  }
  /// @todo Graded in MP3.1
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint)
{

  ListNode * curr = NULL;
  ListNode * tmp = NULL;
  ListNode * beforeStart = startPoint->prev;
  ListNode * start = startPoint;
  ListNode * end = endPoint->next;

  while(startPoint != endPoint)
  {
    curr = startPoint->prev;
    startPoint->prev = startPoint->next;
    startPoint->next = curr;
    startPoint = startPoint->prev;
  }

  tmp = startPoint->prev;
  startPoint->prev = beforeStart;
  startPoint->next = tmp;
  endPoint = start;
  endPoint->next = end;

  if(beforeStart != NULL)
  {
    beforeStart->next = startPoint;
  }
  else
  {
    head_ = startPoint;
  }

  if(end != NULL)
  {
    end->prev = endPoint;
  }
  else
  {
    tail_ = endPoint;
  }

  /// @todo Graded in MP3.2
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n)
{
  if(n == length_)
  {
    reverse();
  }
  if(n <= 1)
  {
    return;
  }
  ListNode * tmp1 = head_;
  ListNode * tmp2 = NULL;


  while(tmp1 != NULL)
  {
    tmp2 = tmp1;
    for(int i = 1; i < n; i++)
    {
      if(tmp2->next != NULL)
      {
        tmp2 = tmp2->next;
      }
    }

    reverse(tmp1, tmp2);
    tmp1 = tmp2->next;

  }
  /// @todo Graded in MP3.2
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second)
{
  ListNode * newList = NULL;
  ListNode * tmp = NULL;


  if(first != NULL && second != NULL)
  {
    if(first->data < second->data)
    {
      newList = first;
      first = first->next;
    }
    else
    {
      newList = second;
      second = second->next;
    }
    tmp = newList;

    while(first != NULL && second != NULL)
    {
      if(first->data < second->data)
      {
        first->prev = tmp;
        tmp->next = first;
        first = first->next;
      }
      else
      {
        second->prev = tmp;
        tmp->next = second;
        second = second->next;
      }
      tmp = tmp->next;
    }

    if(first == NULL)
    {
      second->prev = tmp;
      tmp->next = second;
    }
    if(second == NULL)
    {
      first->prev = tmp;
      tmp->next = first;
    }

    return newList;
  }


  if(first == NULL)
  {
    return second;
  }
  return first;
}
  /// @todo Graded in MP3.2



/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength)
{
  if(chainLength == 1)
  {
    return start;
  }

  return merge(mergesort(split(start, chainLength / 2), (chainLength - chainLength / 2)), mergesort(start, chainLength / 2 + chainLength % 2));

  /// @todo Graded in MP3.2
}
