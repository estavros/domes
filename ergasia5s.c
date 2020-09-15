
#include<stdio.h>
#include<stdlib.h>

int count = 0;
struct node {
    int data;
    struct node* next;
    
};

struct node* head;// global gia na xrhsimopoihthei sta methods

void push(int x){
struct node* temp= (struct node *)malloc(sizeof(struct node));
temp->data = x;
temp->next = head;
head = temp;


}

void display(){
    struct node* temp = head;
    printf("Elements in list are : ");
    while(temp!= NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("\n\n\tStack is empty!!!");  
    }  
    else  
    {  
        item = head->data;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("\n\n\tItem popped");  
          
    }  
}  

int main(){
    int n, ch,num, num1,count;
    char c;
    head = NULL;
    
        while (ch != 5)
    {
        printf("\n\n\t WELCOME TO MY STACK APPLICATION!!!");
        printf("\n\n\t Below you will find some usefull functions! ");
        printf("\n\n\t 1.Enter how many numbers you want to add in list");
        printf("\n\n\t 2.push");
        printf("\n\n\t 3.pop");
        printf("\n\n\t 4.display");
        printf("\n\n\t 5.exit");
        printf("\n\n\t Enter what you want to do: ");

        scanf(" %d", &ch);
        switch (ch)
        {
        case 1:
        printf("\t 1.Enter how many numbers you want to add in list : ");
        scanf("%d", &n);
        break;
        
        case 2:
        
            printf("\n\n\tPlz enter the number you want to add in list : ");
            scanf("%d", &num);
            push(num);
            count++;
            if(count > n){
            printf("Stack overflow!!!");
            pop();
            break;
            
        }
            
            printf("\n\n\tDo you want to push another item? (y/n)");
            scanf(" %c", &c);

            while (c == 'y')
            {   
                printf("Plz enter the number you want to add in list : ");
                scanf("%d",&num1);
                push(num1);
                count++;
                if(count > n){
            printf("Stack overflow!!!");
            pop();
            break;
            
                }
                printf("\tDo you want to push another item? (y/n)");
                scanf(" %c", &c);
            }
            printf("\n\n\tThank you!!");
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\n\t Wrong option...");
        }
    }
    }
    
