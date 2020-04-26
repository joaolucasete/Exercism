#include "word_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLen(const char *text)
{
    int length = 0;
    while (*text++)
        length++;
    return length;
}

void strCpy(char *des, const char *src)
{
    size_t pos = 0;
    while (*src != '\0')
        des[pos++] = *src++;
    des[pos] = '\0';
}

char **split(const char *s)
{
    int pos = 0, i = 0;
    char *aux;
    char **tokens;
    while (*s)
    {
        if ((int)*s == 32)
        {
            aux[i] = '\0';
            tokens[pos] = (char *)malloc(strLen(aux) * sizeof(char));
            strCpy(tokens[pos++], aux);
            aux = NULL;
            aux = malloc(50 * sizeof(char *));
            i = 0;
            *s++;
        }
        else
        {
            aux[i] = *s++;
            printf("%c", aux[i++]);
        }
    }
    return tokens;
}

int word_count(const char *input_text)
{
    char **splitArray;
    splitArray = split(input_text);
    printf("%s", splitArray[0]);
}

int main()
{
    char *input_text =
        "Once upon a time, a long while in the past, there lived a strange little man who could spin straw into pure gold.";
    word_count(input_text);
    return 0;
}
