#include <stdio.h>
int main()
{
    char arr[4];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = '\0';
    
    // print the adress jab tak \0 na ho 
    printf("%s\n", arr);
    return 0;
}
