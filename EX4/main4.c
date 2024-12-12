#include <stdio.h>

int main()
{
    int a = 12345  ;
    
    int x = a ;
    
    int c = a /1000 ;  //不知道有沒有說能用字串我就只好暴力解
    
    int e = c % 10 ;
    
    int g = a % 10 ;
    
    x= x - e*1000 + g*1000 - g + e;
    
    printf("%2d",x);

    return 0;
}
