#include <iostream>

using namespace std;

int main()
{
    //Exercise Begin 15
    // A->C; C->B; B->A
    //Variable declaration
    float A, B, C, D, E;

    //input
    cout << "Enter A B C:";
    cin >> A >> B >> C;

    //calculations
    D = A;
    E = C;
    A = B;
    C = D;
    B = E;

    //output
    cout << "Changed A B C: " << A << " " << B << " " << C << endl;



    //Exercise Begin 30
    //Variable declaration
    float a, b, S;

    //input
    cout << "Enter the legs a and b:";
    cin >> a >> b;

    //calculations
    S = (a*b)/2;

    //output
    cout << "Square:" << S << endl;



    //Exercise Begin 11
    //Variable declaration
    float L, R, S_circle;
    const double PI = 3.14;

    //input
    cout << "Enter L circle:";
    cin >> L;

    //calculations
    R = L/(2 * PI);
    S = PI * R*R;

    //output
    cout << "R = " << R << " S = " << S << endl;

    return 0;
}
