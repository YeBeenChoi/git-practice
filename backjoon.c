#include <stdio.h>
int main() {
    int num, a, b, product=1, result;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%d %d", &a, &b);
        for(int j=0; j<b; j++) {
            product = product * a;
        }
        result = product % 10;
        printf("%d", result);
    }
}