//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 11/11/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50
#define MAX 1000

int main() {
    int v1[SIZE] = {0}, v2[SIZE] = {0}, t1=0, t2=0, val;
    srand(time(NULL));
    while (t1 != SIZE && t2 != SIZE)
    {
        val = (rand() % 1000) - 500;
        if(val%3 == 0)
        {
            v1[t1] = val;
            t1++;
        }
        if (val<0 && val%3 != 0 && val%2 != 0 )
        {
            v2[t2] = val;
            t2++;
        }
    }
    for(t1=0; t1<SIZE; t1++)
    {
        printf("%d ", v1[t1]);
    }
    printf("\n");
    for(t2=0; t2<SIZE; t2++)
    {
        printf("%d ", v2[t2]);
    }
    return 0;
}
