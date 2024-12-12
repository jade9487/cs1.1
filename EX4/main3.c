#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 81; i++) {
        
        int row = (i - 1) / 9 + 1;
        int col = (i - 1) % 9 + 1;

        
        printf("%d*%d=%2d ", col, row, row * col);

        
        if (i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}
