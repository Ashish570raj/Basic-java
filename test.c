#include <stdio.h>
int main()
{
 int dhHr, dhMn, koHr, koMn;
 printf("Please enter dhHr:dhMn koHr:koMn :");
 scanf("%i:%i %i:%i", &dhHr, &dhMn, &koHr, &koMn);
 int dhTime = dhHr * 60 + dhMn;
 int koTime = koHr * 60 + koMn;
 int timeDif = dhTime - koTime;
 printf("Time difference: %i", timeDif);
 return 0;
}