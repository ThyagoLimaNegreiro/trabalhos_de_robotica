// Example program
#include <iostream>
#include <string>
using namespace std;


int main()
{
   const double pi = 3.14;
   double raio;
   cout << "Digite o valor do raio: ";
   cin >> raio;
   double area = (raio * raio) * pi;
   cout << area << endl;
}
