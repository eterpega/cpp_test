#include <stdlib.h>
#include <stdio.h>
#include "../include/cpp_test.h"

TestClass TC;
int main(int argc, char* argv[])
{
  int ff=10;
  printf("out: %d\n", ff);
  int rtn = TC.fn1(ff, 30);
  printf("out: %d\n", ff);
  return rtn;
}
