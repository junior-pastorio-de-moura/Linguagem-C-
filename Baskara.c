#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //B�SKARA: x== -b+- delta/2*a
    //DELTA: B^2-4.A.C
    int A, B, C, delta, x[5], y[2], base, i=0;
    while(i==0){
        printf("Digite o valor de A: ");
        scanf("%i", &A);
        if(A==0){
            printf("O valor de A n�o pode ser zero!\n");
        } else{
            i = 7;
            break;
        }
    }
    printf("Digite o valor de B: ");
    scanf("%i", &B);
    printf("Digite o valor de C: ");
    scanf("%i", &C);
    y[1] =  pow(B,2);
    y[2] = 4*A*C;
    base = A*2;

    delta = y[1] - y[2];
    if(delta<0){
        printf("A equa��o possui ra�zes imagin�rias!\n");
    } else if(delta==0){
        printf("A equa��o possui apenas uma raiz real!\n");
    } else{
        printf("DELTA: %i\n", delta);
        x[1] = ((-B) + delta)/base;
        x[2] = ((-B) - delta)/base;
        printf("X1 = %i\n", x[1]);
        printf("X2 = %i\n", x[2]);
    }

    system("pause");
    return 0;
}
