#ifndef LINKEDLIST2_H_
#define LINKEDLIST2_H_

#include <cstddef>

template <typename T>
class LinkedList2
{
public:
  LinkedList2();
  ~LinkedList2();
  void insert(T element);
  T remove(std::size_t position);

private:
  class Node {
  public:
    T element;
    Node* next;
    Node(T e, Node* n) : element(e), next(n){}
  };

  Node* head;
};

template<typename T>
LinkedList2<T>::LinkedList2()
	: head(NULL){

}

template<typename T>
LinkedList2<T>::~LinkedList2() {

}

template<typename T>
void LinkedList2<T>::insert(T element) {

}

template<typename T>
T LinkedList2<T>::remove(std::size_t position) {

}

#endif
