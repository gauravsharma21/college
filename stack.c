#include <stdio.h>
#include <stdlib.h>
#define MAX 2000
struct Stack
{
    int top;
    char arr[MAX];
};

struct Stack* createStack(){
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->top = -1;
    return stack;
}
void push(struct Stack *stack, int x)
{   
    if (stack->top == MAX - 1)
    {
        printf("Stack Overflow");
        exit(1);
    }
    stack->arr[++(stack->top)] = x;
}

int pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Stack underflow");
        exit(1);
    }
    return stack->arr[(stack->top)--];
}
int peek(struct Stack *stack){
    return (stack->arr[stack->top]);
}
int isEmpty(struct Stack* stack){
    return stack->top == -1;
}
void display(struct Stack *stack)
{
    int pos = 0;
    while (pos <= stack->top)
    {
        printf("%d ", stack->arr[pos]);
        pos++;
    }
}
int preced(char operand){
    if(operand == '+' || operand == '-')
        return 1;
    else if(operand == '*' || operand == '/')
        return 2;
    else if(operand == '$')
        return 3;
    else
        return -1;
}
int isoperand(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    return 0;
}
int infixtopostfix(char *infix){
    struct Stack *stack = createStack();
    int i,k;
    if(!stack) // See if stack was created successfully  
        return -1 ; 
    char post[MAX];
    for(i = 0, k = -1; infix[i] != '\0'; i++){
        char ch = infix[i];
        if(isoperand(ch) == 1){
            post[++k] = ch;
        }
        else if(ch == '(')
            push(stack, ch);
        else if(ch == ')'){
            while(!isEmpty(stack) && peek(stack) != '('){
                post[++k] = pop(stack);
            }
            if (!isEmpty(stack) && peek(stack) != '(') 
                return -1; // invalid expression              
            else
                pop(stack); 
        }
        else{
            while(!isEmpty(stack) && (preced(ch) <= preced(peek(stack)))){
                post[++k] = pop(stack);
            }
            push(stack, ch);
        }
    }
    while(!isEmpty(stack)){
        post[++k] = pop(stack);
    }
    post[++k] = '\0';
    printf("%s", post);

}
int main()
{   
    struct Stack *stack = createStack();
    char infix[] = "a+b*(c$d-e)$(f+g*h)-i\0";
    infixtopostfix(infix);
    return 0;
}