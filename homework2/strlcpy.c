char* strlcpy(char* dest,const char* src,int size){
	while(*src && size>0){
		*dest=*src;
		++dest;
		++src;
		--size;
	}
	*dest='\0';
	return dest;
}
