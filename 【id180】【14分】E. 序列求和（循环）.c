#include <stdio.h>
#include <math.h>
//z:fenzi n:fenmu n*:next*
int main() {
    int n;
    float sum = 0.0,z=2.0,m=1.0;
    scanf_s("%d",&n);
    for (int i = 0; i < n; i++) {
        sum += z / m;
        float nz = z + m,nm=z;
        z = nz;
        m = nm;

    }

    printf("%.2f",sum);

    return 0;
}