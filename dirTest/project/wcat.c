#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fin = fopen(argv[1],"r");

    if(fin == NULL){
        perror("fopen-fin fails: ");
        exit(EXIT_FAILURE);
    }

    char buffer[64];
    char *status = NULL;
    do{
        status = fgets(buffer, sizeof(buffer),fin);
        if(status != NULL){
            printf("%s",buffer);
        }
    }while(status !=NULL);
    fclose(fin);
    exit(EXIT_SUCCESS);
}