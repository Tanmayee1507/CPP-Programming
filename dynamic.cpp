#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int Arr[5];  ///static memory allocation
    int *p = NULL;
    p = (int *)malloc(5 * sizeof(int));  //dynamic using malloc

    int * q = NULL;
    q = (int *)calloc(5, sizeof(int)); //dynamic using calloc

    int *X = NULL;
    X = new int[5];

free (p);
free (q);
delete[] X;

    return 0;
}
