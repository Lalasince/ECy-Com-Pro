
 //1.

 //#include <stdio.h>
 //int main()
 //{
 //    printf("Name: Bill Gates\nDOB : October 28, 1955\nJob : co-chairs the Bill & Melinda Gates Foundation");
 //    return(0);
 //}


 //2.

//  #include <stdio.h>
//  int main()
//  {
//      printf("######\n\n#\n\n#\n\n######\n\n#\n\n#\n\n#");
//      return(0);
//  }


 //3.

 //#include<stdio.h>
 //int main()
 //{
 //    float summ = 1.0+(3.0/2.0)+(5.0/4.0)+(7.0/6.0)+(9.0/8.0)+(11.0/10.0);
 //    printf("1+3/2+5/4+7/6+9/8+11/10 = %.3f",summ);
 //    return (0);
 //}


 //4.

 //#include<stdio.h>
 //int main()
 //{
 //    float pi = 3.141592;
 //    float radius = (12542.0/2.0);
 //    float circ = 2.0*pi*radius;
 //    float area = pi*radius*radius;
 //    float volume = (4.0/3.0)*pi*radius*radius*radius;
 //    float surface = 4.0*pi*radius*radius;
 //    printf("The world has 12742.00 km of diameter, %.2f km of circumference, %.2f km^2 of area\n, %.2f km^3 of volume, %.2f and km^2 of surface area.",circ,area,volume,surface);
 //    return (0);
 //}


 //5.

 #include<stdio.h>
 int main ()
 {
    int inp=20599;
    int y=(inp/365);
    int m=(inp%365)/30;
    int d=(inp%365)-(m*30);
    printf("Jack Ma has been living in this world for %d years, %d months,and %d days.",y,m,d);
    return(0);
 }


 //6.

//  #include <stdio.h>
//  int main()
//  {
//     int inp=973;
//     int hund=(inp/100);
//     int fif=(inp-(hund*100))/50;
//     int twe=(inp-(hund*100)-(fif*50))/20;
//     int ten=(inp-(hund*100)-(fif*50)-(twe*20))/10;
//     int fiv=(inp-(hund*100)-(fif*50)-(twe*20)-(ten*10))/5;
//     int one=(inp-(hund*100)-(fif*50)-(twe*20)-(ten*10)-(fiv*5));
//     printf("%d one hundred Baht banknotes, %d fifty Baht banknotes, %d twenty Baht banknotes, \n %d ten Baht coins, %d five Baht coins, and %d one Baht coins needed to be returned.",hund,fif,twe,ten,fiv,one);
//     return (0);
//  }