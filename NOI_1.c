//right_alignment output three numbers
#include <stdio.h>

int main()
{
    float num_1;
    int num_2,num_3;
    printf("Please enter three numbers!\n");
    scanf("%f %d %d", &num_1, &num_2, &num_3);
    printf("%8f,%8d,%8d",num_1,num_2,num_3);

    return 0;
}
