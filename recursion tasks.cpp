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
bool isPrime(int n, int i = 2)
{
    // Base cases
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    // Check for next divisor
    return isPrime(n, i + 1);
}
int product(int x, int y)
{
    // if x is less than  
    // y swap the numbers 
    if (x < y)
        return product(y, x);

    // iteratively calculate  
    // y times sum of x 
    else if (y != 0)
        return (x + product(x, y - 1));

    // if any of the two numbers is  
    // zero return zero 
    else
        return 0;
}
void recursiveBubbleSort(int arr[], int size) {
    // Base case: If size of array is 1, it's already sorted
    if (size == 1) {
        return;
    }

    // One pass of bubble sort
    for (int i = 0; i < size - 1; i++) {
        // Swap if the element is greater than the next element
        if (arr[i] > arr[i + 1]) {
            // Custom swap logic (without using built-in swap function)
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call for the remaining elements
    recursiveBubbleSort(arr, size - 1);
}
// Recursive function to find the minimum element in the array
int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];  // If the array has only one element, it is the minimum
    }

    int minOfRest = findMin(arr, size - 1);  // Recursively find the minimum in the rest of the array

    if (arr[size - 1] < minOfRest) {
        return arr[size - 1];  // If the current element is smaller, return it
    }
    else {
        return minOfRest;  // Otherwise, return the minimum from the rest
    }
}

// Recursive function to find the maximum element in the array
int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];  // If the array has only one element, it is the maximum
    }

    int maxOfRest = findMax(arr, size - 1);  // Recursively find the maximum in the rest of the array

    if (arr[size - 1] > maxOfRest) {
        return arr[size - 1];  // If the current element is larger, return it
    }
    else {
        return maxOfRest;  // Otherwise, return the maximum from the rest
    }
}
int main() {

    int arr[5];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }

    // Call recursive bubble sort
    recursiveBubbleSort(arr, 5);

    // Output the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}