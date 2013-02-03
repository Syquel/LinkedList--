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

template <typename T> 
LinkedList<T>::LinkedList() {
  head = NULL;
}

/* destructor */
template <typename T> 
LinkedList<T>::~LinkedList() {
  if ( head != NULL ) {
    Node* i = head->next;
    while (head) {
      delete head;
      head = i;
      i = i->next;
    }
  } // end if
}

/* insert: inserts an element at the begining of the list. */
template <typename T> 
void LinkedList<T>::insert(T element) {
  if ( head == NULL ) {
     head = new Node(element,0);
  } else {
    Node* i = head;
    while ( i->next ) {
      i = i->next;
    }
    i->next = new Node(element,0);
  }
}

/* remove: deletes the first element of the list. */
template <typename T> 
T LinkedList<T>::remove() {
  Node* tmp = head;
  T e = head->element;
  head = head->next;
  delete tmp;
  return e;
}

#endif
