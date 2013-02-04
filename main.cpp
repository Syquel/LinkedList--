#include <iostream>
#include "LinkedList.h"

int main (int argc, char** argv)
{
  LinkedList<float> l;
  l.insert(7.5);
  l.insert(6.2);
  l.insert(-5.9);
  std::cout << l.remove() << std::endl;
  std::cout << l.remove() << std::endl;
  std::cout << l.remove() << std::endl;
  return 0;
}
