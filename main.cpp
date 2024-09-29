#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x_a, y_a, z_a;
    double x_b, y_b, z_b;
    double x_c, y_c, z_c;
    double diag_x, diag_y, diag_z, diag_p;
    // вводим данные векторов
    cout << "Enter A:" ;
    cin >> x_a>> y_a>> z_a;
    cout << "Enter B:";
    cin >> x_b>> y_b>> z_b;
    cout << "Enter C:";
    cin >> x_c>> y_c>> z_c;
    // считаем изменения по x, y, z
    diag_x = x_a + x_b + x_c;
    diag_y = y_a + y_b + y_c;
    diag_z = z_a + z_b + z_c;
    // вычисляем длинну диагонали
    diag_p = pow((pow(diag_x, 2) + pow(diag_y,2) + pow(diag_z,2)), 0.5);
    cout <<"Diagonal = "<< diag_p << endl;
    return 0;
}