#include <iostream>
using namespace std;

void printNaturalNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNaturalNumbers(n - 1);
    cout << n << " ";
}

int fib(int num)
{
    if (num == 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
int NumberOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if(n>0)
    {
        return NumberOfDigits(n / 10) + 1;
    }
}
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n > 0)
    {
        return sumOfDigits(n / 10) + (n % 10);
    }
}
void decimalToBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        decimalToBinary(n / 2);
        cout << n % 2;
    }
}
int main() {
    int N;

    cout << "enter a decimal number: " << endl;
    cin >> N;
    decimalToBinary(N);
    return 0;
}