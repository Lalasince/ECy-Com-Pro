// 1.
// #include <stdio.h>
// #include <string.h>
// char line1[100];
// char line2[100];
// float value1;
// float value2;
// float result;
// int main()
// {
//     printf("Please enter a number: ");
//     fgets(line1, sizeof(line1), stdin);
//     sscanf(line1, "%f", &value1);

//     printf("Deivided by: ");
//     fgets(line2, sizeof(line2), stdin);
//     sscanf(line2, "%f", &value2);
    
//     result = (value1 / value2);
//     printf("Calculation result is: %.3f",result);
// }



// 3.
// #include<stdio.h>
// int main()
// {
//     char str[10];
//     int numb[10];
//     printf("Please enter number 1: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[1]);
//     printf("Please enter number 2: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[2]);
//     printf("Please enter number 3: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[3]);
//     printf("Please enter number 4: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[4]);
//     printf("Please enter number 5: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[5]);
//     printf("Please enter number 6: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[6]);
//     printf("Please enter number 7: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[7]);
//     printf("Please enter number 8: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[8]);
//     printf("Please enter number 9: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[9]);
//     printf("Please enter number 10: ");
//     fgets(str, 10, stdin);
//     sscanf(str, "%d", &numb[10]);
//     printf("The number are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",numb[1],numb[2],numb[3],numb[4],numb[5],numb[6],numb[7],numb[8],numb[9],numb[10]);
// }


// 4.
#include<stdio.h>
int main()
{
    char name[3][2][50];
    char str[40];

    printf("First Student Name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%s",&name[0][0]);

    printf("Family name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%s",&name[0][1]);

    printf("Second Student Name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%s",&name[1][0]);

    printf("Family name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%[^\n]s",&name[1][1]);

    printf("Third Student Name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%s",&name[2][0]);

    printf("Family name: ");
    fgets(str, 40, stdin);
    sscanf(str, "%[^\n]s",&name[2][1]);

    printf("our classroom has three students \n1. %s %s\n2. %s %s\n3. %s %s\n",name[0][0],name[0][1],name[1][0],name[1][1],name[2][0],name[2][1]);
}



// 5.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int array[3][3];
//     char num1[100];
//     int value[10];
//     int det;
    
//     printf("A1,1 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[0][0]);
    
    
//     printf("A1,2 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[0][1]);

//     printf("A1,3 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[0][2]);

//     printf("A2,1 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[1][0]);

//     printf("A2,2 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[1][1]);

//     printf("A2,3 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[1][2]);

//     printf("A3,1 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[2][0]);

//     printf("A3,2 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[2][1]);

//     printf("A3,3 is ");
//     fgets(num1,sizeof(num1),stdin);
//     sscanf(num1,"%d",&array[2][2]);
    
    
//     printf("The matrix A is\n%d\t %d\t %d\n%d\t %d\t %d\n%d\t %d\t %d\n",array[0][0],array[0][1],array[0][2],array[1][0],array[1][1],array[1][2],array[2][0],array[2][1],array[2][2]);
//     det = (array[0][0] * array[1][1] * array[2][2]) + (array[0][1] * array[1][2] * array[2][0]) + (array[0][2] * array[1][0] * array[2][1]) - ((array[2][0] * array[1][1] * array[0][2]) + (array[2][1] * array[1][2] * array[0][0]) + (array[2][2] * array[1][0] * array[0][1]));
//     printf("The determinant of matrix is %d",det);
//     return 0;
// }