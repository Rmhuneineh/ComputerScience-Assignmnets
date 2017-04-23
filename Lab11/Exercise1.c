//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 1/7/16.
//  Copyright © 2016 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define N 4

typedef struct _Coordinates
{
    int x;
    int y;
}coordinates;
int main(int argc, const char * argv[]) {
    if (argc != 2 || argv[1][0] != '-') {
        fprintf(stderr, "%s -m|a\n", argv[0]);
        return -1;
    }
    coordinates P[N];
    int i, j;
    for(i=0; i<N; i++)
    {
        printf("x%d: ",i+1);
        scanf("%d", &P[i].x);
        printf("y%d: ",i+1);
        scanf("%d", &P[i].y);
    }
    switch (argv[1][1])
    {
        case 'm':
            {
                double PathLen = 0;
                for(i=0; i<N-1; i++)
                {
                    PathLen += sqrt(pow(P[i+1].x-P[i].x, 2)+pow(P[i+1].y-P[i].y, 2));
                }
                printf("Path Length = %g\n", PathLen);
            }
            break;
            
        case 'a':
            {
                double min = sqrt(pow(P[1].x-P[0].x, 2)+pow(P[1].y-P[0].y, 2));
                for(i=0; i<N-1; i++)
                {
                    for(j=i+1; j<N; j++)
                    {
                        if (min>sqrt(pow(P[j].x-P[i].x, 2)+pow(P[j].y-P[i].y, 2)))
                        {
                            min = sqrt(pow(P[j].x-P[i].x, 2)+pow(P[j].y-P[i].y, 2));
                        }
                    }
                }
                printf("Minimum Length = %g\n", min);
            }
            break;
            
        default:
            fprintf(stderr, "Ivalid Choice!\n");
            return -1;
            break;
    }
    return 0;
}