//
//  main.c
//  Exercise 1
//
//  Created by Ragheed Ma'rouf Huneineh on 12/2/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 1024

long int SentLen(char *s);
int AlphaNum(char *s);
int Contained(char *s, char *s2);

int main() {
    char sent[N], sent2[N];
    printf("Enter 1st word\n");
    scanf("%s", sent);
    printf("Enter 2nd word\n");
    scanf("%s", sent2);
    if (Contained(sent, sent2))
    {
        printf("WOAH!\n");
    }
    else
    {
        printf("NAH!\n");
    }
    printf("1st Word length = %ld\nCharacters that are alphabetic or numeric in 1st word = %d\n", SentLen(sent), AlphaNum(sent));
    return 0;
}

long int SentLen(char *s)
{
    long int len;
    len = strlen(s);
    return len;
}

int AlphaNum(char *s)
{
    int t, counter = 0;
    for(t=0; s[t] != '\0'; t++)
    {
        if (isalnum(s[t]) != 0)
        {
            counter++;
        }
    }
    return counter;
}

int Contained(char *s, char *s2)
{
    int i, j, k, flag = 0;
    
    for (i=0; s[i] != '\0'; i++)
    {
       if (s[i] == s2[0])
       {
           flag = 1;
           k = i;
           for (j=0 ; s2[j] != '\0'; j++)
           {
              if (s2[j] != s[k])
              {
                  flag = 0;
                  break;
              }
               else
               {
                   k++;
               }
           }
       }
        if (flag)
        {
            break;
        }
    }
    
    
    return flag;
}
