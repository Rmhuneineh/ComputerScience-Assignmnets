//
//  main.c
//  Exercise 5
//
//  Created by Ragheed Ma'rouf Huneineh on 1/20/17.
//  Copyright © 2017 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FNAME "contest.txt"
#define FNAME2 "contest_ord.txt"
#define N 20+1
#define TOP 3


typedef struct _Athlete{
    char Name[N];
    int score;
}Athlete;


Athlete list[MAX];
int IND=0, t[MAX]={0};


void Organise(char *n, int s);
int Top(void);


int main(int argc, const char * argv[]) {
    
    
    FILE *ragh;
    ragh = fopen(FNAME, "r");
    char Buffer[2*N], temp[N];
    int temps, i;
    while(fgets(Buffer,2*N,ragh)!=NULL)
    {
        sscanf(Buffer, "%s %d", temp, &temps);
        
        Organise(temp, temps);
        
    }
    fclose(ragh);
    
    ragh = fopen(FNAME2, "w");
    for(int i=0;i<IND;i++)
    {
        printf("%s\t%d\n", list[i].Name, list[i].score);
        fprintf(ragh, "%s %d\n", list[i].Name, list[i].score);
    }
    fclose(ragh);
    
    printf("The top %d players are:\n", TOP);
    for(i=0; i<TOP; i++)
    {
        int pos = Top();
        printf("%s %d\n", list[pos].Name, list[pos].score);
    }
    
    return EXIT_SUCCESS;
}


void Organise(char *n, int s)
{
    int i, k=0, flag=0;
    
    for(i=0; i<IND && flag == 0 ;i++)
    {
        if (strcmp(n, list[i].Name)<0)
        {
            k=i;
            flag=1;
        }
    }
    if (flag)
    {
        for(i=IND; i>=k; i--)
        {
            strcpy(list[i].Name, list[i-1].Name);
            list[i].score = list[i-1].score;
        }
        strcpy(list[k].Name, n);
        list[k].score = s;
    }
    else
    {
        strcpy(list[IND].Name, n);
        list[IND].score = s;
    }
    IND++;
}

int Top(void)
{
    int j, max, pos;
    for(j=0; t[j]!=0; j++)
    {
        
    }
    max = list[j].score;
    pos = j;
    for(j=0;j<IND;j++)
    {
        if (list[j].score>max && t[j] == 0)
        {
            max = list[j].score;
            pos = j;
        }
    }
    t[pos] = 1;
    return pos;
}







