//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 11/11/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 199
#define INT 100
// PROTOS
void Print(int foo[]);

int main() {
    int array[SIZE], t, max, pos;
    srand(time(NULL));
    for(t=0; t<SIZE; t++)
    {
        array[t] = rand() % INT;
    }
    Print(array);
    max = array[0];
    for(t=0; t<SIZE; t++)
    {
        if(array[t]>=max)
        {
            max = array[t];
            pos = t;
        }
    }
    printf("The maximum value = %d\nThe Position(s): ", max);
    for(t=0; t<SIZE; t++)
    {
        if(array[t]==max)
        {
            printf("%d ", t);
        }
    }
    printf("\n");
    return 0;
}
void Print(int foo[])
{
    int t;
    for(t=0; t<SIZE; t++)
    {
        printf("%d ", foo[t]);
    }
    printf("\n");
    return;
}

