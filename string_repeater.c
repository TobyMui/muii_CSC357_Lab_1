#include <stdio.h>
#include <stdlib.h>


void valueChecker(long value){ //verifies that the value is positive 
    if(value<0){
        printf("ERROR!: Value must be greater than 0 \n");
        exit(0);
    }
}

// void wordChecker(char *word){ //checks if there is a \n
// int i = 0;
//     while(word[i] != '\0' && word[i] != '\n'){
//         printf("%c", word[i]);
//         i++;
//     }
//     printf("\n");
//     // return 0; 
// }




int main(int argc, char *argv[]){

    //Converting string to int 
    char *s = argv[1];
    char *endptr; 
    long num; 
    num = strtol(s,&endptr,10);

    valueChecker(num); 

    printf( "Number of Repititions: %ld \n", num);
    printf( "Word to be printed: %s \n" , argv[2]);

    for(int i = 1; i < argc; i++){
        printf("argv[%d]  =  %s \n", i , argv[i]);
    }
    // wordChecker(argv[2]);
}


