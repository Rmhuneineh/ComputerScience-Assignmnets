//
//  main.c
//  Exercise 7
//
//  Created by Ragheed Ma'rouf Huneineh on 12/4/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>

#define N 5

int net[N][N];

void Load(void);
void CheckRow(void);
void CheckColumn(void);

int main() {
    Load();
    CheckRow();
    CheckColumn();
    printf("\n");
    return 0;
}

void Load(void)
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("(%d,%d): ", i+1, j+1);
            scanf("%d", &net[i][j]);
        }
    }
}

void CheckRow(void)
{
    int i, j, index, counter, val;
    for(i=0; i<N; i++)
    {
        j=0;
        while(j<N-2)
        {
            if (net[i][j]==net[i][j+1])
            {
                counter=0;
                index=j+1;
                val = net[i][j];
                while(index<N && net[i][j]==net[i][index])
                {
                    counter++;
                    index++;
                }
                if(counter>=2)
                {
                    printf("\nLength Of Sequence = %d\nValue In Sequence = %d\nRow = %d\n", counter+1, val, i+1);
                    int t;
                    for(t=N; t>=0; t--)
                    {
                        if(j+counter+t<N)
                        {
                            j=j+counter+t;
                            break;
                        }
                    }
                }
                else
                {
                    j++;
                }
            }
            else
            {
                j++;
            }
        }
    }
}

void CheckColumn(void)

{
    int i, j, index, counter, val;
    for(j=0; j<N; j++)
    {
        i=0;
        while(i<N-2)
        {
            if (net[i][j]==net[i+1][j])
            {
                counter=0;
                index=i+1;
                val = net[i][j];
                while(index<N && net[i][j]==net[index][j])
                {
                    counter++;
                    index++;
                }
                if(counter>=2)
                {
                    printf("\nLength Of Sequence = %d\nValue In Sequence = %d\nColumn = %d\n", counter+1, val, j+1);
                    int t;
                    for(t=N; t>=0; t--)
                    {
                        if(i+counter+t<N)
                        {
                            i=i+counter+t;
                            break;
                        }
                    }
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
    }
}
