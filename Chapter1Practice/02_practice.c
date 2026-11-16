#include <stdio.h>
int main(){
    int r, h;
    float v;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("Enter teh height of teh cylinder: ");
    scanf("%d", &h);
    v = 3.14*r*r*h;
    printf("The volumeof teh cylinder is: %.2f\n",v);
    return 0;
}
