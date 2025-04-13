void count_vowels_and_consonats(const char *str,int *vowels,int *consonats){
	while(*str!='\0'){
		if(*str%2==0){
			++*consonats;
		}else{
			++*vowels;
		}
		++str;
	}
}
