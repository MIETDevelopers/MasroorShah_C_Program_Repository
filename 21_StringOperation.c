//Name: Masroor Hussain Shah
//Program: Read the string in pointers loaction and give it as output.			

#include <stdio.h>		//Pre-process directive to include standard input and output functions header file

int main(void) {
  char name[] = "Mr Bean";

  printf("%c \n", *name);     	// Output will be I
  printf("%c \n", *(name+3));	// Output will be A
  printf("%c \n", *(name+8));   // Output will be R

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be I
  printf("%c \n", *(namePtr+2)); // Output will be H
  printf("%c \n", *(namePtr+7)); // Output will be E
}
