#include <iostream>
using namespace std;
int studente, esame, voto; // matricola, codice insegnamento e voto
const int studenti = 7; // numero di studenti
const int esami = 8; // numero di esami
int voti[studenti][esami]; // la matrice da riempire
// questa procedura inizializza la matrice mettendo a 0 tutti i suoi elementi
void inizializza() {
for(int i=0;i<studenti;i++)
    for(int j=0;j<esami;j++)
        voti[i][j]=0;
}

// questa procedure serve per inserire i voti all'interno della matrice
// essa chiede la matricola dello studente, il codice dell'insegnamento
// ed il voto riportato. Letti i tre interi setta a "voto" l'elemento
// della matrice di riga "studente" e colonna "insegnamento". Il
// procedimento itera fino a quando non viene inserito il numero di matricola 0
void inserisci() {

}

// questa funzione restituisce il numero degli esami superati dallo studente
// passato come argomento
int superati(int studente) {

}

// questa funzione restituisce la media dei voti riportati dallo studente
// passato come argomento
float media_studente(int studente){

}

// questa funzione restituisce il numero degli studenti che hanno superato
// l'esame il cui codice d'insegnamento e' stato passato come argomento
int esami_effettuati(int esame) {

}

// questa funzione restituisce la media dei voti impartiti dal docente
// il cui codice d'insegnamento e' stato passato come argomento
float media_esami(int esame)
{

}

// questa procedura stampa la matrice
void stampaMatrice()
{

}

int main() {
inizializza();
}
