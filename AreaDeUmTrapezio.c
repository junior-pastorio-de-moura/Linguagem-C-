#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    float h, b, B, area;
    printf("�REA DO TRAP�ZIO\n\n");
    printf("Digite a altura: ");
    scanf("%f", &h);
    printf("Digite a base menor: ");
    scanf("%f", &b);
    printf("Digite a base maior: ");
    scanf("%f", &B);
    area = (h*(b + B))/2;
    printf("A �rea do trap�zio �: %f\n", area);

    arr = (int) (area);
    printf("�rea do trap�zio arredondado ");
    printf("para inteiro: %f", area);
    system("pause");
    return 0;
}
