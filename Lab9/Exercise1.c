//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 12/10/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define R 11
#define C 5

int Check(char map[][R+1], int path[], int i);

int main() {
    char map[C][R+1];
    int i, j, path[R];
    
    printf("Enter Map!\n");
    for(i=0; i<C; i++)
    {
        gets(map[i]);
    }
    for(i=0; i<C; i++)
    {
        if (map[i][0] == '*')
        {
            path[0] = i+1;
            if(Check(map, path, i)!=0)
            {
                printf("\nPath: ");
                for(j=0; j<R; j++)
                {
                    printf("%d ", path[j]);
                }
            }
        }
    }
    printf("\n\n");
    for(int x = 0; x<C; x++)
    {
        for(int z = 0; z<R; z++)
        {
            printf("%c ", map[x][z]);
        }
        
        printf("\t%d\n", x+1);
    }
    printf("\n");
    return 0;
}

int Check(char map[][R+1], int path[], int i)
{
    int flag = 1, j;
    for(j=0; j<R; j++)
    {
        if (map[i][j] == '*')
        {
            ;
        }
        else if (i>0 && map[i-1][j] == '*')
        {
            i--;
        }
        else if (i<C-1 && map[i+1][j] == '*')
        {
            i++;
        }
        else
        {
            flag = 0;
        }
        path[j] = i+1;
    }
    return flag;
}
