#include <iostream>

#include "LinkedList.h"
#include "LinkedList2.h"

int main (int argc, char** argv)
{
  /***************************************
   ********** Explicit Version ***********
   **** Source and header are devided, ***
   **** but you will have to specify   ***
   **** the needed template in         ***
   **** LinkedList.cpp                 ***
   ***************************************/
  LinkedList<float> l;
  l.insert(7.5);
  l.insert(6.2);
  l.insert(-5.9);
  std::cout << l.remove(0) << std::endl;
  std::cout << l.remove(1) << std::endl;
  std::cout << l.remove(2) << std::endl;


  /***************************************
   ********** Implicit Version ***********
   **** Source and header are combined,***
   **** but this will get quite        ***
   **** confusing                      ***
   ***************************************/
  LinkedList2<float> l2;
  l2.insert(2.3);
  std::cout << l2.remove(0) << std::endl;

  return 0;
}
