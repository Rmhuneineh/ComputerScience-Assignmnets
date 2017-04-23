//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 11/11/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define N 10

int main() {
    int array[N], i, pos=-1;
    printf("Enter 10 integers:\n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<N-2; i++)
    {
        if(array[i]<array[i+1] && array[i+1]<array[i+2])
        {
            printf("%d %d %d\tposition: %d\n", array[i], array[i+1], array[i+2], i);
        }
    }
    return 0;
}
