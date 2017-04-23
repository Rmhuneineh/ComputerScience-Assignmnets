//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 11/12/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE1 99
#define SIZE2 200
#define MAXIMUM 100


int main() {
    int A1[SIZE1], i, A2[SIZE2], j, k, pos[SIZE1]={-1};
    srand(time(NULL));
    for(i=0; i<SIZE1; i++)
    {
        A1[i] = rand() % 200 - MAXIMUM;
        A2[i] = i;
    }
    for(i=0; i<SIZE1; i++)
    {
        printf("%d ", A1[i]);
    }
    printf("\n\n");
    for(i=0; i<SIZE1; i++)
    {
        for(j=i+1; j<SIZE1; j++)
        {
            if(A1[i] == A1[j])
            {
                printf("%d at %d ", A1[i], i);
                for(k=j; k<SIZE1; k++)
                {
                    if(A1[j] == A1[k])
                    {
                        printf("& %d ", k);
                    }
                }
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}
