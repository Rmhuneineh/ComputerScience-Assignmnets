//
//  main.c
//  Exercise 2
//
//  Created by Ragheed Ma'rouf Huneineh on 12/2/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

void AlphaNum(char *s);
void Num(char *s);
int NumWords(char *s);

int main() {
    char word[N];
    printf("Enter a word(10 letters max!\n");
    scanf("%s", word);
    AlphaNum(word);
    Num(word);
    printf("%s\nAmount = %d\n", word, NumWords(word));
    return 0;
}

void AlphaNum(char *s)
{
    for(int t=0; s[t] != '\0'; t++)
    {
        if (isalnum(s[t]) == 0)
        {
            s[t] = '_';
        }
    }
}

void Num(char *s)
{
    for(int t=0; s[t] != '\0'; t++)
    {
        if (isdigit(s[t]) != 0)
        {
            s[t] = '*';
        }
    }
}

int NumWords(char *s)
{
    int counter = 0;
    for(int t=0; s[t] != '\0'; t++)
    {
        if (s[t] == '_')
        {
            counter++;
        }
    }
    
    return counter+1;
}
