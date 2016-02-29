#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    //fputs(argc);
    printf("argc:%i\n, argv:%s\n",argc,argv[1]);
    char *filename = argv[1];
    printf("filename:%s\n", filename);
    FILE *fp;
    fp=fopen(filename,"r");
    printf("opened file:%p\n",fp);
    if(fp==NULL){
        printf("fp is null\n");
    }
    char line[50];
    while(fgets(line,50,fp)){
        if(fputs(line,stdout)==EOF){
            exit(1);
        }
    }
}
