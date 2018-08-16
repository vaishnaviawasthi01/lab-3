//include library
#include <iostream>
using namespace std;

//main function
int main()
{
int a,b,sum,substraction,product,division,remainder; //declaration
a = 6;
b = 4;
sum = a + b; // adds 2 numbers
substraction = a - b; //calculate the difference
product = a * b; // calculate the product
division = a / b; //divides the number
remainder = a % b;
cout << "numbers are" << a << b << endl;
cout << "results in in" << a << b << endl;
cout << "sum is" << sum << endl;
cout << "difference is" << substraction << endl;
cout << "product is" << product << endl;
cout << "quotient is" << division << endl;
cout << "remainder is" <<remainder << endl;
return 0;
}

