#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool matchesPattern(const char *str) {
    int len = strlen(str);
    
    if (len < 2) return false;

    int i = 0;

    while (str[i] == 'a') {
        i++;
    }

    if (str[i] == 'b' && str[i + 1] == 'b' && str[i + 2] == '\0') {
        return true;
    }

    return false;
}

int p1() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = 0;

    if (matchesPattern(input)) {
        printf("valid string\n");
    } else {
        printf("invalid string\n");
    }

    return 0;
}
