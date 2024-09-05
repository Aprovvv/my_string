#ifndef MY_STRING_H
#define MY_STRING_H
int my_puts(const char* str);
char* my_strchr(const char* str, int c);
size_t my_strlen(const char* str);
char* my_strcpy(char* dst, const char* src);
char* my_strncpy(char* dst, const char* src, size_t n);
char* my_strcat(char* dst, const char* src);
char* my_strncat(char* dst, const char* src, size_t n);
char* my_fgets(char* s, int size, FILE* stream);
char* my_strdup(const char* s);
#endif
