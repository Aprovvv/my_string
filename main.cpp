#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_string.h"

int main()
{
    const char* s = "abvgde";
    const char* ss = "zhzijkl";
    char copy_s[30] = "";
    printf("strlen(s) = %lu\n", my_strlen(s));
    my_puts(s);
    my_strncpy(copy_s, s, 4);
    printf("copy_s = %s\n", copy_s);
    my_strcpy(copy_s, s);
    printf("copy_s = %s\n", copy_s);
    printf("*my_strchr(s, 'd') = %c\n", *my_strchr(s, 'd'));
    printf("*my_strncat(copy_s, ss, 3) = %s\n", my_strncat(copy_s, ss, 3));
    printf("*my_strcat(copy_s, ss) = %s\n", my_strcat(copy_s, ss));
    my_fgets(copy_s, 4, stdin);
    printf("\nВы ввели: %s", copy_s);
    char* p = NULL;
    printf(" my_strdup(s) = %s ", p = my_strdup(s));
    free(p);
}
