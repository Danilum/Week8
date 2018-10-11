#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <time.h>
#include <sys/resource.h>

int main() {
    for(int i = 0; i < 10; i++){
        void* ptr = malloc(10485760*sizeof(char));
        ptr = memset(ptr, 0, 10485760);
        struct rusage usage;
        getrusage(RUSAGE_SELF, &usage);
        printf("%lu \n", usage.ru_maxrss);
        sleep(1);
    }
}