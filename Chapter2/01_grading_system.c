#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 90)
    {
        printf("The grade obtained by the student is: A");
    } 

    else if(marks<90 && marks>=80){
        printf("The grade obtained by the student is: B");
    } 

    else if(marks<80 && marks>=70)
    {
        printf("The grade obtained by the student is: C");
    } 

    else if(marks<70 && marks>=60)
    {
        printf("The grade obtained by the student is: D");
    }

    else
    {
        printf("The grade obtained by the student is: F");
    }
    return 0;
}