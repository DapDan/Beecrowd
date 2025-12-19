#include <stdio.h>
#include <stdlib.h>

void multiplica(long long A[2][2], long long B[2][2], long long mod) {
    long long x = (A[0][0]*B[0][0] + A[0][1]*B[1][0]) % mod;
    long long y = (A[0][0]*B[0][1] + A[0][1]*B[1][1]) % mod;
    long long z = (A[1][0]*B[0][0] + A[1][1]*B[1][0]) % mod;
    long long w = (A[1][0]*B[0][1] + A[1][1]*B[1][1]) % mod;

    A[0][0] = x;
    A[0][1] = y;
    A[1][0] = z;
    A[1][1] = w;
}

void matriz_exponencial(long long M[2][2], long long n, long long mod) {
    if(n == 0 || n == 1)
        return;

    long long F[2][2] = {{1, 1},{1, 0}};
    matriz_exponencial(M, n/2, mod);
    multiplica(M, M, mod);

    if(n % 2 != 0)
        multiplica(M, F, mod);
}

long long fib_n_mais_1_mod(long long n, long long mod) {
    if (n == 0)
        return 1;

    long long M[2][2] = {{1,1},{1,0}};
    matriz_exponencial(M, n, mod);
    return M[0][0];
}

int main() {
    long long int n, b, calls;
    int caseNum;

    caseNum = 1;
    while(scanf("%lld %lld", &n, &b)) {
        if(n == 0 && b == 0)
            break;

        calls = (2 * fib_n_mais_1_mod(n, b) - 1) % b;

        if (calls < 0)
            calls += b;

        printf("Case %d: %lld %lld %lld\n", caseNum++, n, b, calls);
    }

    return 0;
}
