#ifndef MAIN_H
#define MAIN_H

/* prototype functions*/
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *arr);
char *cap_string(char *ch);
char *leet(char *);
char *rot13(char *d);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
