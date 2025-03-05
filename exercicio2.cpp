#include <iostream>
#include <iomanip>
#include <locale> //Para usar acentuação

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação

    int A,B,C,D;   

    cout << "Digite o valor de A" << endl;
    cin >> A;
    cout << "Digite o valor de B" << endl;
    cin >> B;
    cout << "Digite o valor de C" << endl;
    cin >> C;
    cout << "Digite o valor de D" << endl;
    cin >> D;

    cout << "DIFERENÇA = " << (A*B) - (C*D) << endl;
}