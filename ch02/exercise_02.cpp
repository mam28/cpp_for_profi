// Пример калькулятора

#include <cstdio>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Calculator(Operation oper) {
        operation = oper;
    }

    int calc(int a, int b) {
        switch (operation) {
        case Operation::Add: {
            return (a + b);
          } break;
        
        case Operation::Subtract: {
            return (a - b);
          } break;
        
        case Operation::Multiply: {
            return (a * b);
          } break;
        case Operation::Divide: {
            return (a / b);
          } break;
        default:
            printf("Error: unknown operation\n");
        }

        return 0;
    }

private:
    Operation operation;
};

int main()
{
    int op1{8}, op2{3};

    Calculator calc_add{Operation::Add};
    Calculator calc_sub{Operation::Subtract};
    Calculator calc_mult{Operation::Multiply};
    Calculator calc_div{Operation::Divide};

    printf("%d + %d = %d\n", op1, op2, calc_add.calc(op1, op2));
    printf("%d - %d = %d\n", op1, op2, calc_sub.calc(op1, op2));
    printf("%d * %d = %d\n", op1, op2, calc_mult.calc(op1, op2));
    printf("%d / %d = %d\n", op1, op2, calc_div.calc(op1, op2));

    return 0;
}