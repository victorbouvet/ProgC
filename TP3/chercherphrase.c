#include <stdio.h>

int cptCharacteres(char* recherche){
	int char = 0;
	char test = 1;
	while (test !=0){
		test = recherche[char];
		++char;
	}
	return i-1;
}

int main() {
    char tableau[10][1000] = {"je suis une phrase.", 
                        "abcdef idkaiefz azdazd.",
                        "Lorem Ipsum is simply dummy text of the printing and typesetting industry.",
                        "C Programming is a computer-programming language that was developed in 1972.",
                        "Brian Kernighan est un informaticien connu pour avoir coécrit le premier livre sur le langage de programmation C.",
                        "C is strongly associated with UNIX, as it was developed to write the UNIX operating system.",
                        "C is very versatile; it can be used in both applications and technologies",
                        "Sans utilisant les fonctions de bibliothèques standards ou externes, cherchez si une phrase est dans le tableau ou pas.",
                        "Comprendre les les pointeurs et les structures.",
                        "Comprendre l'espace occupé par les différentes variables en mémoire en utilisant sizeof."
                    };
    
    char *recherche = "Comprendre les les pointeurs et les structures.";

    int trouve = 0;

    for (int i=0; i<10; i++) {
        for (int j=0; tableau[i][j] == recherche[j] && tableau[i][j] != '\0' && recherche[j] != '\0'; j++) { // comparaison de chaque mot de chaque phrase du tableau avec la phrase recherchée
			if (j == cptCharacteres(recherche)-1) { //on compare chaque caractère des deux phrases pour voir si tout correspond
				trouve = 1;
			}
        }
    }

    if (trouve == 0) {
        printf("mot pas trouvé\n");
    }
    else {
        printf("mot trouvé\n");
    }
}