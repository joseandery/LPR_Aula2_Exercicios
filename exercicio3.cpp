#include <iostream>
#include <iomanip>
#include <locale> //Para usar acentuação

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação

    int num_func,horas_trabalhadas;
    double valor_hora;

    cout << "Digite o número do funcionário" << endl;
    cin >> num_func;
    cout << "Digite o número de horas trabalhadas pelo funcionário " << num_func << endl;
    cin >> horas_trabalhadas;
    cout << "Digite o valor que o funcionário " << num_func << " recebe por hora trabalhada" << endl;
    cin >> valor_hora;
    
    cout << "NUMBER = " << num_func << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << horas_trabalhadas*valor_hora << endl;    
}