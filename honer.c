/*Program name: h_ex.c*/
/*Horner's Rule*/

#include <stdio.h>

main()
{
    int n,i,x,k;
    int a[100];

    printf("\n");
    printf(":::多項式の計算(Honer's Rule)");
    printf("\n");

    printf("最大次数を入力してください: ");
    scanf("%d", &x);
    printf("\n");

    printf("各項の係数を入力してください\n");
    for(i =n; i >=0; i--){
        printf(" 次数が%2dの項の係数: ", i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf(" xの値を入力してください: ");
    scanf("%d",&x);
    printf("\n");

    printf("---------------------------\n");
    printf("入力した多項式(但し、a^bはaのb乗を表す)\n");
    printf("\n");
    for(i= n; i >= 1; i--)
        printf("%d * %d^%d +",a[i],x,i);
    printf("%d * %d^%d \n",a[i],x,i);
    k = a[n];
    for(i=n-1; i>=0; i--)
        k = k*x+a[i];

    printf("\n");
    printf("答え: %d\n", k);
    printf("\n");
}

