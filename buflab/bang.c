#include <stdio.h>

int global_value = 0;

int call() {
    return 0x33dd8e22;
}

int main() {
    int a= call();
    return 0;
}
