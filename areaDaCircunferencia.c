#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //area = PI*pow(raio,2);
    float PI = 3.14159;
    float area, raio;
    printf("C�lculo da �rea de uma circunfer�ncia\n\n");
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    area = PI*pow(raio, 2);
    printf("A �rea da circunfer�ncia � %.1f\n", area);

    system("pause");
    return 0;
}
