#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello, world!";

    strrev(str);

    printf("str: %s\n", str);

    return 0;
}
