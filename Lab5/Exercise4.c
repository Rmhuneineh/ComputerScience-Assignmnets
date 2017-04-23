//
//  main.c
//  Exercise 4
//
//  Created by Ragheed Ma'rouf Huneineh on 11/11/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#define N 10

int main() {
    int array[N]={0};
    int i, pos;
    printf("Enter numbers:\n");
    scanf("%d", &array[0]);
    scanf("%d", &array[1]);
    if(array[0]<array[1])
    {
        for(i=2; i<N; i++)
        {
            scanf("%d", &array[i]);
            if(array[i]<array[i-1])
            {
                pos = i;
                break;
            }
        }
    }
    else
    {
        for(i=2; i<N; i++)
        {
            scanf("%d", &array[i]);
            if(i>0 && array[i]>array[i-1])
            {
                pos = i;
                break;
            }
        }
    }
    for(i=0; i<=pos; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
