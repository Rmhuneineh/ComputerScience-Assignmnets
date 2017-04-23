//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 11/5/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    long double x0 = 0, x1 = 1, x2;
    printf("%Lg %Lg", x0, x1);
    for (int i = 0; i < 18 ; i++)
    {
        x2 = x1 + x0;
        printf(" %Lg", x2);
        x0 = x1;
        x1 = x2;
    }
    printf("\n");
    
    /*
     * Further Insight
    x0 = 1; x1 = 2;
    printf("%Lf %Lf", x0, x1);
    for (int i = 0; i < 21 ; i ++)
    {
        x2 = x1*x0;
        printf(" %Lg", x2);
        x0 = x1;
        x1 = x2;
    }
    printf("\n"); */
    
    return 0;
}
