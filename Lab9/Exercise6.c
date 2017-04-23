//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 12/14/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//


#include <stdio.h>

#define N 1024
int main(int argc, const char * argv[]) {
    int arr[N][N], num, i, j, k, l, m, limit = 0;
    int size;
    printf("Enter Size(<1024): ");
    scanf("%d", &size);
    for(i=0; i<size-limit; i++)
    {
        num = 1;
        for(j=i; j<size-limit; j++)
        {
            arr[i][j] = num;
            num++;
        }
        j--;
        for(k=i+1; k<size-limit; k++)
        {
            arr[k][j] = num;
            num++;
        }
        k--;
        for(l=j-1; l>=i; l--)
        {
            arr[k][l] = num;
            num++;
        }
        l++;
        for(m=k-1; m>i; m--)
        {
            arr[m][l] = num;
            num++;
        }
        limit++;
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%5d\t", arr[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
