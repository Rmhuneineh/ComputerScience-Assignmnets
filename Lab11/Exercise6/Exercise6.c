//
//  main.c
//  Exercise 6
//
//  Created by Ragheed Ma'rouf Huneineh on 1/9/16.
//  Copyright © 2016 Ragheed Ma'rouf Huneineh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define N 1024
#define L 10
#define SIZE 35


typedef struct _student
{
    char name[L+1];
    char sname[L+1];
    int ID;
    double score;
}student;

student List[N];
int counter;

void Display(void);
void LoadFile(char *fname);
void SaveToFile(char *fname);
void PrintList();
void View(int index);
int SearchID(int ID);
void Delete(int index);

int main(int argc, const char * argv[]) {
    int flag = 1, ID, index=0, save = 1;
    char info[SIZE], choice, fname[L], name[L], ret;
    
    while (flag) {
        Display();
        fgets(info, SIZE, stdin);
        printf("\n");
        switch (info[0]) {
            case 'l':
            case 'L':
                sscanf(info,"%c %s", &choice, fname);
                LoadFile(fname);
                save = 0;
                break;
            case 'e':
            case 'E':
                if (!save) {
                    printf("\nDo You Want To Save Before Exit? (Y/N): ");
                    scanf("%c%c", &choice, &ret);
                    if (choice == 'Y' || choice == 'y') {
                        printf("Enter File's Name: ");
                        scanf("%s", fname);
                        SaveToFile(fname);
                    }
                }
                flag = 0;
                printf("\nThank You!\n");
                break;
            case 's':
            case 'S':
                sscanf(info,"%c %s", &choice, fname);
                SaveToFile(fname);
                printf("\nSaved To %s\n", fname);
                save = 1;
                break;
            case 'I':
                sscanf(info, "%c %s %s %d %lf", &choice, List[counter].name, List[counter].sname, &List[counter].ID, &List[counter].score);
                counter++;
                printf("\nStudent Added Successfully!\n");
                save = 0;
                break;
            case 'p':
            case 'P':
                PrintList();
                break;
            case 'v':
            case 'V':
                if (counter) {
                    if (isdigit(info[2])) {
                        sscanf(info, "%c %d", &choice, &ID);
                        View(SearchID(ID));
                    }
                    else
                    {
                        sscanf(info, "%c %s", &choice, name);
                        int i;
                        for (i=0; i<counter; i++) {
                            if (!strcmp(name, List[i].name)) {
                                index = i;
                            }
                        }
                        View(index);
                    }
                }
                break;
            case 'd':
            case 'D':
                if (counter) {
                    if (isdigit(info[2])) {
                        sscanf(info, "%c %d", &choice, &ID);
                        Delete(SearchID(ID));
                    }
                    else
                    {
                        sscanf(info, "%c %s", &choice, name);
                        int i;
                        for (i=0; i<counter; i++) {
                            if (!strcmp(name, List[i].name)) {
                                index = i;
                            }
                        }
                        Delete(index);
                    }
                }
                save = 0;
                break;
            default:
                printf("\nIvalid Choice!\n");
                break;
        }
    }
    printf("\n");
    return 0;
}

void SaveToFile(char *fname)
{
    FILE *ragh;
    ragh = fopen(fname, "w");
    for (int i=0; i<counter; i++) {
        fprintf(ragh, "%s %s %d %g\n", List[i].name, List[i].sname, List[i].ID, List[i].score);
    }
    fclose(ragh);
}

void PrintList()
{
    int i;
    for(i=0; i<counter; i++)
    {
        printf("%s %s %d %g\n", List[i].name, List[i].sname, List[i].ID, List[i].score);
    }
}

int SearchID(int ID)
{
    int i, index=0;
    for(i=0; i<counter; i++)
    {
        if (ID == List[i].ID) {
            index = i;
        }
    }
    return index;
}

void View(int index)
{
    printf("\n%s %s %d %g\n", List[index].name, List[index].sname, List[index].ID, List[index].score);
}

void Delete(int index)
{
    int i;
    for(i=index; i<counter-1; i++)
    {
        strcpy(List[i].name, List[i+1].name);
        strcpy(List[i].sname, List[i+1].sname);
        List[i].ID = List[i+1].ID;
        List[i].score = List[i+1].ID;
    }
    counter--;
    printf("\nStudent Deleted Successfully!\n");
}

void LoadFile(char *fname)
{
    FILE *ghas;
    ghas = fopen(fname, "r");
    if (ghas == NULL) {
        fprintf(stderr, "\nCan't Open File\n");
        fclose(ghas);
    }
    else
    {
        char buffer[SIZE];
        while (fgets(buffer, SIZE, ghas)!=NULL) {
            sscanf(buffer, "%s %s %d %lf", List[counter].name, List[counter].sname, &List[counter].ID, &List[counter].score);
            counter++;
        }
        fclose(ghas);
        printf("\nLoad Successful!\n");
    }
}

void Display()
{
    printf("\nChoose:\n'I' - Entering Information.\n'D <Name>' - Deleting By Name.\n'D <ID>' - Deleting By ID.\n'V <Name>' - Viewing By Name.\n'V <ID>' - Viewing By ID.\n'P' - Show The Whole List.\n'L <Filename>' - Load File.\n'S <Filename> - Save To File.\n'E' - Exit.\nChoice: ");
}