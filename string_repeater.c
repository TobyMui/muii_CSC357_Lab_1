#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void valueChecker(int value){ //verifies that the value is positive 
    if(value<0){
        printf("ERROR!: Value must be greater than 0 \n");
        exit(0);
    }
}

int main(void){
    int repVal; 
    char word[20]; 

    printf("Enter the value of repetition: ");
    scanf("%d", &repVal);

    valueChecker(repVal);
    


    printf("Enter word to be repeated: ");
    scanf("%s", word);
    
    for(int i = 0 ; i < repVal ; i++ ){
        printf("%s\n", word);
    }



}

