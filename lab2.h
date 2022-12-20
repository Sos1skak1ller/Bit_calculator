#ifndef LAB2_H
#define LAB2_H

//Проверяет что введено двоичное число.
void BinNumCheck(char *num);

//Переводит двоисное число в десятичное.
int BinToDec(char *num);

//Переводит десятичное число в двоичное.
int DecToBin(int num);

//Побитоваое сложение (|)
int plus(char *num1, char *num2);

//Побитовое умножение (&)
int multiplication(char *num1, char *num2);

//XOR (^)
char XOR(char *num1, char *num2);

//Побитовая инверсия (~)
char inversion(char *num);

#endif