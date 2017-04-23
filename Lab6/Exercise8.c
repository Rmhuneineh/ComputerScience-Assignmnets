//
//  main.c
//  Exercise 8
//
//  Created by Ragheed Ma'rouf Huneineh on 11/19/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define N 50
int main()
{
    int LegOne, LegTwo, Hypotenuse;
    
    Hypotenuse = 0;
    
    while ( Hypotenuse <= N )
    {
        LegTwo = 1;
        
        while ( LegTwo <  N )
        {
            LegOne = 1;
            
            while ( LegOne < N )
            {
                if ( LegOne*LegOne + LegTwo*LegTwo == Hypotenuse*Hypotenuse && LegOne < LegTwo )
                {
                    printf("\n\t\t The sides are %4d,%4d,%4d", LegOne,LegTwo,Hypotenuse);
                }
                LegOne++;
            }
            LegTwo++;
        }
        Hypotenuse++;
    }
    
    printf("\n\n");
    return 0;
}
