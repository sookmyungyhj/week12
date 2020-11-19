#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	FILE*fp = NULL;
//	char c;
	char str[100];
	
	fp=fopen("sample.txt","r");

	if(fp == NULL)
		printf("파일을 못열음\n");

//	while((c=fgetc(fp)) != EOF){
	while (fgets(str,100,fp) != NULL){
		printf("%s",str);
//		printf("%c",c);
//		putchar(c);
	}
	
	fclose(fp);
}
