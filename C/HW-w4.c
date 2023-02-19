// 1.

// #include<stdio.h>
// int main()
// {
//     int Nos;
//     printf("Please enter a number: ");
//     scanf("%d",&Nos);

//     if(Nos>0)
//     {
//         printf("%d is positive number.",Nos);
//     }
//     else if(Nos<0)
//     {
//         printf("%d is negative number.",Nos);
//     }
//     else
//     {
//         printf("%d is zero number.",Nos);
//     }
//     return 0;
// }

/*อันล่างเป็นฟังก์ชัน if แบบสั้นนะครับ*/

// #include<stdio.h>
// int main()
// {
//     int Nos;
//     printf("Please enter a number: ");
//     scanf("%d",&Nos);

//    Nos > 0 ? printf("%d is positive number.",Nos) : Nos < 0 ? printf("%d is negative number.",Nos) : printf("%d is zero number.",Nos);

// }



















// 2.

// #include<stdio.h>
// int main()
// {
//     int Nos;
//     printf("Please enter a number: ");
//     scanf("%d",&Nos);
//     if((Nos%2)==0)
//     {
//         if(Nos>0)
//         {
//             printf("%d is positive even number.",Nos);
//         }
//         else if(Nos<0)
//         {
//             printf("%d is negative even number.",Nos);
//         }
//         else
//         {
//             printf("%d is zero number.",Nos);
//         }
//     }
//     else
//     {
//         if(Nos>0)
//         {
//             printf("%d is positive odd number.",Nos);
//         }
//         else if(Nos<0)
//         {
//             printf("%d is negative odd number.",Nos);
//         }
//         else
//         {
//             printf("%d is zero number.",Nos);
//         }
//     }
//     return 0;
// }














// 3.

// #include<stdio.h>
// int main()
// {
//     int Nos,res;
//     char oo;

//     printf("Please enter a number: ");
//     scanf("%d",&Nos);
//     printf("Operation: ");
//     scanf("%s",&oo);
//     printf("Please enter another number: ");
//     scanf("%d",&res);

//      if ( oo == '+')
//     {
//          printf("%d + %d = %d",Nos,res,Nos+res);
//     }
//     else if (oo == '-')
//     {
//         printf("%d + %d = %d",Nos,res,Nos-res);
//     }
//     else if (oo == 'x')
//     {
//         printf("%d x %d = %d",Nos,res,Nos*res);
//     }
//     else if (oo == '/')
//     {
//         printf("%d / %d = %d",Nos,res,Nos/res);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() 
// {
//     char operation;
//     double n1, n2;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two operands: ");
//     scanf("%lf %lf",&n1, &n2);

//     switch(operation)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
//             break;

//         case '*':
//             printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
//             break;

//         case '/':
//             printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
//             break;

//         // operator doesn't match any case constant +, -, *, /
//         default:
//             printf("Error! operator is not correct");
//     }
//     return 0;
// }






















// 4.

/*ข้อนี้คิดไม่ออกเลยใช้ฟังก์ชัน loop for*/

// #include<stdio.h>
// int main()
// {
//     int Nos[3][3]={};
//     int min=999999,max=-999999;
//     int i,j;
//     printf("Please input A0,0: ");
//     scanf("%d",&Nos[0][0]);
//     printf("Pleae input A0,1: ");
//     scanf("%d",&Nos[0][1]);
//     printf("Please input A0,2: ");
//     scanf("%d",&Nos[0][2]);
//     printf("Pleae input A1,0: ");
//     scanf("%d",&Nos[1][0]);
//     printf("Please input A1,1: ");
//     scanf("%d",&Nos[1][1]);
//     printf("Pleae input A1,2: ");
//     scanf("%d",&Nos[1][2]);
//     printf("Please input A2,0: ");
//     scanf("%d",&Nos[2][0]);
//     printf("Please input A2,1: ");
//     scanf("%d",&Nos[2][1]);
//     printf("Pleae input A2,2: ");
//     scanf("%d",&Nos[2][2]);

