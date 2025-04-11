/* Complex test program with nested loops and conditionals */
int main() {
    int i = 0;
    int max = 5;
    float sum = 0.0;
    float avg = 0.0;

    int x = 0;
    float y = x *+ 3;
    
    /* Loop with nested conditional */
    while (i < max) {
        int j = 0;
        
        /* Nested loop */
        while (j < i) {
            int j = 1;
            sum = sum + j;
            j++;
        }
        
        i++;
    }
    
    /* Calculate average */
    // if (max > 0) {
    //     avg = sum / max;
    // }
    
    return 0;
} 