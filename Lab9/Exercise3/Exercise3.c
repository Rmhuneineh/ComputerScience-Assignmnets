//
//  main.c
//  Exercise 3
//
//  Created by Ragheed Ma'rouf Huneineh on 12/10/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 10
#define MAX_BUFF 50
#define STAT_N 256

int NDep(char *station, char DepStat[][N]);
int NArr(char *station, char ArrStat[][N]);

int main(int argc, const char * argv[]) {
    char DepStat[STAT_N][N], ArrStat[STAT_N][N], NewStat[N];
    int numstations, DepHr[STAT_N], DepMin[STAT_N], ArrHr[STAT_N], ArrMin[STAT_N];
    if (argc != 2)
    {
        fprintf(stderr,"Yeuch! 2 Arguments Required!\n");
        return -1;
    }
    FILE *train;
    train = fopen(argv[1], "r");
    if (train == NULL)
    {
        fprintf(stderr,"Yeuch! Can't Open %s!\n", argv[1]);
        return -2;
    }
    numstations=0;
    char Buf[MAX_BUFF];
    while (fgets(Buf, MAX_BUFF, train) != NULL)
    {
        sscanf(Buf,"%s %d:%d %s %d:%d", DepStat[numstations], &DepHr[numstations], &DepMin[numstations], ArrStat[numstations], &ArrHr[numstations], &ArrMin[numstations]);
        numstations+=1;
    }
    fclose(train);
    printf("Enter Station\n");
    gets(NewStat);
    
    printf("Number of trains departing from %s: %d\nNumber of trains arriving to %s: %d\n", NewStat, NDep(NewStat,DepStat), NewStat, NArr(NewStat, ArrStat));
    return 0;
}

int NDep(char *station, char DepStat[][N])
{
    int i, counter=0;
    for(i=0; DepStat[i][0]!='\0'; i++)
    {
        if(!strcmp(DepStat[i],station))
        {
            counter+=1;
        }
    }
    return counter;
}

int NArr(char *station, char ArrStat[][N])
{
    int i, counter=0;
    for(i=0; ArrStat[i][0]!='\0'; i++)
    {
        if(!strcmp(ArrStat[i],station))
        {
            counter+=1;
        }
    }
    return counter;
}
