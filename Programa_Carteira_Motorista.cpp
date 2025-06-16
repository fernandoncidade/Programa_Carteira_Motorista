/*5o.Programa.09.10.2021.CarteiraMotorista*/

#include <iostream>
using namespace std;

int main (){
    int idade;
    cout << "Verifique a possibilidade para emitir a CNH\n\n";
    cout << "Digite a idade para verificar:\n\n";
    cout << "Idade: "; cin >> idade;
    cout << endl;
    if (idade >= 18)
        cout << "Eh permitido tirar a CNH!\n";
    else
        cout << "Nao eh permitido tirar a CNH!" << endl;
    return 0;
}
