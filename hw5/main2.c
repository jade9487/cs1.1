#include <stdio.h>

int main() {
    double n = 0.0;
    int terms = 1000000; 

    for (int i = 1; i <= terms; i++) {
        if (i % 2 == 1) {
            n += 4.0 / (2 * i - 1); 
        } else {
            n -= 4.0 / (2 * i - 1); 
        }
    }

  
    
    
    printf("%.5f\n", n);
    
    return 0;
}
