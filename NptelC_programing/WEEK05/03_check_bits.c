#include <stdio.h>
int main() {
    printf("int = %zu bytes\n", sizeof(int));
    printf("int = %zu bits\n", sizeof(int) * 8);
    return 0;
}
