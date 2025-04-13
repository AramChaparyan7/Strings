int find_character(const char *str,char c){
	int i=0;
	while(*str){
		if(*str==c){
			return i;
		}
		++i;
		++str;
	}
	return -1;
}
