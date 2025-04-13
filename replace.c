void replace_character(char *str,char old,char new){
	while(*str){
		if(*str==old){
			*str=new;
		}
		++str;
	}
}
