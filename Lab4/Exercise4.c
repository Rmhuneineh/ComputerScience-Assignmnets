//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 11/5/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int N, i, j;
    printf("Enter the base: ");
    scanf("%d", &N);
    printf("Right Isosceles Triangle:\n");
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    /*
     * Further Insight
     int k;
    printf("Inverted Equilateral Triangle:\n");
    for(i=0; i<=N/2; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(k=0; k<N-(2*i); k++)
        {
            printf("*");
        }
        printf("\n");
    }
     
     * Personal Extra
     int k;
    printf("Equilateral Triangle:\n");
    for(i=0; i<=N/2; i++)
    {
        for(j=0; j<(N/2)-i; j++)
        {
            printf(" ");
        }
        for(k=0; k<(2*i)+1; k++)
        {
            printf("*");
        }
        printf("\n");
    } */
    
    return 0;
}
