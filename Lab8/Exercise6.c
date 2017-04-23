//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 12/3/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

char text[N][N];

void CheckForCH(void);
void CheckForDouble(void);

int main() {
    int t;
    printf("Enter sequence of sentences\n");
    t=0;
    do
    {
        gets(text[t]);
        t++;
    } while(text[t-1][0] != '\0');
    
    CheckForCH();
    CheckForDouble();
    for(t=0; text[t][0]!='\0'; t++)
    {
        puts(text[t]);
    }
    return 0;
}
void CheckForCH(void)
{
    int i, j, index;
    for(i=0; text[i][0]!='\0'; i++)
    {
        j=0;
        while(text[i][j]!='\0')
        {
            if(text[i][j] == 'c' && text[i][j+1] == 'h')
            {
                text[i][j] = 'k';
                for(index = j+1; text[i][index]!= '\0'; index++)
                {
                    text[i][index] = text[i][index+1];
                }
                text[i][index] = '\0';
            }
            j++;
        }
    }
}

void CheckForDouble(void)
{
    int i, j, index;
    for(i=0; text[i][0]!='\0'; i++)
    {
        j=0;
        while(text[i][j]!='\0')
        {
            if(text[i][j] == text[i][j+1])
            {
                for(index = j+1; text[i][index]!= '\0'; index++)
                {
                    text[i][index] = text[i][index+1];
                }
                text[i][index] = '\0';
            }
            j++;
        }
    }
}
