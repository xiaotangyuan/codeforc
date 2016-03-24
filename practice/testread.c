#include <stdio.h>
int main(int argc,char *args[]){
	printf("argc:%d",argc);
	printf("args:%p",args);
	printf("\n");
	int i;
	for(i=0;i<argc;i++){
		printf("%s---:",args[i]);
		FILE  *fp;
		fp=fopen(args[i],"r");
		if(fp==NULL){
			printf("--null--");
		}
		printf("%p\n",fp);
	}

	printf("\033[7m more? \033[m");
	
/*
	while(--argc){
//		fputs(args[argc],stdout);
		printf("%s",args[argc]);
		printf("\n");
	}
*/
}
