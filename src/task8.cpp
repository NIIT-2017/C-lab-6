#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char partition(char* buf, char* expr1, char* expr2) { //‘, котора€ разбивает строку, содержащуюс€ в buf на три части: строку с первым операндом, знак операции и строку со вторым операндом
    char oper = ' ';
    int inBracket = 0;

    if (*buf == '(') {
        buf++;
        inBracket = 1;
        while (*buf) {
            if (*buf == '(') {
                inBracket++;
            }
            else if (*buf == ')') {
                inBracket--;
                if (inBracket == 0) {
                    break;
                }
            }
            *expr1 = *buf;
            buf++;
            expr1++;
        }
        buf++;
    }
    else {
        while (*buf != '+' && *buf != '-' && *buf != '*' && *buf != '/') {
            *expr1 = *buf;
            buf++;
            expr1++;
        }
    }
    *expr1 = '\0';
    oper = *buf;
    if (*buf == '\0') {           //in case expression looks like "(1+2)" or smth like this
        *expr2 = '\0';
        return oper;
    }

    buf++;
    while (*buf != 0) {
        *expr2 = *buf;
        buf++;
        expr2++;
    }
    *expr2 = '\0';
    return oper;
}



int eval(char* buf) {            //‘, вычисл€юща€ строку, содержащуюс€ в buf
    char expr1[512];
    char expr2[512];
    char oper = ' ';
    int isNumber = 1;
    char* startBuf = buf;
    int result = 0;
    while (*buf) {
        if (*buf >= '0' && *buf <= '9') {
            buf++;
        }
        else {
            isNumber = 0;
            break;
        }
    }
    if (isNumber) {
        return atoi(startBuf);
    }
    else {
        char oper = partition(startBuf, expr1, expr2);
        if (*expr2 == 0) {
            result = eval(expr1);
        }
        else {
            switch (oper) {
            case '+':
                result = eval(expr1) + eval(expr2);
                break;
            case '-':
                result = eval(expr1) - eval(expr2);
                break;
            case '*':
                result = eval(expr1) * eval(expr2);
                break;
            case '/':
                result = eval(expr1) / eval(expr2);
                break;
            }
        }
    }
    return result;
}
