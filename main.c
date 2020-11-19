#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	FILE*fp;
	char str[100];
	char filename[100];
	char search[100];
	int i;
	
	printf("original file name :");
	scanf("%s", filename);
	printf("word to find :");
	scanf("%s", search);
	
	printf("find a word %s \n",search);
	
	fp=fopen(filename,"r");

	if(fp == NULL)
		printf("파일을 못 열음\n");

	while (fgets(str,100,fp) != NULL){
		//strncmp
		if(strncmp(str, search, strlen(search)) == 0){
			printf("Search done!");
			fclose(fp);
			return 0;
			}
	}
	
	printf("Search failed!\n");
	fclose(fp);
	return 0;
}
