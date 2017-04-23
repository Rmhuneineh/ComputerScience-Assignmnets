//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 11/26/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

#define N 5

float over_AVG(int *v, int greater[]);

int main() {
    int v[N], i;
    int g[1]= {0};
    printf("Enter %d numbers!\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("Average = %g\nNumber of elements > average = %d\n", over_AVG(v, g), g[0]);
    return 0;
}

float over_AVG(int *v, int greater[])
{
    float sum = 0, avg;
    int i;
    for(i=0; i<N; i++)
    {
        sum += v[i];
    }
    avg = (float) sum/N;
    for(i=0; i<N; i++)
    {
        if (v[i] > avg)
        {
            greater[0]++;
        }
    }
    return avg;
}
