//
//  main.c
//  Ex4
//
//  Created by Ragheed Ma'rouf Huneineh on 12/22/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4
typedef struct _point
{
    double x;
    double y;
}Point;

double d(Point p1, Point p2);
void Minimum(Point *p);
void Length(Point *p);

int main(int argc, const char * argv[]) {
    Point p[N];
    if(argc!=6 || argv[1][0] != '-')
    {
        fprintf(stderr, "%s -m|a p1 p2 p3 p4\n", argv[0]);
        return -1;
    }
    int i;
    for(i=0; i<N; i++)
    {
        sscanf(argv[i+2], "%lf,%lf", &p[i].x, &p[i].y);
    }
    switch (argv[1][1]) {
        case 'a':
            Minimum(p);
            break;
        case 'm':
            Length(p);
            break;
        default:
            printf("Yeuch!\n");
            break;
    }
    return 0;
}

double d(Point p1, Point p2)
{
    return sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
}

void Minimum(Point *p)
{
    int i, j;
    double min = d(p[0], p[1]);
    for (i=0; i<N; i++) {
        for (j=i+1; j<N; j++) {
            if (min > d(p[i], p[j])) {
                min = d(p[i], p[j]);
            }
        }
    }
    printf("Minimum = %g\n", min);
}

void Length(Point *p)
{
    double length = 0.0;
    int i;
    for(i=0; i<N-1; i++)
    {
        length += d(p[i], p[i+1]);
    }
    printf("Length = %g\n", length);
}