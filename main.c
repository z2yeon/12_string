#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int i;
	char input[100];
	FILE *fp;
	
	fp=fopen("C:\text.txt","w");
	
	for(i=0;i<3;i++)
	{
		//printf("input a word: ");
		//scanf("%s",input);
		fscanf(fp,"%s\n",input);
		printf("%s\n",input);
	}
	
	fclose(fp);
	
	return 0;
}
