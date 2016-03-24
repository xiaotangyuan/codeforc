/*
 * diy more
 */
#include <stdio.h>
int action_more();

int main(int argc, char *argv[]){
	FILE  *fp;
	while(--argc){
		// argv 为指针，++argv为下一个参数字符串的指针，* ++argv 取到下一个字符串值，如：test.c
		fp=fopen(* ++argv,"r");
		if(fp != NULL){
			action_more(fp);
		}
	}


}


int action_more(FILE *fp){
	//执行more显示内容	
	char line[512];
	while(fgets(line,512,fp)){
		printf("%s",line);
	}	
	
}
