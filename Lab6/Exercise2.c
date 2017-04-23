//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 11/18/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define ROW 2

int main() {
    int nums[ROW][N], nums1[ROW][N], j, k, counter, same_freq = 1, sam_numb = 0;
    printf("Enter 1st %d number!\n", N);
    for(j=0; j<N; j++)
    {
        printf("%d: ", j+1);
        scanf("%d", &nums[0][j]);
    }
    printf("Enter 2nd %d number!\n", N);
    for(j=0; j<N; j++)
    {
        printf("%d: ", j+1);
        scanf("%d", &nums1[0][j]);
    }
    for(j=0; j<N; j++)
    {
        for(k=0; k<N; k++)
        {
            if(nums[0][j] == nums1[0][k])
            {
                sam_numb++;
            }
        }
    }
    if (sam_numb >= N)
        {
            for(j=0; j<N; j++)
            {
                counter  =0;
                for(k=0; k<N; k++)
                {
                    if(nums[0][j] == nums[0][k])
                    {
                        counter ++;
                    }
                    nums[1][j] = counter;
                }
            }
            for(j=0; j<N; j++)
            {
                counter  =0;
                for(k=0; k<N; k++)
                {
                    if(nums1[0][j] == nums1[0][k])
                    {
                        counter ++;
                    }
                    nums1[1][j] = counter;
                }
            }
            for(j=0; j<N; j++)
            {
                for(k=0; k<N; k++)
                {
                    if (nums[0][j] == nums1[0][k] && nums[1][j] != nums1[1][k])
                    {
                        same_freq = 0;
                    }
                }
            }
    }
    if (same_freq && (sam_numb >= N))
    {
        printf("Whoa!\n");
    }
    else    {
        printf("Nah!\n");
    }
    return 0;
}
