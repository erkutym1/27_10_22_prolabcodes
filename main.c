#include <stdio.h>
#include <stdlib.h>

// dersteki butun kodlar burada, gerekli kismi kullanmak için diger kisimlari /* */ arasina alabilirsin

int main()
{
// ucgen tipleri - eskenar, ikizkenar, cesitkenar

    int side1;
    int side2;
    int side3;

    printf("input side1: ");
    scanf("%d", &side1);

    printf("input side2: ");
    scanf("%d", &side2);

    printf("input side3: ");
    scanf("%d", &side3);


    if (side1>0 && side2>0 && side3>0){

        if ((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1)){

            if (side1 == side2 && side1 == side3){
                printf("equilateral");

            }
            else if (side1==side2 || side2==side3 || side1==side3){
                printf("isosceles");

            }
            else {
                printf("scalene");

            }
        }
        else {
            printf("cannot be a triangle!\nlook at the triangular rules and try again!");

        }


    }
    else {
        printf("all sides must be greater than 0!\ntry again!");

    }



// en buyuk sayi

    int num1;
    int num2;
    int num3;


    printf("input number1: ");
    scanf("%d", &num1);

    printf("input number2: ");
    scanf("%d", &num2);

    printf("input number3: ");
    scanf("%d", &num3);

    if
        (num1>num2 && num1>num3){
        printf("largest is number1");
    }
    else if (num2>num1 && num2>num3){
        printf("largest is number2");
    }
    else if (num3>num1 && num3>num2){
        printf("largest is number3");
    }
    else if (num1==num2 && num1==num3){
        printf("no largest");
    }
    else if (num1==num2 && num1>num3){
        printf("num1 and num2 are the largest");
    }
    else if (num2==num3 && num2>num1){
        printf("num2 and num3 are the largest");
    }
    else if (num1==num3 && num1>num2){
        printf("num1 and num3 are the largest");
    }



// kursa kabul

    int mat,phy,chem;

    printf("input maths: ");
    scanf("%d", &mat);

    printf("input physics: ");
    scanf("%d", &phy);

    printf("input chemistry: ");
    scanf("%d", &chem);

    if (mat<0 || phy<0 || chem<0){
        printf("check the values and try again!");

    }
    else {
        if (mat>=65 && phy>=55 && chem>=50){

            if (mat+phy+chem>=190 || mat+phy>=140){
                printf("you win\ncongratss");
            }
            else {
                printf("you fail");
            }

        }
        else if (mat>=65 && phy>=55 && chem<50){
            printf("chem is fail, you fail");

        }
        else if (mat>=65 && phy<55 && chem>=50){
            printf("physics is fail, you fail");

        }
        else if (mat<65 && phy>=55 && chem>=50){
            printf("maths is fail, you fail");

        }
        else if (mat<65 && phy<55 && chem<50){
            printf("all are fail, you fail");

        }
    }




// 1 den n'ye cift sayilar


    int i=1;
    int n;

    printf("input n: ");
    scanf("%d", &n);


    while (i<=n){

        if(i%2 == 0){
            printf("%d\n", i);

        }

    i++;
    }





    return 0;
}
