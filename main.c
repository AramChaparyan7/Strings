#include <stdio.h>
#define size 20

int remove_newline(char*);
int my_strcpy(char*,const char*);
int my_strlen(const char*);
void reverse_string(char*);
int compare_strings(const char*,const char*);
void count_vowels_and_consonats(const char*,int*,int*);
int find_character(const char*,char);
void replace_character(char*,char,char);

int main(){
	char str[size]={};
	printf("input line(not more then 20 characters)\n");
	fgets(str,size,stdin);
	remove_newline(str);
	printf("size of string is %d\n",my_strlen(str));
	char tmp[size]={};
	my_strcpy(tmp,str);
	reverse_string(tmp);
	fputs(tmp,stdout);
	printf("\ninput 2 strings\n");
	char str1[size]={};	
	char str2[size]={};
	fgets(str1,size,stdin);
	fgets(str2,size,stdin);
	printf("%d\n",compare_strings(str1,str2));
	int v=0;
	int c=0;
	printf("input line(not more then 20 characters)\n");
	char arr[size]={};
	fgets(arr,size,stdin);
	remove_newline(arr);
	count_vowels_and_consonats(arr,&v,&c);
	printf("%d %d\n",v,c);
	char arr1[size]={};
	char ch='\0';
	printf("input string and char\n");
	fgets(arr1,size,stdin);
	scanf("%c",&ch);
	printf("%d",find_character(arr1,ch));
	printf("input 2 chars and string\n");
	char line[size]={};
	char old='\0',new='\0';
	scanf(" %c  %c",&old,&new);
	fgets(line,size,stdin);
	replace_character(line,old,new);
	fputs(line,stdout);
	return 0;
}
