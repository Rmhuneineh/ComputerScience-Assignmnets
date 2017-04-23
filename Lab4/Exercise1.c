//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 11/4/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    
    printf("a*x^2 + b*x + c = 0");
    
    printf("\na: "); scanf("%lf", &a);
    
    printf("b: "); scanf("%lf", &b);
    
    printf("c: "); scanf("%lf", &c);
    
    delta = pow(b,2) - 4*a*c;
    
    if (delta > 0) printf("The equation has two REAL distinct roots\n");
    
    else if (delta == 0) printf("The equation has two REAL coincident roots\n");
    
    else printf("The equation has no real roots\n");
    
    return 0;
}
