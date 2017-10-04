#include<stdio.h>

char *stircpy(char *dest, const char *src);
int *stirlen(char *str);
char *stircat(char *dest, char *src);
int stircmp(char *s1, char *s2);
char *strchr( char *s, char c);
char *stirstr(const char *haystack, const char *needle);

int main() {

    printf("TESTING STIRCPY\n");
    const char *source = "copyZZZZZ";
    char copyto[] = "aaaaaaaaa";
    printf("%s copied to %s ==>", source, copyto);
    printf(" %s\n", stircpy(copyto, source));

    printf("\n\n\n\n");

    printf("TESTING STIRCMP\n");
    char str1[] = "abcdefg";
    char str2[] = "abcdefg";
    char str3[] = "baa";
    char str4[] = "zambonaye";

    printf("%s compared to %s == %d\n", str1, str2, stircmp(str1, str2));
    printf("%s compared to %s == %d\n", str1, str3, stircmp(str1, str3));
    printf("%s compared to %s == %d\n", str2, str4, stircmp(str2, str4));
    printf("%s compared to %s == %d\n", str4, str3, stircmp(str4, str3));

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
