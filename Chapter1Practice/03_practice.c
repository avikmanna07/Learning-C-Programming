#include <stdio.h>
int main (){
    int n;
    float c, f;
    
    printf("1.Celsius to Fahrenhite conversion\n");
    printf("2.Fahrenhite to Celcius conversion\n");
    printf("Choose the conversion you want to do: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Enter the value of Celcius: ");
        scanf("%f", &c);
        printf("The value of the fahrenhite is: %.2f\n",(c*(9.0/5.0))+32);
    }
    if(n==2)
    {
        printf("Enter the value of Fahrenhite: ");
        scanf("%f", &f);
        printf("Tha value in Celcius is: %.2f\n",(f-32)*5.0/9.0);
    }
    if(!(n == 1 || n == 2))
    {
        printf("Choose a valid option.");
    }
    return 0;
}
