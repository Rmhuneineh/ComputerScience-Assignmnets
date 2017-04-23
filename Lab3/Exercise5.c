//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    double leg1, leg2, leg3, valid;
    printf("Enter the lenghts of the sides of the triangle as follows (1st, 2nd, 3rd): ");
    scanf("%lf, %lf, %lf", &leg1, &leg2, &leg3);
    if((leg1<=0) || (leg2<=0) || (leg3<=0))
    {
        printf("At least one of the lengths is an invalid number!\n");
        valid = 0;
    }
    else
    {
        if((leg1 + leg2 < leg3) || (leg1 + leg3 < leg2) || (leg2 + leg3 < leg1))
        {
            printf("The lengths you entered can not make a triangle!\n");
            valid = 0;
        }
        else if ((leg1 + leg2 == leg3) || (leg1 + leg3 == leg2) || (leg2 + leg3 == leg1))
        {
            printf("The lengths you enetered make up a degenerate triangle!\n");
            valid = 1;
        }
        else
        {
            printf("The triangle is a valid triangle!\n");
            valid = 1;
        }
        if (((leg1 == leg2) || (leg1 == leg3) || (leg2 == leg3)) && (valid == 1))
        {
            printf("The lenghts you enetered make up an isosceles triangle!\n");
        }
        if(((pow(leg1,2) + pow(leg2,2) == pow(leg3,2)) || (pow(leg1,2) + pow(leg3,2) == pow(leg2,2)) || (pow(leg3,2) + pow(leg2,2) == pow(leg1,2))) && (valid == 1))
        {
            printf("The lengths you entered make up a right triangle!\n");
        }
    }
    return 0;
}
