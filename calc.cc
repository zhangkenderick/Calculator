#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num1;
  int num2;
  int i;
  int factorial = 1;
  int result;
  int choice;

  cout << "Enter your choice. Pick (1/10) " << endl;
  cout << " 1. Addition " << endl;
  cout << " 2. Subtraction "  << endl;
  cout << " 3. Multiplication " << endl;
  cout << " 4. Division " << endl;
  cout << " 5. Power " << endl;
  cout << " 6. Square Root " << endl;
  cout << " 7. ABS " << endl;
  cout << " 8. Floor " << endl;
  cout << " 9. Ceiling " << endl;
  cout << " 10. Factorial " << endl;
  cin >> choice;

  if (choice == 1)
  {
    // do addition
    cout << "Enter first number " << endl;
    cin >> num1;

    cout << "Enter second number " << endl;
    cin >> num2;
  result = num1 + num2;
    cout << "Result is " << result;
  }

  else if (choice == 2)
  {
   //do subtraction
    cout << "Enter first number " << endl;
    cin >> num1;
 
    cout << "Enter second number " << endl;
    cin >> num2;
  result = num1 - num2;
    cout << "Result is " << result;
  }

  else if (choice == 3)
  {
   //do multiplication
    cout << "Enter first number " << endl;
    cin >> num1;
 
    cout << "Enter second number " << endl;
    cin >> num2;
  result = num1 * num2;
    cout << "Result is " << result;
  }

  else if (choice == 4)
  {
   //do division
    cout << "Enter first number " << endl;
    cin >> num1;
 
    cout << "Enter second number " << endl;
    cin >> num2;
  result = num1 / num2;
    cout << "Result is " << result;
  }

  else if (choice == 5)
  {
   //do power
    float num1, num2, result;
    
    cout << "Enter base number " << endl;
    cin >> num1;

    cout << "Enter exponent " << endl;
    cin >> num2;
  result = pow (num1, num2);
    cout << "Result is " << result;
  }

  else if (choice == 6)
  {
   //do square root
    cout << "Enter number " << endl;
    cin >> num1;
  result = sqrt (num1);
    cout << "Result is " << result;
  }

  else if (choice == 7)
  {
   //do absolute value
    float num1, result;

    cout << "Enter number " << endl;
    cin >> num1;
  result = abs (num1);
    cout << "Result is " << result;
  }

  else if (choice == 8)
  {
   //do floor
    float num1, result;

    cout << "Enter number " << endl;
    cin >> num1;
  result = floor (num1);
    cout << "Result is " << result;
  }

  else if (choice == 9)
  {
   //do ceiling
    float num1, result;

    cout << "Enter number " << endl;
    cin >> num1;
  result = ceil (num1);
    cout << "Result is " << result;
  }

  else if (choice == 10)
  {
   //do factorial
    int i = 1, factorial = 1;

    cout << "Enter positive number " << endl;
    cin >> num1;
    for (i = 1; i <= num1; ++i) {
        factorial *= i;
    }
    cout << "Result is " << factorial;
  }

  else 
  {
    cout << "Enter a valid input " << endl;
  }

  return 0;

}
