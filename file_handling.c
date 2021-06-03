#include<stdio.h>
#include<conio.h>

void main() {
    FILE* fptr = fopen("test_file.txt", "r");

    char c;
    int i;
    float f;
    char s[50];
    fscanf(fptr, "%c %d %f %s", &c, &i, &f, s);

    printf("Read character from file: %c\n", c);
    printf("Read integer from file: %d\n", i);
    printf("Read float from file: %f\n", f);
    printf("Read string from file: %s\n", s);
}