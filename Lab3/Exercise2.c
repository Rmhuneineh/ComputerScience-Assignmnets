//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 10/28/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

int main() {
    int A = 3, B = 7, C;
    C = (A==B);
    printf("%d\n", C);
    C = (A!=B);
    printf("%d\n", C);
    C = (A>=B);
    printf("%d\n", C);
    C = (A<=B);
    printf("%d\n", C);
    A = 0; B = 0;
    C = ((A&&B)||(!B))&&(!A);
    printf("%d\n", C);
    A = 1; B = 0;
    C = ((A&&B)||(!B))&&(!A);
    printf("%d\n", C);
    A = 0; B = 1;
    C = ((A&&B)||(!B))&&(!A);
    printf("%d\n", C);
    A = 1; B = 1;
    C = ((A&&B)||(!B))&&(!A);
    printf("%d\n", C);
    A = 12; B = 15; int X = 13;
    C = ((X>A)&&(X<B));
    printf("%d\n", C);
    
    return 0;
}