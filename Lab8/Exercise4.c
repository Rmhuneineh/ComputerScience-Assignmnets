//
//  main.c
//  Ex4
//
//  Created by Ragheed Ma'rouf Huneineh on 12/7/15.
//  Copyright © 2015 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LINE_SIZE 256
#define N_WORDS 5
#define S_WORDS 60
#define WORD 1
#define NOT_WORD 0

char words[N_WORDS][S_WORDS+1];

int main() {
    char line[LINE_SIZE];
    int stat[S_WORDS] = {0};
    printf("Enter Sentence\n");
    fgets(line, LINE_SIZE, stdin);
    
    line[strlen(line)-1] = '\0';
    
    int bob_position, bob_status;
    bob_position = 0;
    bob_status = NOT_WORD;
    int wordsNum, wordsPos = 0;
    wordsNum = -1;
    for(bob_position=0; line[bob_position]!='\0'; bob_position+=1)
    {
        switch(bob_status)
        {
            case WORD:
                if(isalnum(line[bob_position]))
                {
                    words[wordsNum][wordsPos] = line[bob_position];
                    wordsPos+=1;
                }
                else
                {
                    words[wordsNum][wordsPos] = '\0';
                    bob_status = NOT_WORD;
                }
                break;
            case NOT_WORD:
                if(isalnum(line[bob_position]))
                {
                    wordsNum += 1;
                    wordsPos  = 0;
                    words[wordsNum][wordsPos] = line[bob_position];
                    wordsPos+=1;
                    bob_status = WORD;
                }
                break;
        }
    }
     wordsNum+=1;
    printf("Found %d words\n", wordsNum);
    int t;
    int length = 0;
    for(t=0; t<wordsNum; t+=1)
    {
        length += strlen(words[t]);
    }
    printf("Average length  = %g", 1.0*length/wordsNum);
    printf("\n");
    for(t=0; t<wordsNum; t+=1)
    {
        long int len;
        len = strlen(words[t]);
        stat[len]+=1;
    }
    for(t=0; t<S_WORDS; t+=1)
    {
            if(stat[t] > 0)
            {
                printf("%d words contain %d characters\n", stat[t], t);
            }
    }

    
    printf("\n");
    return 0;
}
