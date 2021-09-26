#include <stdio.h>
int s;
int main( )
{
 scanf("%d", &s);
 
 switch(s)
 {
 case 12: case 1: case 2:
 printf("winter\n"); break;
 case 3: case 4: case 5:
 printf("spring\n"); break;
 case 6: case 7: case 8:
 printf("summer\n"); break;
 default:
 printf("fall\n");
 }
}
