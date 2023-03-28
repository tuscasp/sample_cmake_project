#include <iostream>

#include "foo.hpp"

#include "cmake_hello_world.hpp"

using namespace std;

int main()
{
  cout << hello_string << endl;
  cout << "foo lib returns: " << foo() << endl;
  return 0;
}
