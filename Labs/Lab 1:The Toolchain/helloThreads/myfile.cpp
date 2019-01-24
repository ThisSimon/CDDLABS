#include <stdio.h>
/*
I am compiling with g++ myfile.cpp -g -Wall -o myfileexe
I have changed main to return an int as it is forbidden otherwise
source -options destination
*/
int main()
{
  int i;
  for(i=0;i<10;i++)
    printf("%d",i);
  return 0;
}
