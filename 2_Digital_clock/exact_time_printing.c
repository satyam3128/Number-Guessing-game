#include <stdio.h>
#include <time.h>
int main(){

    time_t t;
    time(&t);
    printf("%s",ctime(&t));

}




// #include <time.h> :Time handling functions and types
// time_t t;	Declares a variable to store current time
// time(&t);	Gets current time and stores in t
// ctime(&t)	Converts time to readable format
// printf(...)	Prints the formatted time