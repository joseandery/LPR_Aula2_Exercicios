#include <iostream>
#include <iomanip>
#include <locale> //Para usar acentuação

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação

    int codigo_peca_1, codigo_peca_2, num_peca_1, num_peca_2;
    double valor_peca_1, valor_peca_2, valor_a_pagar;

    cout << "Digite o código da peça 1, a quantidade de peças e o valor unitário da peça, separados por um espaço" << endl;
    cin >> codigo_peca_1 >> num_peca_1 >> valor_peca_1;
    
    cout << "Digite o código da peça 2, a quantidade de peças e o valor unitário da peça, separados por um espaço" << endl;
    cin >> codigo_peca_2 >> num_peca_2 >> valor_peca_2;
    
    valor_a_pagar = num_peca_1*valor_peca_1 + num_peca_2*valor_peca_2;
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << valor_a_pagar << endl;   
}