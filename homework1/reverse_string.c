int my_strlen(const char*);

void reverse_string(char *str){
	int size=my_strlen(str);
	for(int i=0;i<size/2;i++){
		int tmp=*(str+i);
		*(str+i)=*(str+size-i-1);
		*(str+size-i-1)=tmp;
	}
}
