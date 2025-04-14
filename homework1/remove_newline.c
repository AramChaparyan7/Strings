void remove_newline(char* str){
	while(*str != '\0' && *str != '\n'){
		++str;
	}
	if(*str=='\n'){
		*str='\0';
	}
}
