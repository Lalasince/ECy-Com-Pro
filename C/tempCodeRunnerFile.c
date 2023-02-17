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