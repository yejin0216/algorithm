#include <stdio.h>

int main(void) {

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int ba = b/100;
    int bb = (b%100)/10;
    int bc = b-(ba*100)-(bb*10);

    printf("%d\n", bc*a);
    printf("%d\n", bb*a);
    printf("%d\n", ba*a);
    printf("%d\n", (ba*a)*100+(bb*a)*10+(bc*a));

    return 0;
}
