#include <iostream>
using namespace std;
main()
{
    int elements = 3;
    int count = 0;
    cout << "Enter the elements of the matrix: " << endl;
    int array[3][3];
    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements; j++)
        {
            cout << "Enter element at position "
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << ": ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements; j++)
        {
            if (array[i][j] == 1)
            {
                count++;
            }
        }
    }
    cout << "The matrix you entered is: " << endl;
    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    if (count == elements)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    if (count != elements)
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}
