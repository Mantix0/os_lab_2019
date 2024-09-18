#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	// your code here

    int first = 0;
    int last = strlen(str) - 1;
    char temp;

    while (first < last) {
      
        // Swap characters
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        first++;
        last--;
    }
}