// for(i=0;i<3;i++)
// {
//     for(j=0;j<3;j++)
//     {
//         if(Nos[i][j]<min)
//         {
//             min=Nos[i][j];
//         }
//         if(Nos[i][j]>max)
//         {
//             max=Nos[i][j];
//         }
//     }
// }
//     printf("Maximum number in A is %d\n",max);
//     printf("Minimum number in A is %d",min);
// return 0;
// }




















// 5. 

// #include <stdio.h>
// int main()
// {
//     int Nos[3][3] = {};
//     printf("Please input A0,0: ");
//     scanf("%d", &Nos[0][0]);
//     printf("Pleae input A0,1: ");
//     scanf("%d", &Nos[0][1]);
//     printf("Please input A0,2: ");
//     scanf("%d", &Nos[0][2]);
//     printf("Pleae input A1,0: ");
//     scanf("%d", &Nos[1][0]);
//     printf("Please input A1,1: ");
//     scanf("%d", &Nos[1][1]);
//     printf("Pleae input A1,2: ");
//     scanf("%d", &Nos[1][2]);
//     printf("Please input A2,0: ");
//     scanf("%d", &Nos[2][0]);
//     printf("Please input A2,1: ");
//     scanf("%d", &Nos[2][1]);
//     printf("Pleae input A2,2: ");
//     scanf("%d", &Nos[2][2]);

//     if (Nos[0][0] == 1 && Nos[0][1] == 0 && Nos[0][2] == 0 && Nos[1][0] == 0 && Nos[1][1] == 1 && Nos[1][2] == 0 && Nos[2][0] == 0 && Nos[2][1] == 0 && Nos[2][2] == 1)
//     {
//         printf("Matrix A is an identity matrix.");
//     }
//     else
//     {
//         printf("Matrix A is not an identity matrix.");
//     }
//     return 0;
// }















// 6.

// #include<stdio.h>
// int main()
// {
//     int pm,pe,ps,pa,gm,ge,gs,ga;
//     float GPA;
//     printf("Please enter Mathematic score: ");
//     scanf("%d",&pm);
//     printf("Please enter English score: ");
//     scanf("%d",&pe);
//     printf("Please enter Science score: ");
//     scanf("%d",&ps);
//     printf("Please enter Art score: ");
//     scanf("%d",&pa);
//     if(pm>=81 && pm<=100)
//     {
//         gm=4;
//     }
//     else if(pm>=71 && pm<=80)
//     {
//         gm=3;
//     }
//     else if(pm>=61 && pm<=70)
//     {
//         gm=2;
//     }
//     else if(pm>=51 && pm<=60)
//     {
//         gm=1;
//     }
//     else if(pm>=0 && pm<=50)
//     {
//         gm=0;
//     }

//     if(pe>=81 && pe<=100)
//     {
//         ge=4;
//     }
//     else if(pe>=71 && pe<=80)
//     {
//         ge=3;
//     }
//     else if(pe>=61 && pe<=70)
//     {
//         ge=2;
//     }
//     else if(pe>=51 && pe<=60)
//     {
//         ge=1;
//     }
//     else if(pe>=0 && pe<=50)
//     {
//         ge=0;
//     }

//     if(ps>=81 && ps<=100)
//     {
//         gs=4;
//     }
//     else if(ps>=71 && ps<=80)
//     {
//         gs=3;
//     }
//     else if(ps>=61 && ps<=70)
//     {
//         gs=2;
//     }
//     else if(ps>=51 && ps<=60)
//     {
//         gs=1;
//     }
//     else if(ps>=0 && ps<=50)
//     {
//         gs=0;
//     }

//     if(pa>=81 && pa<=100)
//     {
//         ga=4;
//     }
//     else if(pa>=71 && pa<=80)
//     {
//         ga=3;
//     }
//     else if(pa>=61 && pa<=70)
//     {
//         ga=2;
//     }
//     else if(pa>=51 && pa<=60)
//     {
//         ga=1;
//     }
//     else if(pa>=0 && pa<=50)
//     {
//         ga=0;
//     }

//     GPA=((gm*3.0)+(ge*3.0)+(gs*3.0)+(ga*2.0))/11.0;
//     printf("GPA = %.2f",GPA);
// }

/*โค้ดอันล่างเป็นการใช้ loop for มาช่วย*/

