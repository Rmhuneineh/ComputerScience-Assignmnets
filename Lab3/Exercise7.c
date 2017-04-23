//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c, d, largest, smallest;
    printf("Enter 4 positive integers less than 1000 as follows (1st, 2nd, 3rd, 4th): ");
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);
    if(a<0 || a>= 1000 || b<0 || b>1000 || c<0 || c>1000 || d<0 || d>1000)
    {
        printf("Error!\n");
    }
    else
    {
        largest = a;
        if(b>largest) largest = b;
        if(c>largest) largest = c;
        if(d>largest) largest = d;
        smallest  = a;
        if(b<smallest) smallest = b;
        if(c<smallest) smallest = c;
        if(d<smallest) smallest = d;
        
        printf("The maximum difference = %d\n", largest-smallest);
    }

    return 0;
}
