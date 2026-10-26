#include <iostream>
#include <cmath>

using namespace std;

// Function declarations (prototypes)
// Task 1.1 (If2): Given an integer. If it is positive, subtract 8 from it; otherwise, add 6 to it.
void task_if2();

// Task 1.2 (If30): Describe a number in the range 1-999 (parity and number of digits).
void task_if30();

// Task 2 (Geometry, Variant 20): Check if a point (x, y) falls into the shaded area.
void task_geom20();

int main()
{
    // Variable declaration for menu selection
    int menu;

    // Input: choosing the task number
    cout << "Select task (1 - If2, 2 - If30, 3 - Geom20): ";
    cin >> menu;

    // Switching between tasks
    switch (menu)
    {
    case 1:
        task_if2();
        break;
    case 2:
        task_if30();
        break;
    case 3:
        task_geom20();
        break;
    default:
        // Output error message if the task number is invalid
        cout << "Wrong task! (Only 1, 2, 3)" << endl;
        break;
    }

    system("pause");
    return 0;
}

// ============================================================================
// Task 1.1 (If2)
// ============================================================================
void task_if2()
{
    int num;

    cout << "************* Task 1.1: If 2 *************" << endl;

    // Input
    cout << "Enter an integer number: ";
    cin >> num;

    // Validation: check if the user entered a valid integer
    if (cin)
    {
        // Calculation
        if (num > 0)
        {
            num -= 8;
        }
        else
        {
            num += 6;
        }

        // Output
        cout << "Result after transformation: " << num << endl;
    }
    else
    {
        // Error output if input is not an integer
        cout << "Error: Wrong integer input!" << endl;
    }
}

// ============================================================================
// Task 1.2 (If30)
// ============================================================================
void task_if30()
{
    int num;

    cout << "************* Task 1.2: If 30 ************" << endl;

    // Input
    cout << "Enter an integer (from 1 to 999): ";
    cin >> num;

    // Validation: check if input is a number and lies within the range [1, 999]
    if (!cin || num < 1 || num > 999)
    {
        cout << "Error: The number must be an integer in the range 1-999!" << endl;
        return;
    }

    // Calculation and Output
    cout << "Description: ";

    // Step 1: Determine parity (even or odd)
    if (num % 2 == 0)
    {
        cout << "even; ";
    }
    else
    {
        cout << "odd; ";
    }

    // Step 2: Determine the number of digits (1-digit, 2-digit, or 3-digit)
    if (num < 10)
    {
        cout << "one-digit number." << endl;
    }
    else if (num < 100)
    {
        cout << "two-digit number." << endl;
    }
    else
    {
        cout << "three-digit number." << endl;
    }
}

// ============================================================================
// Task 2 (Geometry, Variant 20)
// ============================================================================
void task_geom20()
{
    double a, r; // a - side of the large square, r - radius of the circle
    double x, y; // coordinates of the point

    cout << "************* Task 2: Geometry 20 ********" << endl;

    // Input
    cout << "Enter square side (a): ";
    cin >> a;
    cout << "Enter circle radius (r): ";
    cin >> r;

    // Validation
    // Side 'a' and radius 'r' must be positive, and the circle must fit inside the square (r <= a/2)
    if (!cin || a <= 0 || r <= 0 || a / 2.0 < r)
    {
        cout << "Error: Incorrect geometric parameters (must be a > 0, r > 0, and r <= a/2)!" << endl;
        return;
    }

    // Input point coordinates
    cout << "Enter point coordinates (x, y): ";
    cin >> x >> y;

    // Validation of coordinates
    if (!cin)
    {
        cout << "Error: Non-numeric coordinates entered!" << endl;
        return;
    }

    // Calculation
    double R2 = r * r;                      // Squared radius of the circle
    double circle = pow(x, 2) + pow(y, 2);  // Squared distance from (0,0) to (x,y)

    // Top-left shaded region: inside the square, outside the circle, X < 0, above line y = -x
    bool inTopLeftArea = (x < 0) && (y > -x) && (y < a / 2.0) && (circle > R2);

    // First-quadrant shaded region: inside the circle, X > 0, Y > 0, below line y = x
    bool inCircleSector = (x > 0) && (y > 0) && (y < x) && (circle < R2);

    // Output
    if (inTopLeftArea || inCircleSector)
    {
        cout << "The point BELONGS to the shaded area (Variant 20)." << endl;
    }
    else
    {
        cout << "The point DOES NOT belong to the shaded area (Variant 20)." << endl;
    }
}
