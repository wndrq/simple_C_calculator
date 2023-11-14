#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include <ctype.h>

#define ADD(x,y) ((x)+(y))
#define SUB(x,y) ((x)-(y))
#define MUL(x,y) ((x)*(y))
#define DIV(x,y) ((x)/(y))

float calculator(float num1, float num2, char OPER){
    float calc_result;
    if(OPER == '+'){
        calc_result = ADD(num1, num2);
    }
    if(OPER == '-'){
        calc_result = SUB(num1, num2);
    }
    if(OPER == '*'){
        calc_result = MUL(num1, num2);
    }
    if(OPER == '/'){
        calc_result = DIV(num1, num2);
    }
    printf("RESULT: %f %c %f = %f\n", num1, OPER, num2, calc_result);
}

int main() {
    float num1, num2;
    char OPER;
    do{
        printf("Type num1 num2 operator(+ - * / or s for stop): ");
        scanf("%f %f %c", &num1, &num2, &OPER);
            calculator(num1, num2, OPER);
    } while(OPER != 's');
    return 0;
}
