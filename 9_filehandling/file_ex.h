#pragma once

#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)

typedef struct 
{
    char name[20];
    float weight;
    float height;
} person_t;

#pragma pack(pop)

// function prototypes
void write_person(FILE *fh, char filename[], char name[], float weight, float height);
void print_struct(person_t *s);
void read_person(FILE *fh);



