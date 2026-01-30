#include<stdio.h>

int main(){
    // 1. WAP to print Hello Students
    printf("Hello Students\n");

    // 2. WAP to print Hello in the first line and Students in the second line.
    printf("Hello\nStudents\n");

    // 3. WAP to print Ranjeet with double quotes.
    printf("\"Ranjeet\"\n");

    // 4. WAP to print \n.
    printf("\\n\n");

    // 5. WAP to print\r.
    printf("\\r\n");

    // 6. WAP to print "Teacher's Day".
    printf("\"Teacher\'s Day\"\n");

    // 7. WAP to calculate sum of two integers. Numbers are taken from user through keyboard.
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d", a, b, a+b);

    // 8. WAP to calculate square of a given number. Number are taken from the user through keyboard.

    printf("\nEnter a number: ");
    int n;
    scanf("%d", &n);
    printf("Square of %d is %d", n, n*n);

    // 9. WAP to calculate area of rectangle. Input appropriate data from the user.
    printf("\nEnter the two sides of rectangle: ");
    int len, wid;
    scanf("%d %d", &len, &wid);
    printf("Area of rectangle is %d", len*wid);

    // 10. WAP to find the area of the circle. Take radius of circle from user as input and print the result.
    int rad;
    printf("\nEnter the radius of circle: ");
    scanf("%d", &rad);
    printf("Area of circle is %f having the radius %d", 2*3.14*rad, rad);

    return 0;
}