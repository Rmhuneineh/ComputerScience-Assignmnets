//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define K 10

int main() {
    int a, b, c, d; double x;
    printf("ax + bcx + Kd = 0\n");
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);
    printf("d = "); scanf("%d", &d);
    if((a + (b*c)) == 0)
    {
        printf("Infinite!\n");
    }
    else
    {
        x = (double) -(K*d)/(a+(b*c));
        printf("x = %f\n", x);
    }
    return 0;
}
