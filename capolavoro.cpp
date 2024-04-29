#include <iostream>
using namespace std;
float tot=0;
void media(float som){
    float med;
    med=som/18;
    cout<<"la media dell quadrimestre è: "<<med<<endl;
}
string mat[9];
void mate(){
    for(int i=0;i<9;i++){
        cout<<"inserisci materia: "<< i+1<<endl;
        cin>>mat[i];
    }
    
 }
void insomma(){
    //
    float som=0;
    float voti[9][2]; // Matrice per memorizzare i voti (10 materie x 2 voti ciascuna)

    for (int materia = 0; materia < 9; materia++) {    // Ciclo per inserire i voti
        for (int voto = 0; voto < 2; voto++) {
            cout << "Inserisci il voto " << voto + 1 << " per la materia " << mat[materia] << ": ";
            cin >> voti[materia][voto];
                while(voti[materia][voto]>10||voti[materia][voto]<0){
                    cout<<"ERRORE VOTO SUPERIORE AL 10 O MINORE DI 0 REINSERIRE"<<endl;
                    cin >> voti[materia][voto];
                }
        }
    }
    for (int materia = 0; materia < 9; materia++) {    // Ciclo per inserire i voti
        for (int voto = 0; voto < 2; voto++) {
            som+=voti[materia][voto];
        }
    }

    tot+=som;
    media(som);
}

int main() {
    float mediaTotale = 0; // Variabile per la media totale
    char a;
    cout<<"CALCOLATORE VOTI ANNO SCOLASTICO: 9 MATERIE PER DUE VOTI CIASCUNA, INSERIRE 0 PER NESSUN VOTO"<<endl;
    cout<<"PREMERE UN CARATTERE QUALSIASI PER AVVIARE IL PROGRAMMA"<<endl;
    cin>>a;
    cout<<"inserire materie scolatiche"<<endl;
    mate();
    cout<<"primo quadrimestre"<<endl;
    insomma();
    cout<<"secondo quadrimeste"<<endl;
    insomma();

    mediaTotale = tot/ 8; // Calcolo della media totale

    // Stampa della media totale
    cout << "La media totale è: " << mediaTotale << endl;

    return 0;
}
