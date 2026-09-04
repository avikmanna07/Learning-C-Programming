#include <stdio.h>
int main()
{
    char name[100];
    printf("Give me your name: ");
    scanf("%s", &name);
    printf("Hello %s, welcome to C programming!\n", name);
    return 0;

}