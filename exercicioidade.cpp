#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double mediaIdades;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    getline (cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore(INT8_MAX, '\n');
    getline (cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    mediaIdades = (double) (idade1 + idade2) / 2;
    cout << fixed << setprecision(1);

    cout << "A média de idade de " << nome1 << " e " << nome2 << " eh de " << mediaIdades << " anos " << endl;

return 0;

}