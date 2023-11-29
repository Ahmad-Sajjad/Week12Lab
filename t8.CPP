#include <iostream>
using namespace std;
main()
{
    int rows;
    int sum = 0;
    cout << "Enter row size: ";
    cin >> rows;
    cout << "Enter the elements of the matrix: " << endl;
    int array[rows][5];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position "
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << ": ";
            cin >> array[i][j];
        }
    }
    cout << endl;
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int maxValue = 0;
    int colIndex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[0][i] > maxValue)
        {
            maxValue = array[0][i];
            colIndex = i;
        }
    }
    // cout<<maxValue<<"   "<<colIndex;
    for (int j = 0; j < rows; j++)
    {
        int temp = array[j][0];
        array[j][0] = array[j][colIndex];
        array[j][colIndex] = temp;
    }
    cout << "Matrix after largest column moved to first: " << endl;
    for (int k = 0; k < rows; k++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << array[k][x] << "\t";
        }
        cout << endl;
    }
}