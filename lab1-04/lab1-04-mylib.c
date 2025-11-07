#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void printTodaysDate(){
    time_t now = time(NULL);
    printf("%s", ctime(&now));
}

void printHiNameAge(char* name, int age){
    printf("Hi %s, you are %d", name, age);
}
