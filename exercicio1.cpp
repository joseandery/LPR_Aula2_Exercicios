#include <iostream>
#include <iomanip>
#include <locale> //Para usar acentuação

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação

    const double pi = 3.14159;
    double raio;   

    cout << "Digite o raio do círculo" << endl;
    cin >> raio;
    cout << "A=" << fixed << setprecision(4) << raio*raio*pi << endl;
}