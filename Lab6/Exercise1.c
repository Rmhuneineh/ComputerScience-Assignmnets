//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 11/17/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define N 10

int Palindrome(int *arr);
int main() {
    int num[N], i;
    printf("Enter 10 integers:\n");
    for(i=0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    if (Palindrome(num))
    {
        printf("Palindrome!\n");
    }
    else{
        printf("Not palindrome!\n");
    }
    return 0;
}

int Palindrome(int *arr)
{
    int u, d, flag = 1;
    u=0;
    d = N-1;
    while(d >=0)
    {
        if(arr[u] !=  arr[d])
        {
            flag = 0;
        }
        u++;
        d--;
    }
    return flag;
}
