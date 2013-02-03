#include <iostream>
#include "LinkedList.h"
int main (int argc, char** argv)
{
  LinkedList<int> l;
  l.insert(7);
  l.insert(6);
  l.insert(5);
  std::cout << l.remove() << std::endl;
  std::cout << l.remove() << std::endl;
  std::cout << l.remove() << std::endl;
  return 0;
}
