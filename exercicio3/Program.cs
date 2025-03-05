Console.WriteLine("Digite o número do funcionário");
int num_func = int.Parse(Console.ReadLine());
Console.WriteLine("Digite o número de horas trabalhadas pelo funcionário {0}", num_func);
int horas_trabalhadas = int.Parse(Console.ReadLine());
Console.WriteLine("Digite o valor que o funcionário {0} recebe por hora trabalhada", num_func);
double valor_hora = double.Parse(Console.ReadLine());

Console.WriteLine($"NUMBER = {num_func}");
Console.WriteLine($"SALARY = U$ {(horas_trabalhadas*valor_hora):F2}");