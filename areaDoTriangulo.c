#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //area do tri�ngulo = b*h/2
    int area, b, h;
    printf("�rea do tri�ngulo\n\n");
    printf("Digite o valor da base: ");
    scanf("%i", &b);
    printf("Digite o valor da altura: ");
    scanf("%i", &h);

    area = (b*h)/2;
    printf("A �rea do tri�ngulo � %i\n", area);

    system("pause");
    return 0;
}
