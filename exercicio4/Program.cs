Console.WriteLine("Digite o código da peça 1, a quantidade de peças e o valor unitário da peça, separados por um espaço");
string[] valores = Console.ReadLine().Split(" ");

int codigo_peca_1 =  int.Parse(valores[0]);
int num_peca_1 =  int.Parse(valores[1]);
double valor_peca_1 = double.Parse(valores[2]); 

Console.WriteLine("Digite o código da peça 2, a quantidade de peças e o valor unitário da peça, separados por um espaço");
valores = Console.ReadLine().Split(" ");

int codigo_peca_2 =  int.Parse(valores[0]);
int num_peca_2 =  int.Parse(valores[1]);
double valor_peca_2 = double.Parse(valores[2]);

Console.WriteLine($"VALOR A PAGAR {(num_peca_1*valor_peca_1 + num_peca_2*valor_peca_2):F2}");