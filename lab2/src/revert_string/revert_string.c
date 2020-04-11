#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "revert_string.h"

extern void RevertString(char *str) {
	int len = strlen(str); 
    int i;
    for(i = 0; i < len / 2; i++) {
        char temp = str [i];
        str [i] = str [len-i-1]; 
        str [len-i-1] = temp;
    }
}

