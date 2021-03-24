//BTVN tuan 6:
 
void reverse(char *s) {
	int count=0;
	char *s1=new char[strlen(s)];
    while((s+count)<(s+strlen(s))){
        *(s1+strlen(s)-1-count)=*(s+count);
        count++;
    }
    count=0;
    while((s+count)<(s+strlen(s))){
        *(s+count)=*(s1+count);
        count++;
    }
}

