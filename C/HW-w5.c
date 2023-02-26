
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
// #include <string.h>

// int main() {
//     char sentence[100];
//     char longest_word[100] = "", current_word[100] = "";
//     int i, max_length = 0, curr_length = 0;
//     printf("Please enter a sentence: ");
//     scanf("%[^\n]s", sentence);

//     for (i = 0; sentence[i] != '\0'; i++) {
//         if ((sentence[i] >= 'a' && sentence[i] <= 'z') ||
//             (sentence[i] >= 'A' && sentence[i] <= 'Z') ) {
//             current_word[curr_length] = sentence[i];
//             curr_length++;
//         } else {
//             if (curr_length > max_length) {
//                 max_length = curr_length;
//                 current_word[curr_length] = '\0';
//                 strcpy(longest_word, current_word);
//             }
//             curr_length = 0;
//             memset(current_word, 0, sizeof(current_word));
//         }
//     }

//     printf("The longest word is: %s  [ %d character(s)]\n", longest_word,max_length);
// }

// #include <stdio.h>

// int main() {
//     char sentence[100];
//     int i, max_length = 0, curr_length = 0;
//     printf("Enter a sentence: ");
//     scanf("%[^\n]s", &sentence);

//     for (i = 0; sentence[i] != '\0'; i++) {
//         if ((sentence[i] >= 'a' && sentence[i] <= 'z') ||
//             (sentence[i] >= 'A' && sentence[i] <= 'Z')) {
//             curr_length++;
//         } else {
//             if (curr_length > max_length) {
//                 max_length = curr_length;
//             }
//             curr_length = 0;
//         }
//     }
//     printf(" %d \n",max_length);
// }


/*-----------------------------------------------------------------------------------------------*/


// #include <stdio.h>
// int gcd(int a, int b) {
//     int temp;
//     while (b != 0) {
//         temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }

// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// int main()
// {
//     int n[5],results_gcd,results_lcm;
//     printf("Enter integers: ");
//     scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
    
//     results_gcd = n[0];
//     results_lcm = n[0];
  
//     for (int i = 1; i < 5; i++) {
//         results_gcd = gcd(results_gcd, n[i]);
//         results_lcm = lcm(results_lcm, n[i]);
//     }
  
//       printf("GCD = %d\n",results_gcd);
//       printf("LCM = %d\n",results_lcm);
  
//     return 0;
// }



