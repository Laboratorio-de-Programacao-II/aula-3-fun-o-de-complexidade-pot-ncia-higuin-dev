#include <stdio.h>
#include <math.h>

long long pot(long long base, int exp) {
    long long resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

long long pot_eficiente(long long base, int exp) {
    int resultado;
    if(base % 2 == 0){
    resultado = pow(base, (exp/2));
    resultado = pow(resultado, 2);
    }else if(base % 2 != 0){
        resultado = pow(base, (exp-1));
        resultado = base*resultado;
    }else{
        resultado = pow(base, 0);
    }
    return resultado; 
}

int main() {
    long long base;
    int exp;
    scanf("%lld %d", &base, &exp);

    long long r1 = pot(base, exp);
    long long r2 = pot_eficiente(base, exp);

    printf("%lld\n%lld\n", r1, r2);
    return 0;
}
