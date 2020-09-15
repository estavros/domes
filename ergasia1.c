#include<stdio.h>

void retrieve(float pinakas[10], float *metabliti, int deiktis);
void update(float pinakas[10], float metabliti, int deiktis);

void main(void) {
	float a,b,c;
	float A[10];
	float B[10];
	float C[10];

	for (size_t i = 0; i < 10; ++i) {
		printf("%s%d\n", "Parakalo doste to stoixeio tou pinaka A pou brisketai sti thesi ", i+1);
		scanf("%f", &A[i]);
		printf("%s%d\n", "Parakalo doste to stoixeio tou pinaka B pou brisketai sti thesi ", i+1);
		scanf("%f", &B[i]);
	}

	for (size_t i = 0; i < 10; ++i) {
		retrieve(A, &a, i);
		retrieve(B, &b, i);
		c = a + b;
		update(C, c, i);
	}

	for (size_t i = 0; i < 10; ++i) {
		printf("%f\n", C[i]);
	}
}

void retrieve(float pinakas[10], float *metabliti, int deiktis) {
	*metabliti = pinakas[deiktis];
}

void update(float pinakas[10], float metabliti, int deiktis) {
	pinakas[deiktis] = metabliti;
}
