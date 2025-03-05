const double pi = 3.14159;
double raio;

Console.WriteLine("Digite o raio do círculo");
raio = double.Parse(Console.ReadLine());

double area = raio*raio*pi;
Console.WriteLine($"A={area:F4}");