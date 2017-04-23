//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 11/25/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define N 1024

int NumChar(char *t);
int NumAlph(char *t);
int NumUpp(char *t);
int NumDig(char *t);
int NumSpace(char *t);
int NumWords(char *t);

int main() {
    char text[N];
    int n_char, n_alph, n_upp, n_dig, n_space, n_words;
    printf("Enter text: ");
    gets(text);
    n_char = NumChar(text);
    n_alph = NumAlph(text);
    n_upp = NumUpp(text);
    n_dig = NumDig(text);
    n_space = NumSpace(text);
    n_words = NumWords(text);
    printf("Number of characters: %d\nNumber of alphabetics: %d\nNumber of uppercases: %d\nNumber of digits: %d\nNumber of spaces: %d\nNumber of words: %d\n", n_char, n_alph, n_upp, n_dig, n_space, n_words);
    return 0;
}

int NumChar(char *t)
{
    int i;
    for(i=0; t[i] != '\0'; i++)
        ;
    return i;
    
}

int NumAlph(char *t)
{
    int i, counter = 0;
    for(i=0; t[i] != '\0'; i++)
        if (isalpha(t[i]))
        {
            counter++;
        }
    return counter;
}

int NumUpp(char *t)
{
    int i, counter = 0;
    for(i=0; t[i] != '\0'; i++)
    {
        if (isupper(t[i]))
        {
            counter++;
        }
    }
    return counter;
}

int NumDig(char *t)
{
    int i, counter = 0;
    for(i=0; t[i] != '\0'; i++)
    {
        if (isdigit(t[i]))
        {
            counter++;
        }
    }
    return counter;
}

int NumSpace(char *t)
{
    int i, counter = 0;
    for(i=0; t[i] != '\0'; i++)
    {
        if (isspace(t[i]))
        {
            counter++;
        }
    }
    return counter;
}

int NumWords(char *t)
{
    int i = 0, j, counter = 0;
    while (t[i] != '\0')
    {
        if (isalpha(t[i]) != 0)
        {
            j=i;
            while (isalpha(t[j]) != 0)
            {
                j++;
            }
            i = j;
            counter++;
        }
        else
        {
            i++;
        }
    }
    
    return counter;
}
