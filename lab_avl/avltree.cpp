/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include <algorithm>
#include <iostream>


using namespace std;

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    Node * tmp = t->right;
    t->right = tmp->left;
    tmp->left = t;

    t->height = 1 + max(heightOrNeg1(t->left), heightOrNeg1(t->right));
    t = tmp;
    t->height = 1 + max(heightOrNeg1(t->left), heightOrNeg1(t->right));

  //  t = tmp;
    // your code here
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    Node * tmp = t->left;
    t->left = tmp->right;
    tmp->right = t;

    t->height = 1 + max(heightOrNeg1(t->left), heightOrNeg1(t->right));
    t = tmp;
    t->height = 1 + max(heightOrNeg1(t->left), heightOrNeg1(t->right));

  //  t = tmp;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    if(subtree == NULL)
    {
      return;
    }

    int bal = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);
    int bal2 = 0;

    if(bal == 2)
    {
      bal2 = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
      if(bal2 == 1)
      {
        rotateLeft(subtree);
      }
      else
      {
        rotateRightLeft(subtree);
      }
    }
    else if(bal == -2)
    {
      bal2 = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
      if(bal2 == -1)
      {
        rotateRight(subtree);
      }
      else
      {
        rotateLeftRight(subtree);
      }

    }
    subtree->height = 1 + max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
        // your code here
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    if(subtree == NULL)
    {
      subtree = new Node(key, value);
    }
    else if(key >= subtree->key)
    {
      insert(subtree->right, key, value);
      //rebalance(subtree);
    }
    else
    {
      insert(subtree->left, key, value);
      //rebalance(subtree);
    }
    rebalance(subtree);
    //subtree->height = 1 + max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
    // your code here
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        remove(subtree->left, key);
        rebalance(subtree);
        // your code here
    } else if (key > subtree->key) {
      remove(subtree->right, key);
      rebalance(subtree);
        // your code here
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            delete subtree;
            subtree = NULL;
            rebalance(subtree);
            return;
            /* no-child remove */
            // your code here
        } else if (subtree->left != NULL && subtree->right != NULL) {
            Node * tmp = subtree->left;
            while(tmp->right != NULL)
            {
              tmp = tmp->right;
            }
            swap(tmp, subtree);
            remove(subtree->left, tmp->key);
            rebalance(subtree);

            /* two-child remove */
            // your code here
        } else {
            Node * tmp = NULL;
            if(subtree->left == NULL)
            {
              tmp = subtree->right;
            }
            else
            {
              tmp = subtree->left;
            }
            delete subtree;
            subtree = NULL;
            subtree = tmp;
            rebalance(subtree);
            /* one-child remove */
            // your code here
        }
        // your code here
        rebalance(subtree);
        subtree->height = 1 + max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
        rebalance(subtree);
    }
    rebalance(subtree);
}
