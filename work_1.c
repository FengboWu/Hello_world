#include <stdio.h>
int main(void)
{
float inch;
float cm;
printf("Please import the inch number.\n");
scanf("%f",&inch);
cm = 2.54 * inch;
printf("The cm number of the import inch is %f.\n",cm);
return 0;
}
