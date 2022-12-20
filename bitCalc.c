#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lab2.h"

typedef enum
{
    E_INVALID = 0,
    E_PLUS,
    E_MULTIPLICATION, 
    E_XOR,
    E_INVERSION, 
    E_END
} EAction;

const char *Enum2str(EAction eAct)
{
    switch (eAct)
    {
        case E_INVALID:
            return "- Невалидная команда";
        case E_PLUS:
            return "- Побитоваое сложение (|)";
        case E_MULTIPLICATION:
            return "- Побитовое умножение (&)";
        case E_XOR:
            return "- XOR (^)";
        case E_INVERSION:
            return "- Побитовая инверсия (~)";
        case E_END:
            return "- Окончание работы";
    }
}

int main()
{
    EAction eAction = E_INVALID;
    while (eAction != E_END)
    {
        // Вывод списка команд
        printf("\nВыберите операцию:\n");
        for (EAction i = E_PLUS; i <= E_END; i++)
        {
            printf("%d %s\n", i, Enum2str(i));
        }

        //Ввод команд пользователем
        if (scanf("%u", &eAction) == 0)
        {
            char *trash;
            size_t trashlen;
            int len1 = getline(&trash, &trashlen, stdin);
        }

        switch (eAction)
        {
        case E_INVALID:
            printf("Невалидная команда");
            break;
        
        case E_PLUS:
            printf("Введите первое число: ");
            char *num = calloc();
            scanf("%s", num);

            break;
        
        case E_MULTIPLICATION:

            break;
        
        case E_XOR:

            break;

        case E_INVERSION:

            break;
        
        default:
            break;
        }
    }
    
}