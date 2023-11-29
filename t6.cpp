#include <iostream>
using namespace std;
string battleShip(string coordinate);
main()
{
    string coordinate;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coordinate;
    cout << "Result: " << battleShip(coordinate);
}
string battleShip(string coordinate)
{
    string st = "";
    int array[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'},
    };
    if (coordinate[0] == 'A')
    {
        coordinate[0] = 0;
    }
    else if (coordinate[0] == 'B')
    {
        coordinate[0] = 1;
    }
    else if (coordinate[0] == 'C')
    {
        coordinate[0] = 2;
    }
    else if (coordinate[0] == 'D')
    {
        coordinate[0] = 3;
    }
    else if (coordinate[0] == 'E')
    {
        coordinate[0] = 4;
    }
    int col = coordinate[1] - '0';
    if (col >= 1 && col <= 4)
    {
        col = col - 1;
    }
    if (array[coordinate[0]][col] == '.')
    {
        st = "splash";
    }
    else if (array[coordinate[0]][col] == '*')
    {
        st = "BOOM";
    }
    return st;
}
