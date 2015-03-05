#include "helloworld.h"


int print_hello_world()
{
    int x = 3;
    printf("Hello World\n");
    return x;
}


void print_to_file()
{

    char out_string[15] = "TESTING...";

    FILE *my_file;

    my_file = fopen("test_file.txt", "w");
    
    
    for(int i=0; i<10; i++)
    {
        fprintf(my_file , "%d,  %s \n", i, out_string);

    } // end for

    fclose(my_file);
} // end print_to_file

//void read_from_file()
//{

    //FILE *my_file;

    //my_file = fopen("")
//}