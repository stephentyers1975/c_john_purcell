// Create a function that accepts some data for a person
// and writes that data to a binary file.

// Create another function that reads the file and displays the information

// Using these functions, write and read two people

// The information accepted should be: name, weight, height

// Note: a file can be opened for reading and writing in mode by specifying wb+

#include <stdio.h>
#include "file_ex.h"

int main() {
    char filename[] = "file_ex.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "wb+");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    write_person(fh, filename, "Stephen", 180.2, 71 );
    write_person(fh, filename, "John", 170.2, 82);
    write_person(fh, filename, "Maggie", 120.4, 60.9);

    read_person(fh);    

    fclose(fh);
    


    return 0;
}
