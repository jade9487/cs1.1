#include <stdio.h>

int main()
{
    int a = 12345 , b = 321 ;
    
    int x = a , y = b;
    
    int c = a /1000 , d = b /1000;  //不知道有沒有說能用字串我就只好暴力解
    
    int e = c % 10 , f = d % 10;
    
    int g = a % 10 , h = b % 10;
    
    x= x - e*1000 + g*1000 - g + e;
    
    y= y - f*1000 + h*1000 - h + f;
    
    printf("%2d\t%d",x,y);

    return 0;
}
