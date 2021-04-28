#include <stdio.h>

int fib(int num) {
    if (num <= 1) {
        return num;
    } 
    return fib(num - 1) + fib(num - 2);
}
  
int main() {
    int *num;
    scanf("%d", num);
    printf("%d\n", fib(*num));
    return -1;
}