#include <stdio.h>
#include <unistd.h>
#ifndef DUMMY_MAIN_DEFINED
#define main dummy_main
#include "dummy_main.h"
#undef main
#define DUMMY_MAIN_DEFINED
#endif

int main() {
    for (int i = 0; i < 10; i++) {
        printf("Hello World !\n");
        sleep(1);
    }
    sleep(2);
    return 0;
}