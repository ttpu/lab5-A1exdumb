#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of values (must be at least 2): ");
    scanf("%d", &n);
    if (n < 2) {
        printf("The number of values must be at least 2.\n");
        return 1;
    }
    float num;
    printf("Enter a real number: ");
    scanf("%f", &num);
    float largest1 = num;
    printf("Enter another real number: ");
    scanf("%f", &num);    
    float largest2 = num;
if (largest2 > largest1) {
        float temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for (int i = 2; i < n; i++) {
        printf("Enter a real number: ");
        scanf("%f", &num);
        if (num > largest1) {
            largest2 = largest1;
            largest1 = num;     
        } else if (num > largest2) {
            largest2 = num;     
        }
    }
    printf("The two largest values are: %.2f and %.2f\n", largest1, largest2);
    return 0;
}
