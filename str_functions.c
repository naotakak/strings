#include<stdio.h>

char *stircpy(char *dest, const char *src);
int stirlen(char *str);
char *stircat(char *dest, char *src);
int stircmp(char *s1, char *s2);
char *stirchr( char *s, char c);


int main() {

    return 0;
}

//return length of string str
int stirlen( char * str ) {
    int i = 0;
    while ( * str ) {
        i ++;
        str ++;
    }
    return i;
}

//return string dest after concatenating src to dest
char * stircat( char * dest, char * src ) {
    int len_src = stirlen(src);
    int len_dest = stirlen(dest);
    int i = 0;
    for (i; i < len_src; i ++) {
      dest[len_dest + i] = src[i];
    }
    dest[len_dest + len_src] = 0;
    return dest;
}

//return true if char c is found in string s, false otherwise
char * stirchr( char * s, char c ) {
    while( * s ) {
        if ( * s == c ) {
	    return s;
	}
	s ++;
    }
    //return false;
}
