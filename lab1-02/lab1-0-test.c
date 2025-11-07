#include "stdio.h"
#include "stdlib.h"

int main() {
    char* Uname;
    char *Uage;
    printf("What is your name? ");
    scanf("%s", Uname);
    printf("What is your age? ");
    scanf("%s", Uage);

    int age = atoi(Uage);
    char* Status = "";
    if (age >= 0 && age <=12 ){
        Status = "a child";
    } else if( age >= 13 && age <=19 ) {
        Status = "a teenager";
    } else if(age >= 20 && age <=30) {
        Status = "an adult";
    } else if(age >= 31 && age <=60) {
        Status = "experienced";
    } else if(age >=61 ) {
        Status = "wise";
    } else {
        Status = "a lier (that is not an age)";
    }

    printf("Hello %s, you are %s", Uname, Status);
    return 0;
}

