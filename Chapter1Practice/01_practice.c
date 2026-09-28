#include <stdio.h>
int main()
{ 
    int width, height, area;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    area = width * height;
    printf("the area of the rectangle is: %d\n", area);
    return 0;
    

}