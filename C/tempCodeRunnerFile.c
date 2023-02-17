#include <stdio.h>
#include <string.h>
char line1[100];
char line2[100];
float value1;
float value2;
float result;
int main()
{
    printf("Please enter a number: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &value1);

    printf("Deivided by: ");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%f", &value2);
    
    result = (value1 / value2);
    printf("Calculation result is: %.3f",result);
}
