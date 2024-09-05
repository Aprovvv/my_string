#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "my_string.h"

int my_puts(const char* str)
{
    int i = 0;
    while (str[i] != '\0')
        putchar(str[i++]);
    putchar('\n');
    if (errno)
        return EOF;
    return i;//в man сказано, что в лучае успеха возвращаем неотр. число. Так почему бы не вернуть i?
}

char* my_strchr(const char* str, int c)
{
    int i = 0, read_ch = 0;
    while ((read_ch = str[i]) != c && read_ch != '\0')
        i++;
    if (read_ch == '\0')
        return NULL;
    return ((char*)str + i);
}

size_t my_strlen(const char* str)
{
    size_t i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

char* my_strcpy(char* dst, const char* src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    return dst;
}

char* my_strncpy(char* dst, const char* src, size_t n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    return dst;
}

char* my_strcat(char* dst, const char* src)
{
    int dst_i = 0, src_i = 0;
    while(dst[dst_i] != '\0')
        dst_i++;
    while(src[src_i] != '\0')
        dst[dst_i++] = src[src_i++];
    return dst;
}

char* my_strncat(char* dst, const char* src, size_t n)
{
    int dst_i = 0, src_i = 0;
    while(dst[dst_i] != '\0')
        dst_i++;
    while(src[src_i] != '\0' && src_i < n)
        dst[dst_i++] = src[src_i++];
    return dst;
}

char* my_fgets(char* s, int size, FILE* stream)
{
    int i = 0, ch = 0;
    while((ch = fgetc(stream)) != EOF && i < size -1)
    {
        s[i++] = ch;
        if (ch == '\n')
            break;
    }
    s[i] = '\0';
    if (errno || (ch == EOF && i == 0))
        return NULL;
    return s;
}

char* my_strdup(const char* s)
{
    int size = 0, i = 0;
    while (s[size] != '\0')
        size++;
    char* p = (char*)calloc(i, 1);
    while (i <= size)
    {
        p[i] = s[i];
        i++;
    }
    return p;
}
