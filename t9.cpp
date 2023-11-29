#include <iostream>
using namespace std;
int identical(int rows, int array[][3]);
main()
{
    int rows;
    cout << "Enter the number of rows for the array: ";
    cin >> rows;
    cout << "Enter the elements of the array: " << endl;
    int array[rows][3];
    for (int i = 0; i < rows; i++)
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
    int result = identical(rows, array);
    if (result >= 1)
    {

        cout << "The count of identical rows in the array is: " << result + 1;
    }
    else
    {
        result = 0;
        cout << "The count of identical rows in the array is: " << result;
    }
}
int identical(int rows, int array[][3])
{
    int count1 = 0;
    int array1[3];
    for (int i = 0; i < 3; i++)
    {
        array1[i] = array[0][i];
    }
    for (int k = 1; k < rows; k++)
    {
        int count = 0;

        for (int j = 0; j < 3; j++)
        {
            if (array1[j] == array[k][j])
            {
                count++;
            }
        }
        if (count == 3)
        {
            count1++;
        }
    }

    return count1;
}