char* my_strcpy(char *str1,const char *str2){
	while(*str2){
		*str1=*str2;
		str1++;
		str2++; 
	}
	*str1='\0';
	return str1;
}
