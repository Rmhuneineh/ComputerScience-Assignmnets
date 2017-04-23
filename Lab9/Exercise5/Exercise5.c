//
//  main.c
//  Ex5
//
//  Created by Ragheed Ma'rouf Huneineh on 12/21/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

double Map[SIZE][SIZE];


typedef struct _Position{
    int x;
    int y;
} Position;

int Valid(Position p);
double Value(Position p);
void Print(Position p);
Position SeekBest (Position p);
int Same(Position p1, Position p2);



int main(int argc, const char * argv[]) {
    FILE *in;
    int i, j;
    
    printf("My very first hill climber!\n");
    
    if(argc!=2)
    {
        fprintf(stderr, "One arg required!\n");
        return -1;
    }
    in = fopen(argv[1], "r");
    if(in == NULL)
    {
        fprintf(stderr, "Can't open file!\n");
        return -1;
    }
    
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            fscanf(in, "%lf", &Map[j][i]);
        }
    }
    fclose(in);
    
    Position current, next;
    current.x = -1;
    current.y = -1;
    next.x = 6;
    next.y = 2;
    
    while (!Same(current, next)) {
        current = next;
        Print(current);
        next = SeekBest(current);
    }
    
    
    return 0;
}

int Same(Position p1, Position p2)
{
    if (p1.x!=p2.x || p1.y!=p2.y) {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Print(Position p)
{
    printf("(%d %d)\n", p.x, p.y);
}



int Valid(Position p)
{
    if(p.x < 0 || p.x >= SIZE || p.y < 0 || p.y >= SIZE)
    {
        return 0;
    }
    return 1;
}


double Value(Position p)
{
    return Map[p.x][p.y];
}

Position SeekBest (Position p)
{
    int ox, oy;
    Position t, best = p;
    for(ox=-1; ox<=1; ox+=1)
    {
        for (oy=-1; oy<=1; oy++) {
            t.x = p.x + ox;
            t.y = p.y + oy;
            if(Valid(t) && Value(t)>Value(best))
            {
                best = t;
            }
        }
    }
    return best;
}