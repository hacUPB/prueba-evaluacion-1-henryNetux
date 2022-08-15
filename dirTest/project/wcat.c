#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

     for(int i=1;i<argc;i++)
        {
        FILE *fin = fopen(argv[i],"r");

        if(fin == NULL){
            //perror("fopen-fin fails: ");
            printf("wcat: cannot open file\n");
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
        }
    exit(EXIT_SUCCESS);
}