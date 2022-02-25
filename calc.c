#include <stdio.h>

int add();
int sub();
int mul();
int div();


int main(){
    int op;
    printf("\nChoose operator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");
    scanf("%d",&op);

    switch(op){
        case 1: 
            add();
            break;
        case 2:
            sub();
            break;
        case 3: 
            mul();
            break;
        case 4: 
            div();
            break;
        default: printf("Enter valid operator\n");
    }

}

int add(){
    int firstNum,secondNum;
    printf("Enter the first number: ");
    scanf("%d",&firstNum);
    printf("Enter the second number: ");
    scanf("%d",&secondNum);
    printf("\nThe sum is %d\n",firstNum+secondNum);
}

int sub(){
    int firstNum,secondNum;
    printf("Enter the first number: ");
    scanf("%d",&firstNum);
    printf("Enter the second number: ");
    scanf("%d",&secondNum);
    printf("\nThe subtraction is %d\n",firstNum-secondNum);
}

int mul(){
    int firstNum,secondNum;
    printf("Enter the first number: ");
    scanf("%d",&firstNum);
    printf("Enter the second number: ");
    scanf("%d",&secondNum);
    printf("\nThe subtraction is %d\n",firstNum*secondNum);
}

int div(){
    int firstNum,secondNum;
    printf("Enter the first number: ");
    scanf("%d",&firstNum);
    printf("Enter the second number: ");
    scanf("%d",&secondNum);
    printf("\nThe subtraction is %d\n",firstNum/secondNum);
}