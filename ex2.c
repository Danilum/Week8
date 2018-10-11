#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>
#include <string.h>

int main() {
    for (int i = 0; i < 10; i++) {
        int* ptr = malloc(10485760*sizeof(char));
        memset(ptr, 0, 10485760);
        sleep(1);
    }
    return 0;
}