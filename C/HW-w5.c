
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





// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     char num[100];
//     int value;
//     double result[1000]={};
//     int answer;
    
//     printf("Please enter a number :");
//     fgets(num,100,stdin);
//     sscanf(num,"%d",&value);
    
//     for(int i=1; i<=value; i++)
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





// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int count=0;
//     char str;
//     char Sen[]="The quick brown fox jumps over the lazy dog";
//     int f=sizeof(Sen);
//     int i;

//     for(i=0; i< sizeof(Sen)-1; i++)
//     {
//         if(Sen[i]=='o')
//         {
//             count++;
//             printf("%c %d\n",Sen[i],count);
//         }
//     }
//     return 0;
// }


