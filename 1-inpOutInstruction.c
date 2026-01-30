#include<stdio.h>

int main(){
    // --------OUTPUT-------
    // printf() - it is predefined function
    printf("Welcome\n"); 

    // Escape sequences:
    // \n - new line
    printf("Welcome\nStudents"); 
    
    // \t - tab space
    printf("\n");
    printf("Hello\tworld,\t\t How are you?");

    // \b - back spacde
    printf("\n");
    printf("\bwhere are\b\b you goi\b\bng?");

    // \r - carriage return
    printf("\n");
    printf("\rHow are you\r doing");

    // \f - form feed
    printf("\n");
    printf("\f\fwhere do\f you li\fve?");

    // \\ - print \
    printf("\n");
    printf("\\");

    // \" - print "
    printf("\n");
    printf("\"");

    // \'' - print '
    printf("\n");
    printf("\'");

    // format specifier
    int a = 10;
    printf("\n%d", a); // we use %d for int

    char ch = 'A';
    printf("\n%c", ch);// %c for character
    printf(" %d", ch); // it will print ASCII value of character

    float num = 2.35;
    printf("\n%f", num); // %f for float. it prints six digit after '.'(decimal)
    printf("\n%.2f", num);// it will print 2 digit after decimal
    
    int x=5, y=6;

    printf("\n%d %d", x,y);

    printf("\nx=%d and y=%d", x,y);

    printf("\nx=%d & y=%d", x,y);

    printf("\nValue of x is %d and value of y is %d", x,y);

    printf("\nSum of %d and %d is %d",x,y,x+y);
    printf("\n%d+%d=%d", x,y,x+y);

    // -----------INPUT----------
    // scanf() - It is also a predefined function.
    int n;
    printf("\nEnter a Number: ");
    scanf("%d", &n); // & indicates address of variable
    printf("Number is %d", n);

    int num1, num2;
    printf("\nEnter two number: ");
    scanf("%d %d", &num1,&num2);
    printf("Sum of %d and %d is %d", num1,num2,num1+num2);
    return 0;
}


// to compile c program in terminal we use : gcc -std=c11 -o filename(1-inpOutInstruction) filename with extension(1-inpOutInstruction.c) 

// to run ./filename(1-inpOutInstruction)
