// #include<stdio.h>
// int add(int i , int j)
// {
//     int k;
//     k=i+j;
//     return k;
// }
// int add(int i , int j, int k)
// {
//     int s;
//     s=i+j+k;
//     return s;
// }
// int sub(int i , int j)
// {
//     int k;
//     k=i-j;
//     return k;
// }
// int multi(int i , int j)
// {
//     int k;
//     k=i*j;
//     return k;
// }
// int div(int i , int j)
// {
//     int k;
//     k=i/j;
//     return k;
// }
// int power(int i,int j)
// {
//     int k = pow(i,j);
//     return k;
// }
// int main()
// {
//     int a,b,c,d,y,y1,y11,y12,y2,y31,y32,y33,y3;
    
//     y11= add(a,b);
//     y12= pow(c,2);
//     y1 = div(y11,y12);
    
//     y2= sub(c,d);
    
//     y31= multi(c,d);
//     y32= sub(a,b);
//     y33= sqrt(y32);
//     y3= div(y31,y33);
    
//     y = add(y1,y2,y3);
    
//     printf("%d", y);
//     return 0;
// }




// #include<stdio.h>
// #include<math.h>  // Needed for pow() and sqrt()

// int add(int i , int j)
// {
//     int k;
//     k=i+j;
//     return k;
// }
// int add3(int i , int j, int k)  // Renamed to avoid conflict
// {
//     int s;
//     s=i+j+k;
//     return s;
// }
// int sub(int i , int j)
// {
//     int k;
//     k=i-j;
//     return k;
// }
// int multi(int i , int j)
// {
//     int k;
//     k=i*j;
//     return k;
// }
// int div(int i , int j)
// {
//     int k;
//     k=i/j;
//     return k;
// }
// int power(int i,int j)
// {
//     int k = pow(i,j);
//     return k;
// }
// int main()
// {
//     int a=4,b=2,c=3,d=1;  // Initialize variables to avoid garbage values
//     int y,y1,y11,y12,y2,y31,y32,y33,y3;
    
//     y11= add(a,b);
//     y12= power(c,2);     // Use power() instead of pow()
//     y1 = div(y11,y12);
    
//     y2= sub(c,d);
    
//     y31= multi(c,d);
//     y32= sub(a,b);
//     y33= sqrt(y32);     // sqrt returns double, but assigning to int is fine for now
//     y3= div(y31,y33);
    
//     y = add3(y1,y2,y3);  // Use add3()

//     printf("%d", y);
//     return 0;
// }


