#include<stdio.h>
#include<string.h>

char *stircpy(char *dest, const char *src);
int stirlen(char *str);
char *stircat(char *dest, char *src);
int stircmp(char *s1, char *s2);
char *stirstr(char *haystack, char *needle);
char *stirchr( char *s, char c);

int main() {

  //printf("TESTING STIRCPY\n");

    const char *source = "copyZZZZZ";
    char copyto[] = "aaaaaaaaa";
    char copytwo[] = "aaaaaaaaa";

    /**
    printf("%s copied to %s ==>", source, copyto);
    printf(" %s\n", stircpy(copyto, source));

    printf("\n\n\n\n");

    printf("TESTING STIRCMP\n");
    **/

    char str1[] = "abcdefg";
    char str2[] = "abcdefg";
    char str3[] = "baa";
    char str35[] = "baa";
    char str4[] = "zambonaye";

    /**
    printf("%s compared to %s == %d\n", str1, str2, stircmp(str1, str2));
    printf("%s compared to %s == %d\n", str1, str3, stircmp(str1, str3));
    printf("%s compared to %s == %d\n", str2, str4, stircmp(str2, str4));
    printf("%s compared to %s == %d\n", str4, str3, stircmp(str4, str3));
    **/

    printf("\n\n\nstr1: [%s]\n",  str1);
    printf("str2: [%s]\n",  str2);
    printf("str3: [%s]\n",  str3);
    printf("str4: [%s]\n\n",  str4);

    printf("Testing strcmp(str1, str2):\n[standard]: %d\n[ours]: %d\n\n", strcmp(str1, str2), stircmp(str1, str2));

    printf("Testing strcmp(str1, str3):\n[standard]: %d\n[ours]: %d\n\n", strcmp(str1, str3), stircmp(str1, str3));

    printf("Testing strcmp(str3, str1):\n[standard]: %d\n[ours]: %d\n\n", strcmp(str3, str1), stircmp(str3, str1));

    printf("Testing strcpy('aaaaaaaaa', str1):\n[standard]: %s\n[ours]: %s\n\n", strcpy(copyto, str1), stircpy(copytwo, str1));

    printf("Testing strlen(str1):\n[standard]: %d\n[ours]: %d\n\n", strlen(str1), stirlen(str1));

    printf("Testing strcat(str3, str4):\n[standard]: %s\n[ours]: %s\n\n", strcat(str3,str4), stircat(str35, str4));

    printf("Testing strchr(str1, 'e'):\n[standard]: %p\n[ours]: %p\n\n", strchr(str1, 'e'), stirchr(str1, 'e'));

    printf("Testing strchr(str1, 'h'):\n[standard]: %p\n[ours]: %p\n\n", strchr(str1, 'h'), stirchr(str1, 'h'));
    
    return 0;
}

char *stircpy(char *dest, const char *src) {
    int i;
    for(i = 0; *(src + i); i++) {
        dest[i] = *(src + i);
    }
    return dest;
}


int stircmp(char *s1, char *s2) {
    while(*s1 && *s2) {

        if (*s1 != *s2) {
            return *s1 - *s2;
        }

        s1++;
        s2++;
    }
    return 0;
}

char *stirstr(char *haystack, char *needle) {
    while(*needle) {
        int i = 0;
        while( *(needle + i) == *(haystack + i)) {
            if (*(needle + i) == 0) return needle;
        }
        needle++;
    }
    return NULL;
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
    //return NULL;
}
