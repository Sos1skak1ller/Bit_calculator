#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int BinToDec(char *num)
{
    int decNum = 0;
    int lenOfNum = strlen(num);
    for(int i = lenOfNum - 1; i > -1; i--) 
    {
        if (num[i] = '1')
        {
            decNum += pow(2, lenOfNum - ( i + 1 ));  
        }
    }
    return decNum;
}

int DecToBin(int num)
{
    int bin = 0;
    int k = 1;
    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }
    return bin;
}

int plus(char *num1, char *num2)
{
    int n1 = BinToDec(num1);
    int n2 = BinToDec(num2);
    int result = n1 + n2;
    result = DecToBin(result);
    return result;
}

int multiplication(char *num1, char *num2)
{
    int n1 = BinToDec(num1);
    int n2 = BinToDec(num2);
    int result = n1 * n2;
    result = DecToBin(result);
    return result;
}

char XOR(char *num1, char *num2)
{

    

}

char inversion(char *num)
{

}