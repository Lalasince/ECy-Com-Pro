
// #include <stdio.h>

// int main()
// {
   
//   for(int current_num=70; current_num<701;current_num++)
//   {
//         if(current_num%7==6)
//         {
//             printf("%d\n",current_num);
//         }
//   }
//     return 0;
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>

// int main()
// {
   
//   for(int current_num=1; current_num<91;current_num++)
//   {
//         if(90 % current_num==0)
//         {
//             printf("%d\n",current_num);
//         }
//   }
//     return 0;
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     char num[100];
//     int value,answer,i;
//     double result[1000]={};
    
//     printf("Please enter a number :");
//     fgets(num,100,stdin);
//     sscanf(num,"%d",&value);
    
//     for(i=1; i<=value; i++)
//     {
//         result[i] =pow(i,value);
//         // result[i] = value*(i*i);
        
//     }
//     for(int i=1; i<=value; i++)
//     {
//         answer+=result[i];        
//     }
//     printf("%d",answer);
    
//     return 0;
// }

/*ข้อเดียวกันนะจ๊ะ*/

// #include <stdio.h>

// int main() {
    
//     int inp;
//     int sum = 0;
    
//     printf("Enter Number: ");
//     scanf("%d", &inp);
    
//     for (int i = 1; i <= inp; i++) {
//         int power = 1;
//         for (int j = 1; j <= inp; j++) {
//             power *= i;
//         }
//         sum += power;
//     }
//     printf("The sum is %d", sum);
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int count=0;
//     char Sen[]="The quick brown fox jumps over the lazy dog";
//     int i;

//     for(i=0; i< sizeof(Sen); i++)
//     {
//         if(Sen[i]=='o')
//         {
//             count++;
//             printf("%c %d\n",Sen[i],count);
//         }
//     }
//     return 0;
// }


/*-----------------------------------------------------------------------------------------------*/

// ไอเหี้ยนี่มั้นพัง 
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char sen[]="The quick brown fox jumps over the lazy dog";
//     int count=0;
//     int i;

//     for(i=0; i< sizeof(sen); i++)
//     {
//         if(sen[i]=='t' && sen[i+1]=='h' && sen[i+2]=='e');
//         {
//         printf("%d",count);
//         }
//     }
    
// }

// #include <stdio.h>
// int main()
// {
//     int count=0;
//     char Sen[100];
//     int i;
//     scanf("%[^\n]s",&Sen);
//     for(i=0; i< sizeof(Sen); i++)
//     {
//         if(Sen[i]=='t' && Sen[i+1]=='h' && Sen[i+2]=='e')
//         {
//             count++;
//             printf("%c %c %c %d\n",Sen[i],Sen[i+1],Sen[i+2],count);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int count=0;
//     char Sen[]="The quick brown fox jumps over the lazy dog";
//     int i;
//     scanf("%s",&Sen[]);
//     for(i=0; i< sizeof(Sen); i++)
//     {
//         if(Sen[i]=='t' && Sen[i+1]=='h' && Sen[i+2]=='e')
//         {
//             count++;
//             printf("%c %c %c %d\n",Sen[i],Sen[i+1],Sen[i+2],count);
//         }
//     }
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>
// int main()
// {
//     int i,count=0;
//     char Sen[100],max[100];
//     printf("Please enter a sentence: ");
//     scanf("%[^\n]s",&Sen);
//     for(i=0; i< sizeof(Sen); i++)
//     {
//         if(Sen[i] >= max[0]){
//             max[0] = Sen[i];
//         }
//     }
//     printf("%d",max);
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>
// int main()
// {
//     int num[5] = {};
//     scanf("%d %d %d %d %d",num[0],num[1],num[2],num[3],num[4]);

// }


#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a, b, gcd=1, lcm;
// ตัวแปร a, b ใช้รับค่าจำนวนที่ต้องการหาค่า
// ตัวแปร gcd ใช้เก็บค่า หรม. , lcm ใช้เก็บค่า ครน.
// gcd กำหนดค่าเริ่มต้นเป็น 1 เพราะเป็นตัวแปรที่เกี่ยวข้องกับการ
// คูณหรือหาร

   printf("Please input first number : ");
   scanf("%d", &a);
   printf("Please input second number : ");
   scanf("%d", &b);

   int x = abs(a), y = abs(b);
// จากตัวอย่าง มีการใส่ค่าติดลบ  จึงต้องใช้ฟังก์ชัน Absolute 
// เพื่อเปลี่ยนค่าติดลบให้เป็นค่าบวก
   
   while(y != 0)
   {
       int t = y;
       y = x%y;
       x = t;
   }
   gcd = x;
   lcm = (a*b) / gcd; // สูตรการหา ครน. เมื่อได้ หรม.แล้ว

   printf("\nThe greatest common divisor is %d\n",abs(gcd));
   printf("The least common multiple is %d",abs(lcm));
    return 0;
}
