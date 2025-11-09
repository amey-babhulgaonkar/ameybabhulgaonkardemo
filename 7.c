#include <stdio.h>
int main() {
    int n ;
     printf("Enter The Number Of Rows You Want In The Pattern\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
       
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
       
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
