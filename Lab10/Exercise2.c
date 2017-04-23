//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 12/18/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    if(argc!=2)
    {
        fprintf(stderr, "2 Arguments needed!\n");
        exit(0);
    }
    double a, b;
    char op;
    sscanf(argv[1], "%lf%c%lf", &a, &op, &b);
    switch (op)
    {
        case '+':
            printf("%g + %g = %g\n", a, b, a+b);
            break;
        case '-':
            printf("%g - %g = %g\n", a, b, a-b);
            break;
        case '*':
            printf("%g * %g = %g\n", a, b, a*b);
            break;
        case '/':
            if (b==0)
            {
                fprintf(stderr, "Invalid Denominator!\n");
            }
            else
            {
                printf("%g / %g = %g\n", a, b, a/b);
            }
            break;
        default:
            fprintf(stderr, "Invalid Operation!\n");
            break;
    }
    return 0;
}
