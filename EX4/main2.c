#include <stdio.h>

int main() {
    double n = 0.0;
    int x = 0;
    int y=0;

    for (int i = 1; i <= 1000000; i++) {
        if (i % 2 == 1) {
            n += 4.0 / (2 * i - 1); 
             x++;
        } else {
            n -= 4.0 / (2 * i - 1); 
            x++;
        }
       if (n*100000>=314158.898 && n*100000<=314159){
          y=x;
         break;
       }
    }

  
    
    
    printf(“%d”,y);
    
    return 0;
}
