//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 11/11/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
int GCD(int x, int y);
int main() {
    int a, b;
    printf("Enter two numbers 'a' and 'b' such that(a>b) as follows(a, b): ");
    scanf("%d, %d", &a, &b);
    printf("The GCD = %d\n", GCD(a,b));
    
    return 0;
}
int GCD(int x, int y)
{
    int rem=1;
    while (rem>0)
    {
        rem = x%y;
        x=y;
        y=rem;
    }
    return x;
}
