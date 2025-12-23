#include <stdio.h>
#include <string.h>
#include "cap4.h"

int strindex(char s[], char t)
{
    int lastP = -1;
    for(int i = 0; i < strlen(s); i++)
        if(s[i] == t)
            lastP = i;
    return ++lastP;
}