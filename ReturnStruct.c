/*
Name: Masroor Hussain Shah
Program purpose: To demonstrate function implementation which returns a structure
*/

#include <stdio.h>  //Pre-processor directive to include standard input and output functions header file
struct student
{
    char name[50];
    int age;
};
//Function prototype
struct student getInfo();
int main(){  //Main function
    struct student s;
    s = getInfo();
    //Printf function calling
    printf("\nName: %s", s.name);   //For printing name
    printf("\nAge: %d", s.age);  //For printing age
    return 0;   //Return function
    }
struct student getInfo(){
    struct student s1;

    printf("Enter name: ");
    scanf ("%[^\n]%*c", s1.name);  //For reading name

    printf("\nEnter age: ");
    scanf("%d", &s1.age);  //For reading age

    return s1;  //Return function
}