//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 11/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
int currentsize = 0;
#define N 10

void print(int arr[10])
{
    for ( int i=0; i<currentsize; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int arr[10], int x)
{
    int index = currentsize;
    
    for(int i=currentsize; i >=0; i--)
    {
        if (arr[i] >= x)
        {
            index = i;
        }
    }
    for (int i = currentsize; i>index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = x;
}
int main() {
    int arr[10];
    printf("Enter number of elements: ");
    int elements;
    scanf("%d", &elements);
    for(int i=0; i<elements; i++)
    {
        printf("\n%d: ", i+1);
        int x;
        scanf("%d", &x);
        sort(arr, x);
        currentsize++;
        printf("Array: ");
        print(arr);
    }
    printf("\nFinal Array: ");
    print(arr);
    return 0;
}
