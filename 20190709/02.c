#include <stdio.h>

long long sum(int *a, int n) {
    long long ans = 0;
    for ( int i=0; i<n; i++ ) {
        ans += a[i];
    }
    return ans;
}

int main(void) {
    int a[5] = {1,2,3,4,5};
    printf("%lld", sum(a, 5));

    return 0;
}
