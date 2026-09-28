#include <stdio.h>
int main()
{
    char name[100];
    printf("Give me your name: ");
    scanf("%s", &name); /*scanf function is included int he stdio.h hgeader file and 
    it is used to read the user given input and the type of the input needs to be specified*/

    printf("Hello %s, welcome to C programming!\n", name);
    return 0;

}