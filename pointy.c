//Ahnaf Hasan
//Systems pd09
//Homework#2 -- Pointers
//2018-09-14

#include <stdio.h>

unsigned int large_int = 21000000000; //21 billion
char * big_num_pointer = &large_int;

int main() {
    printf("This is the large int in hex: %x\n", large_int);
    printf("size of the pointer: %i\n", sizeof(big_num_pointer));
    int i = 0;
    for (; i < 4; i++) {
        printf("Byte number %i is: %hhx\n", i + 1, large_int);
    }
    i = 0;
    for (; i < 4; i++) {
        //Permission denied or resource busy T-T
        big_num_pointer[i]++;
        printf("Now byte number %i is: %hhx; in dec: %d\n", i + 1, large_int, large_int);
    }
    i = 0;
    printf("Woah! We changing again! (O u O)");
    for (; i < 4; i++) {
        big_num_pointer[i] += 16;
        printf("Now byte number %i is: %hhx; in dec: %d\n", i + 1, large_int, large_int);
    }
}