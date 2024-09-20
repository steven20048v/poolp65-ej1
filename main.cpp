#include <iostream>
using namespace std;
string revisarnotas(int Deberes , int Trabajos , int Pruebas , int Examenes ,int &nota) {
    nota = ( Deberes + Trabajos + Pruebas + Examenes/ 4 );
    if (nota >= 7) {
        return "Aprobado";
    } else if (nota >= 5 and nota < 7) {
        return "Suspendido";
    } else if (nota < 5) {
        return "Reprobado";
    }
    return "Nota inválida";
    }

int main (){
    int Deberes,Trabajos,Pruebas,Examenes,nota;
    //solicitamos las del estudiante
    cout<<"Nota de deberes es:"<<endl;
    cin>>Deberes;
    cout<<"Nota de trabajos es:"<<endl;
    cin>>Trabajos;
    cout<<"Nota de pruebas es:"<<endl;
    cin>>Pruebas;
    cout<<"Nota de examenes es:"<<endl;
    cin>>Examenes;
    string resultado=revisarnotas(Deberes, Trabajos,Pruebas,Examenes,nota);
    cout<<"tu resultado es:"<< resultado << endl;
    cout<<"tu promedio es "<<nota<<endl;


    return 0;
}
