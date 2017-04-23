//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 12/18/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    if(argc!=3)
    {
        fprintf(stderr,"Not enough Arguments!\n");
        exit(0);
    }
    int a=atoi(argv[1]), b=atoi(argv[2]);
    if(a<=10000 && a>=-10000 && b<=10000 && b>=-10000)
    {
        printf("%d + %d = %d\n", a, b, a+b);
    }
    else
    {
        fprintf(stderr, "Out of domain!\n");
    }
    return 0;
}
