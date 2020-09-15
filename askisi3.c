#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// dimiourgia tou eggrafimatos gia to foititi

typedef struct {
	char *am;
	char *onoma;
	char *eponimo;
	char *patronimo;
	char *mitronimo;
	char *dieuthinsi;
	int stathero;
	int kinito;
	char *mathima;
} Mathitis;

// dimiourgia prototipon gia tis sinartiseis pou tha xrisimopoiithoun

void gemismaEggrafima(Mathitis *);
void anaparastasiEggrafima(Mathitis);
void anaparastasiSinolou(Mathitis *,int);
void instructions(void);
void sigkekrimenoiMathites(Mathitis *,int);

int main(void) {
	 
	// arxikopoiisi ton metabliton pou xreiazontai
	int megethos;
	printf("%s","Parakalo eisagete ton arithmo ton mathiton pou exei i taksi\n");
	scanf("%d",&megethos);	
	Mathitis mathitis,taksi[megethos];
	int epilogi;
	int continueLoop = 1;
	int grammenoiMathites = 0;


	// dimiourgia loop gia na epilegei o xristis ti leitourgia pou epithimei
	
	while (continueLoop == 1) {
		instructions();
		scanf("%d", &epilogi); 
		switch (epilogi) {
			case 1:
				gemismaEggrafima(&mathitis);
				taksi[grammenoiMathites] = mathitis;
				grammenoiMathites = grammenoiMathites +1;
				break;
			case 2:
				anaparastasiEggrafima(mathitis);
				break;
			case 3:
				anaparastasiSinolou(taksi,megethos);
				break;
			case 4:
				sigkekrimenoiMathites(taksi, megethos);
				break;
			case 5:
				continueLoop = 0;
				break;
			default:
				printf("%s", "Parakalo epilekste kapoia apo tis epiloges.\n");
				break;
		}
	}
}

// dimiourgia sinartisis gia na eisagei o xristis stoixeia sto eggrafima

void gemismaEggrafima(Mathitis *mathitis) {
	printf("%s", "Parakalo doste ton arithmo mitroou tou mathiti.\n");
	scanf("%ms", &(mathitis->am));
	printf("%s", "Parakalo doste to onoma tou mathiti.\n");
	scanf("%ms", &(*mathitis).onoma);
	printf("%s", "Parakalo doste to eponimo tou mathiti.\n");
	scanf("%ms", &(*mathitis).eponimo);
	printf("%s", "Parakalo doste to patronimo tou mathiti.\n");
	scanf("%ms", &(*mathitis).patronimo);
	printf("%s", "Parakalo doste to mitronimo tou mathiti.\n");
	scanf("%ms", &(*mathitis).mitronimo);
	printf("%s", "Parakalo doste ti dieuthinsi tou mathiti.\n");
	scanf("%ms", &(*mathitis).dieuthinsi);
	printf("%s", "Parakalo doste to stathero tilefono tou mathiti.\n");
	scanf("%d", &(*mathitis).stathero);
	printf("%s", "Parakalo doste to kinito tilefono tou mathiti.\n");
	scanf("%d", &(*mathitis).kinito);
	printf("%s", "Parakalo doste to mathima epilogis pou exei epileksei o mathitis.\n");
	scanf("%ms", &(*mathitis).mathima);
}

// dimiourgia enos menou gia na kserei o xristis tis epiloges pou exei

void instructions(void) {
	printf("parakalo pliktrologiste enan arithmo analoga me ti leitourgeia pou epithimeite:\n1:gia na gemisete ena eggrafima\n2:gia na probalete to teleytaio eggrafima\n3:gia na probalete ola ta eggrafimata pou exoun apothikeutei\n4:gia filtrarisma vasi enos mathimatos\n5:gia eksodo\n");
}	

// dimiourgia sinartisis pou tha probalei ton teleutaio mathiti pou ekane eisagogi

void anaparastasiEggrafima(Mathitis mathitis) {
	printf("O teleutaios mathitis pou kanate eisagogi exei ta akoloutha stoixeia:\nArithmos Mitroou: %s\nOnoma: %s\nEponimo: %s\nPatronimo: %s\nMitronimo: %s\nDieuthinsi: %s\nStathero Tilefono: %d\nKinito Tilefono: %d\nEpelegmeno Mathima: %s\n", mathitis.am, mathitis.onoma,mathitis.eponimo,mathitis.patronimo,mathitis.mitronimo,mathitis.dieuthinsi,mathitis.stathero,mathitis.kinito,mathitis.mathima);
}

// dimiourgia sinartisis pou tha probalei to sinolo ton foititon

void anaparastasiSinolou(Mathitis *taksi, int megethos) {
	for (int i = 0;i < megethos; ++i) {
		printf("O mathitis sti thesi %d exei ta akoloutha stoixeia:\nArithmos Mitroou: %s\nOnoma: %s\nEponimo: %s\nPatronimo: %s\nMitronimo: %s\nDieuthinsi: %s\nStathero Tilefono: %d\nKinito Tilefono: %d\nEpelegmeno Mathima: %s\n", i+1 , taksi[i].am, taksi[i].onoma, taksi[i].eponimo, taksi[i].patronimo, taksi[i].mitronimo, taksi[i].dieuthinsi, taksi[i].stathero, taksi[i].kinito, taksi[i].mathima);
	}
}	

// dimiourgia sinartisis pou tha probalei tous foitites me sigkekrimeno mathima

void sigkekrimenoiMathites(Mathitis *taksi, int megethos) {
	char *mathimaepilogis;
	printf("%s", "Tous foitites poiou mathimatos tha thelate na deite\n");
	scanf("%ms", &mathimaepilogis);
	for (int i = 0; i < megethos; ++i) {
		char *epilogi = taksi[i].mathima;
		if (strcmp(epilogi,mathimaepilogis) == 0) {
			printf("O mathitis sti thesi %d exei ta akolouta stoixeia:\nArithmos Mitroou: %s\nOnoma: %s\nEponimo: %s\nPatronimo: %s\nMitronimo: %s\nDIeutinsi: %s\nStathero Tilefono: %d\nKinito Tilefono: %d\n", i+1, taksi[i].am, taksi[i].onoma, taksi[i].eponimo, taksi[i].patronimo, taksi[i].mitronimo, taksi[i].dieuthinsi, taksi[i].stathero, taksi[i].kinito);
		}
	}
}
