#include<stdio.h>
#include<stdlib.h>

void printStack(int deiktis, int pinakas[]);
void instructions(void);

int main(void) {


	int pinakas[100];
	int value;
	int deiktis = 0;
	instructions();
	printf("%s", "? ");
	unsigned int choice;
	scanf("%u", &choice);

	while (choice != 3) {
		switch (choice) {
			case 1: 
				if (deiktis < 100) {
					printf("%s", "Enter an integer: ");
					scanf("%d", &value);
					pinakas[deiktis] = value;
					deiktis = deiktis + 1;
					printStack(deiktis, pinakas);
				} else {
					printf("%s", "Stack overflow");
					printStack(deiktis, pinakas);
				}
				break;

			case 2:
				if (deiktis > 0) {
					printf("The popped value is %d.\n", pinakas[deiktis-1]);
					deiktis = deiktis - 1;
					printStack(deiktis, pinakas);
				} else {
					printf("%s", "Stack underflow\n");
				}
				break;

			default:
				puts("Invalide choice.\n");
				instructions();
				break;
		}

		printf("%s", "? ");
		scanf("%u", &choice);
	}

	puts("End of run.");
}

void instructions(void) {
	puts("Enter choice:\n1 to push a value on the stack\n2 to pop a value off the stack\n3 to end program");
}

void printStack(int deiktis, int pinakas[]) {
	if (deiktis == 0) {
		puts("The stack is empty.\n");
	} else {
		puts("The stack is: ");

		do {
			printf("%d -->", pinakas[deiktis-1]);
			deiktis = deiktis - 1;
			} while (deiktis > 0);

		puts("NULL\n");
	}
}

