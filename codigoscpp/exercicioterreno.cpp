#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{

    double baseRetangulo, alturaRetangulo, areaRetangulo, perimetroRetangulo, diagonalRetangulo;
  

    cout <<"Digite o valor da base: ";
    cin >> baseRetangulo;

    cout <<"Digite o valor da altura: ";
    cin >> alturaRetangulo;

    areaRetangulo = baseRetangulo * alturaRetangulo;
    perimetroRetangulo = 2 * (baseRetangulo+alturaRetangulo);
    diagonalRetangulo = sqrt(pow(baseRetangulo, 2.0)+ pow(alturaRetangulo, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << areaRetangulo << endl;
    cout << "PERIMETRO = " << perimetroRetangulo << endl;
    cout << "DIAGONAL = " << diagonalRetangulo << endl;
    

    return 0;
}