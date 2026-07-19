#include <stdio.h>
#include "file_ex.h"

void write_person(FILE *fh, char filename[], char name[], float weight, float height){
    person_t person;
    strcpy(person.name, name);
    person.weight = weight;
    person.height = height;
    int nwritten = fwrite(&person, sizeof(person), 1, fh);
    printf(nwritten ? "Written %s\n": "Error writing %s\n", filename);
}

void print_struct(person_t *s){
    printf("Name: %s, Weight: %.2f: Height: %.2f\n", s->name, s->weight, s->height);
}

void read_person(FILE *fh){
    person_t person_data;

    // rewind file pointer to beginner of file to read
    // rewind(fh);
    // fseek equivalent of rewind
    fseek(fh, 0, SEEK_SET);
    while (fread(&person_data, sizeof(person_t), 1, fh) == 1) {
        // Process or print the person_data
        print_struct(&person_data);
    }
}
