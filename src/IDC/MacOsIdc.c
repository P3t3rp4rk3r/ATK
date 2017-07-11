/*
  
  gcc MacOsIdc.c -o pl

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr, sum = 0;
    int k = 1;
    num = 1024;
    do {
    ptr = (int*) malloc(num * sizeof(char));
    } while(k==1);

    return 0;
}
