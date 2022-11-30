#include <stdio.h>
int main()
{
 float height, feet;
 printf("Enter height in inch:");
 scanf("%f", &height);
 feet = height / 12;
 printf("%f", feet);
 return 0;
}