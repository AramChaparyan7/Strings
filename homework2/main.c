#include <stdio.h>
#define size 20

char* strlcpy(char*,char*,int);
char* strcpy(char*,char*);

int main(){
	char str1[size]={};
	char str2[size]={};
	fgets(str1,size,stdin);
	int num=0;
	scanf("%d",&num);
	strlcpy(str2,str1,num);
	fputs(str2,stdout);
	printf("\n");
	getchar();
	fgets(str1,size,stdin);
	strcpy(str2,str1);
	fputs(str2,stdout);
	return 0;
}
