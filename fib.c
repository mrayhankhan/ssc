#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#ifndef DUMMY_MAIN_DEFINED
#define main dummy_main
#include "dummy_main.h"
#undef main
#define DUMMY_MAIN_DEFINED
#endif

long int fib(int n)
{
  if (n < 2)
    return n;
  else
    return fib(n - 1) + fib(n - 2);
}

int main()
{ 
  int val = 40;
  // scanf("%d", &val);40
  long int a = 0;
  long int b = 1;
  long int sum = 0;
  for (int i = 0; i < val; i++)
  {
    sum = a + b;
    a = b;
    b = sum;
  }
  sleep(10);
  printf("%li \n", a);
  return 0;
}