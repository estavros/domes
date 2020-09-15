#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b;
char s[80]; 
int data[10], top;
int i, ch;
char c;
ch = 0;
top = -1;
    
int push(int item){
top++;
if(top==9){
    printf("\n\n\tStack overflow!!!!!");
    exit(0);
    }
    data[top] = item;
    printf("pushed %d\n", item);
     for (i = top; i >= 0; i--)
            printf(" %d", data[i]);
    
}
int pop(void){    
int poped_element;
poped_element = data[top];
top--;
return poped_element;
}
printf("Welcome to rpn calculator!\n");
printf("Press 'q' to exit!\n");
do {
    printf(": ");
    gets(s);
    switch(*s) {
      case '+':
        a = pop();
        b = pop();
        printf("%d\n", a+b);
        push(a+b);      
        break;
      case '-':
        a = pop();
        b = pop();
        printf("%d\n", b-a);
        push(b-a);
        break;
      case '*':
        a = pop();
        b = pop();
        printf("%d\n", b*a);
        push(b*a);
        break;
      case '/':
        a = pop();
        b = pop();
        if(a==0) {
          printf("Divide by 0.\n");
          break;
        }
        printf("%d\n", b/a);
        push(b/a);
        break;
        default:
        push(atoi(s));
    }
  } while(*s != 'q');

  return 0;

}
