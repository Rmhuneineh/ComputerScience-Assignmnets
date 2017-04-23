//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 12/18/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 4

int main(int argc, const char * argv[]) {
    if (argc!=2)
    {
        fprintf(stderr, "2 Arguments Needed!\n");
        exit(0);
    }
    double x[N], y[N];
    int i;
    for(i=0; i<N; i++)
    {
        printf("X%d: ", i+1);
        scanf("%lf", &x[i]);
        printf("Y%d: ", i+1);
        scanf("%lf", &y[i]);
        
    }
    if (!strcmp(argv[1],"-m"))
    {
        double PathLen=0;
        for (i=0; i<N-1; i++)
        {
            PathLen += sqrt(pow(x[i+1]-x[i],2) + pow(y[i+1]-y[i],2));
        }
        printf("Path Length = %g\n", PathLen);
    }
    else if (!strcmp(argv[1], "-a"))
    {
        double min = sqrt(pow(x[2]-x[1],2) + pow(y[2]-y[1],2));
        for (i=0; i<N-1; i++)
        {
            if (min>sqrt(pow(x[i+1]-x[i],2) + pow(y[i+1]-y[i],2))) {
                min = sqrt(pow(x[i+1]-x[i],2) + pow(y[i+1]-y[i],2));
            }
        }
        printf("Minimum Length of a Segment = %lf\n", min);
    }
    return 0;
}
