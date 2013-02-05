/* File : LinkedList.h
 * Date : 03-02-2013
 * Author : Me
 * 
 * This is the implementation for a generic linked list, with 
 * the basic operations of the list.
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iostream>

template <typename T>
class LinkedList 
{
public:
  LinkedList();
  ~LinkedList();
  void insert(T);
  T remove();

private:
  class Node {
  public:
    T element;
    Node* next;
    Node(T e, Node* n) : element(e), next(n){}
  };

  Node* head;
};

// split definition from specification
#include "LinkedList.cpp"

#endif
