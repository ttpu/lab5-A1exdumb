#include <stdio.h>
#include <stdbool.h>
int main() {
    int n = 0;
    printf("Enter a positive integer for the count of numbers: ");
    scanf("%d", &n);
    int prev = 0;
    printf("Enter an integer: ");
    scanf("%d", &prev);
    bool is_ascending = true;
    bool is_descending = true;
    for (int i = 1; i < n; i++) {
        int cur = 0;
        printf("Enter an integer: ");
        scanf("%d", &cur);
        if (cur > prev) {
            is_descending = false;
        } else if (cur < prev) {
            is_ascending = false;
        }
        prev = cur;
    }
     if (is_ascending) {
        printf("ascending sequence\n");
    } else if (is_descending) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }
    return 0;
}
