#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;

int main()
{
    //Exercise Integer27.
    //Day of week
    //Variable declaration
    int K, day;

    //input
    cout << "K = ";
    cin >> K;

    //calculations
    day = (K + 4) % 7 + 1;

    //output
    cout << "Day of week: " << day << endl;



    //Exercise Boolean22
    //Variable declaration
    int N;
    int a, b, c;

    //input
    cout << "Number = ";
    cin >> N;

    //calculations
    a = N / 100;
    b = N / 10 % 10;
    c = N % 10;

    //check
    bool result = (a < b && b < c) || (a > b && b > c);


    //output
    cout << "Digits form an increasing or decreasing sequence: "
         << boolalpha << result << endl;



    //Exercise math 37
    //Variable declaration
    double y, x, numerator, denominator, inside_numerator_right, inside_numerator_left;

    //input
    cout << "x = ";
    cin >> x;

    //calculations
    inside_numerator_left = 3*log2(fabs(pow(x, 3)));
    inside_numerator_right = sqrt(fabs(pow(x, 2) * pow(sin(x), 2) * pow(cos(x), 3)));
    numerator = inside_numerator_left * inside_numerator_right;

    denominator = cos(x) + 0.5 * sqrt(x + 5);

    y = numerator / denominator;


    //output
    cout << "y = " << y << endl;

    return 0;
}