// #include<stdio.h>
// int main()
// {
//     int p[4];
//     int g[4];
//     float GPA;
//     printf("Please enter Mathematic score: ");
//     scanf("%d",&p[0]);
//     printf("Please enter English score: ");
//     scanf("%d",&p[1]);
//     printf("Please enter Science score: ");
//     scanf("%d",&p[2]);
//     printf("Please enter Art score: ");
//     scanf("%d",&p[3]);

// for(int i=0;i<4;i++)
// {
//     if(p[i]>=81 && p[i]<=100)
//     {
//         g[i]=4;
//     }
//     else if(p[i]>=71 && p[i]<=80)
//     {
//         g[i]=3;
//     }
//     else if(p[i]>=61 && p[i]<=70)
//     {
//         g[i]=2;
//     }
//     else if(p[i]>=51 && p[i]<=60)
//     {
//         g[i]=1;
//     }
//     else if(p[i]>=0 && p[i]<=50)
//     {
//         g[i]=0;
//     }
// }
//     GPA=((g[0]*3.0)+(g[1]*3.0)+(g[2]*3.0)+(g[3]*2.0))/11.0;
//     printf("GPA = %.2f",GPA);
//     return 0;
// }


/*อันนี้ไม่เกี่ยวเอามาเป้นตัวอย่างฟังกชัน switch เฉยๆ*/

// #include<stdio.h>
// int main()
// {
//     int x =1;
//     switch(x)
//     {
//         case 0      :   printf("case 0\n");break;
//         case 1      :   printf("case 1\n");break;
//         case 'A'    :   printf("case A\n");break;
//         case 'B'    :   printf("case B\n");break;
//         case 2      :   printf("case 2\n");break;
//         default     :   printf("Default\n");break;
//     }
// }




















// 7.

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Please enter alphabet: ");
//     ch = getchar();
//     switch(ch)
//     {
//         case 'a' : printf("%c is a Vowel",ch);break;
//         case 'e' : printf("%c is a Vowel",ch);break;
//         case 'i' : printf("%c is a Vowel",ch);break;
//         case 'o' : printf("%c is a Vowel",ch);break;
//         case 'u' : printf("%c is a Vowel",ch);break;
//         case 'A' : printf("%c is a Vowel",ch);break;
//         case 'E' : printf("%c is a Vowel",ch);break;
//         case 'I' : printf("%c is a Vowel",ch);break;
//         case 'O' : printf("%c is a Vowel",ch);break;
//         case 'U' : printf("%c is a Vowel",ch);break;
//         default : printf("%c is an alphabet",ch);break;
//     }
//     return 0;
// }




















// 8.

// #include<stdio.h>
// int main()
// {
//     int Nos;
//     printf("Please enter a number.: ");
//     scanf("%d",&Nos);
//     switch (Nos>0)
//     {
//         case 0 : switch(Nos<0)
//                 {
//                     case 0: printf("%d is zero.",Nos);break;
//                     case 1: printf("%d is negative number.",Nos);break;
//                 }break;
//         case 1 : printf("%d is positive number.",Nos);break;
//     }
//     return 0;
// }









// 9.

// #include <stdio.h>
// int main()
// {
//     int Nos[2]={};
//     printf("First Number: ");
//     scanf("%d",&Nos[0]);
//     printf("Second Number: ");
//     scanf("%d",&Nos[1]);
//     switch (Nos[0]<Nos[1])
//     {
//         case 0 : printf("%d > %d",Nos[0],Nos[1]);break;
//         case 1 : printf("%d < %d",Nos[0],Nos[1]);break;
//     }
//     return 0;
// }










// 10.

//  #include"stdio.h"
//  #include"math.h"
//  int main()
//  {
//      int a,b,c;
//      float x[2]={};
//      printf("Please enter three number to to the equation: ");
//      scanf("%d %d %d",&a,&b,&c);
//      switch (a>0)
//      {
//          case 0 :  printf("x is undefined");break;
//          case 1 :  x[0]=(-b+sqrt(4*a*c))/(2*a); x[1]=(-b-sqrt(4*a*c))/(2*a); printf("x is %f,%f",x[0],x[1]); break;
//      }
//      return 0;
//  }