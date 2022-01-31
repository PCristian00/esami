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
    int mat;
    int voto;
    int cod;
    do {

        do{
            cout << "Inserire matricola studente: (0 per fermare) MAX [1-6]" << endl;
            cin >> mat;
        }while(mat<0||mat>6);
            if(mat==0) break;

        do {
            cout << "Inserire codice insegnamento: [0-7]" << endl;
            cin >> cod;
        }while(cod<0||cod>7);

        do {
            cout << "Inserire voto: [0-30]" << endl;
            cin >> voto;
        }while(voto<0||voto>30);



        voti[mat][cod]=voto;

    } while (mat!=0);
}

// questa funzione restituisce il numero degli esami superati dallo studente
// passato come argomento
int superati(int studente) {
    int sup=0;
    for(int i=0;i<esami;i++)
     if(voti[studente][i]>16)  sup++;
return sup;
}

// questa funzione restituisce la media dei voti riportati dallo studente
// passato come argomento
float media_studente(int studente){
float med=0;
int c=0;
    for(int i=0;i<esami;i++)
        if(voti[studente][i]!=0){
            med+=voti[studente][i];
            c++;
        }
    return med/c;
}

// questa funzione restituisce il numero degli studenti che hanno superato
// l'esame il cui codice d'insegnamento e' stato passato come argomento
int esami_effettuati(int esame) {
    int sup=0;
    for(int i=0;i<studenti;i++)
        if(voti[i][esame]>16)  sup++;
    return sup;
}

// questa funzione restituisce la media dei voti impartiti dal docente
// il cui codice d'insegnamento e' stato passato come argomento
float media_esami(int esame)
{
    float med=0;
    int c=0;
    for(int i=0;i<studenti;i++)
        if(voti[i][esame]!=0){
            med+=voti[i][esame];
            c++;
        }
    if(c!=0)
    return med/c;
    else return 0;
}

// questa procedura stampa la matrice
void stampaMatrice()
{

    cout<<"insegnamenti";
    for(int i=0;i<esami;i++)
        cout<<" ["<<i<<"]\t";
    cout<<endl;

for(int i=0;i<studenti;i++){
    cout<<"matricola ["<<i<<"]\t";
    for(int j=0;j<esami;j++)
        cout<<voti[i][j]<<"\t";
    cout<<endl;
}

}

int main() {

bool run=true;
char scelta;
int stud;
int esame;
float m;

    inizializza();

do {
    cout << "INSERISCI ESAME: a" << endl;
    cout << "ESAMI SUPERATI DALLO STUDENTE: b" << endl;
    cout << "MEDIA PER STUDENTE: c" << endl;
    cout << "ESAMI VERBALIZZATI PER INSEGNAMENTO: d" << endl;
    cout << "MEDIA PER INSEGNAMENTO: e" << endl;
    cout << "STAMPA IL VETTORE: s" << endl;
    cout << "ESCI: x"<<endl;
    cin>>scelta;
    switch (scelta) {

    case 'a':case 'A':
        inserisci();
            break;

            case 'b':case 'B':
                cout<<"Inserire matricola:"<<endl;
            cin>>stud;
            cout<<"Lo studente ha superato "<<superati(stud)<<" esami."<<endl;
            break;

            case 'c':case 'C':
                cout<<"Inserire matricola:"<<endl;
                cin>>stud;
                cout<<"Lo studente ";
                m=media_studente(stud);
                if(m!=0)
                    cout<<"ha una media di "<<m<<"."<<endl;
                else cout<<"non ha esami."<<endl;
                break;

        case 'd':case 'D':
            cout<<"Inserire codice insegnamento:"<<endl;
            cin>>esame;
            cout<<"L'esame e' stato superato da "<<esami_effettuati(esame)<<" studenti."<<endl;
            break;

            case 'e':case 'E':
                cout<<"Inserire codice insegnamento:"<<endl;
            cin>>esame;
            m=media_esami(esame);
            if(m!=0)
                cout<<"La media di superamento dell'esame e' "<<m<<"."<<endl;
            else cout<<"Nessuno ha superato l'esame."<<endl;
            break;

        case 's': case 'S':
            stampaMatrice();
            break;

            case 'x':case 'X':
                    cout<<"Uscita dal programma."<<endl;
                    run=false;
                    break;

        default:
            cout<<"Scelta incompatibile."<<endl;
            break;
    }
}while(run);

}
