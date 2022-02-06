/**
 * @file Calculator.c
 * @author your name 
 * @brief adding two number 
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>



struct complex_number{

    int real;
    int imaginary;

};

int main() {    
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    struct complex_number cn1 = {number1, number2};

    // calculating sum

    int number21, number22;
    printf("Enter two numbers: ");
    scanf("%d %d", &number21, &number22);
    struct complex_number cn2 = {number21, number22};
    printf("sum  + i%d = %d", cn1.real + cn2.real, cn1.imaginary + cn2.imaginary);

    return 0;

}