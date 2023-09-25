#include <stdio.h>

void printstringreverse(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[80];  

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

	printf("Reverse of the string is: ");
    printstringreverse(str);

    return 0;
}
