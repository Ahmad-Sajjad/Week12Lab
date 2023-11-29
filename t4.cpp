#include <iostream>
using namespace std;
int printSum(int rowSize);
main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    cout << "The sum of elements in the matrix is: " << printSum(rowSize);
}
int printSum(int rowSize)
{
    int array[rowSize][5];
    int sum = 0;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position "
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << ": ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + array[i][j];
        }
    }
    return sum;
}