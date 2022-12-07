#include <iostream>
using namespace std;
#include <conio.h>
int array[3][3];
bool checkrows(int symbol);
bool checkcolumns(int symbol);
bool checkdiagonals(int symbol);
bool iswinner(int symbol);

bool result;
void header();
char z;
int n, n1, n2, n3, n4, n5, n6, n7, n8;
int a;
main()
{
    string name1;
    string name2;

    // while (iswinner(0) || iswinner(1))
    while(true)
    {

        header();
        array[0][0] = 5;
        array[0][1] = 5;
        array[0][2] = 5;
        array[1][0] = 5;
        array[1][1] = 5;
        array[1][2] = 5;
        array[2][0] = 5;
        array[2][1] = 5;
        array[2][2] = 5;
        cout << "                  ENTER PLAYER 1 NAME: ";
        cin >> name1;
        cout << "                   OK" << endl;
        cout << "                 PLAYER 1 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 0" << endl;
        cin >> n;

        if (n == 1)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[0][0] = a;
        }
        if (n == 2)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[0][1] = a;
        }
        if (n == 3)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[0][2] = a;
        }
        if (n == 4)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[1][0] = a;
        }
        if (n == 5)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[1][1] = a;
        }
        if (n == 6)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[1][2] = a;
        }
        if (n == 7)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[2][0] = a;
        }
        if (n == 8)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[2][1] = a;
        }
        if (n == 9)
        {
            cout << "Enter zero: " << endl;
            cin >> a;
            array[2][2] = a;
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;
        cout << "Press any key" << endl;
        getch();

        system("cls");
        header();
        cout << "                   ENTER PLAYER 2 NAME: ";
        cin >> name2;
        cout << "                   OK" << endl;

        cout << "                 PLAYER 2 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 1" << endl;

        cin >> n1;

        if (n1 == 1)
        {
            if (n == 1)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][0] = a;
            }
        }
        if (n1 == 2)
        {
            if (n == 2)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][1] = a;
            }
        }
        if (n1 == 3)
        {
            if (n == 3)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][2] = a;
            }
        }
        if (n1 == 4)
        {
            if (n == 4)
            {
                cout << " Sorry this box is reserved." << endl;

                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][0] = a;
            }
        }

        if (n1 == 5)
        {
            if (n == 5)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][1] = a;
            }
        }
        if (n1 == 6)
        {
            if (n == 6)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][2] = a;
            }
        }
        if (n1 == 7)
        {
            if (n == 7)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][0] = a;
            }
        }
        if (n1 == 8)
        {
            if (n == 8)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][1] = a;
            }
        }
        if (n1 == 9)
        {
            if (n == 9)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n1;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n1)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][2] = a;
            }
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;
        cout << "Press any key" << endl;
        getch();

        system("cls");
        header();

        cout << "                 PLAYER 1 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 0" << endl;
        cin >> n2;

        if (n2 == 1)
        {
            if (n == 1 || n1 == 1)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][0] = a;
            }
        }
        if (n2 == 2)
        {
            if (n == 2 || n1 == 2)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][1] = a;
            }
        }
        if (n2 == 3)
        {
            if (n == 3 || n1 == 3)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][2] = a;
            }
        }
        if (n2 == 4)
        {
            if (n == 4 || n1 == 4)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][0] = a;
            }
        }
        if (n2 == 5)
        {
            if (n == 5 || n1 == 5)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][1] = a;
            }
        }
        if (n2 == 6)
        {
            if (n == 6 || n1 == 6)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][2] = a;
            }
        }
        if (n2 == 7)
        {
            if (n == 7 || n1 == 7)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][0] = a;
            }
        }
        if (n2 == 8)
        {
            if (n == 8 || n1 == 8)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][1] = a;
            }
        }
        if (n2 == 9)
        {
            if (n == 9 || n1 == 9)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n2;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n2)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][2] = a;
            }
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;
        cout << "Press any key" << endl;
        getch();

        system("cls");
        header();

        cout << "                 PLAYER 2 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 1" << endl;

        cin >> n3;

        if (n3 == 1)
        {
            if (n == 1 || n1 == 1 || n2 == 1)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][0] = a;
            }
        }
        if (n3 == 2)
        {
            if (n == 2 || n1 == 2 || n2 == 2)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][1] = a;
            }
        }
        if (n3 == 3)
        {
            if (n == 3 || n1 == 3 || n2 == 3)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {

                cout << "Enter one: " << endl;
                cin >> a;
                array[0][2] = a;
            }
        }
        if (n3 == 4)
        {
            if (n == 4 || n1 == 4 || n2 == 4)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][0] = a;
            }
        }
        if (n3 == 5)
        {
            if (n == 5 || n1 == 5 || n2 == 5)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][1] = a;
            }
        }
        if (n3 == 6)
        {
            if (n == 6 || n1 == 6 || n2 == 6)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][2] = a;
            }
        }
        if (n3 == 7)
        {
            if (n == 7 || n1 == 7 || n2 == 7)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][0] = a;
            }
        }
        if (n3 == 8)
        {
            if (n == 8 || n1 == 8 || n2 == 8)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][1] = a;
            }
        }
        if (n3 == 9)
        {
            if (n == 9 || n1 == 9 || n2 == 9)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n3;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n3)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][2] = a;
            }
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;
        cout << "Press any key" << endl;
        getch();

        system("cls");
        header();

        cout << "                 PLAYER 1 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 0" << endl;
        cin >> n4;

        if (n4 == 1)
        {
            if (n == 1 || n1 == 1 || n2 == 1 || n3 == 1)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][0] = a;
            }
        }
        if (n4 == 2)
        {
            if (n == 2 || n1 == 2 || n2 == 2 || n3 == 2)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][1] = a;
            }
        }
        if (n4 == 3)
        {
            if (n == 3 || n1 == 3 || n2 == 3 || n3 == 3)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[0][2] = a;
            }
        }
        if (n4 == 4)
        {
            if (n == 4 || n1 == 4 || n2 == 4 || n3 == 4)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][0] = a;
            }
        }
        if (n4 == 5)
        {
            if (n == 5 || n1 == 5 || n2 == 5 || n3 == 5)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][1] = a;
            }
        }
        if (n4 == 6)
        {
            if (n == 6 || n1 == 6 || n2 == 6 || n3 == 6)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[1][2] = a;
            }
        }
        if (n4 == 7)
        {
            if (n == 7 || n1 == 7 || n2 == 7 || n3 == 7)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][0] = a;
            }
        }
        if (n4 == 8)
        {
            if (n == 8 || n1 == 8 || n2 == 8 || n3 == 8)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][1] = a;
            }
        }
        if (n4 == 9)
        {
            if (n == 9 || n1 == 9 || n2 == 9 || n3 == 9)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n4;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n4)
                        {
                            cout << "Enter zero: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter zero: " << endl;
                cin >> a;
                array[2][2] = a;
            }
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        if (iswinner(0))
        {
            cout << "CONGRAGULATIONS"
                 << "    " << name1 << "     "
                 << "YOU HAVE WON" << endl;
            cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
            cin >> z;
            if (z == 'y')
            {
            }
            if (z == 'n')
            {
                break;
            }
        }
        cout << "Press any key" << endl;

        getch();

        header();

        cout << "                 PLAYER 2 TURN" << endl;
        cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 1" << endl;

        cin >> n5;
        

        if (n5 == 1)
        {
            if (n == 1 || n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][0] = a;
            }
        }
        if (n5 == 2)
        {
            if (n == 2 || n1 == 2 || n2 == 2 || n3 == 2 || n4 == 2)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][1] = a;
            }
        }
        if (n5 == 3)
        {
            if (n == 3 || n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[0][2] = a;
            }
        }
        if (n5 == 4)
        {
            if (n == 4 || n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][0] = a;
            }
        }
        if (n5 == 5)
        {
            if (n == 5 || n1 == 5 || n2 == 5 || n3 == 5 || n4 == 5)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][1] = a;
            }
        }
        if (n5 == 6)
        {
            if (n == 6 || n1 == 6 || n2 == 6 || n3 == 6 || n4 == 6)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[1][2] = a;
            }
        }
        if (n5 == 7)
        {
            if (n == 7 || n1 == 7 || n2 == 7 || n3 == 7 || n4 == 7)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][0] = a;
            }
        }
        if (n5 == 8)
        {
            if (n == 8 || n1 == 8 || n2 == 8 || n3 == 8 || n4 == 8)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][1] = a;
            }
        }
        if (n5 == 9)
        {
            if (n == 9 || n1 == 9 || n2 == 9 || n3 == 9 || n4 == 9)
            {
                cout << " Sorry this box is reserved." << endl;
                cout << "Please enter another box number: " << endl;
                cin >> n5;
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (array[i][j] == n5)
                        {
                            cout << "Enter one: " << endl;
                            cin >> a;
                            array[i][j] = a;
                        }
                    }
                }
            }
            else
            {
                cout << "Enter one: " << endl;
                cin >> a;
                array[2][2] = a;
            }
        }
        cout << "                                A           B         C" << endl;
        cout << "                                                           " << endl;
        cout << "                              ___________________________" << endl;

        cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;

        cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        cout << "                             |________|_________|________| " << endl;
        if (iswinner(0))
        {
            cout << "CONRAGULATIONS"
                 << "   " << name1 << "  "
                 << "YOU HAVE WON" << endl;
            cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
            cin >> z;
            if (z == 'y')
            {
                array[0][0] = 5;
                array[0][1] = 5;
                array[0][2] = 5;
                array[1][0] = 5;
                array[1][1] = 5;
                array[1][2] = 5;
                array[2][0] = 5;
                array[2][1] = 5;
                array[2][2] = 5;
                continue;
                // this is called default values that will be used to start the game from start......
            }
            if (z == 'n')
            {
                exit(0);
            }
        }
        else if (iswinner(1))
        {
            cout << "CONRAGULATIONS"
                 << "   " << name2 << "   "
                 << "YOU HAVE WON" << endl;
            cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
            cin >> z;
            if (z == 'y')
            {
                array[0][0] = 5;
                array[0][1] = 5;
                array[0][2] = 5;
                array[1][0] = 5;
                array[1][1] = 5;
                array[1][2] = 5;
                array[2][0] = 5;
                array[2][1] = 5;
                array[2][2] = 5;
                continue;
                // this is called default values that will be used to start the game from start......
            }
            if (z == 'n')
            {
                exit(0);
            }
        }
        // cout << "Press any key" << endl;
        // getch();

        // system("cls");
        // header();

        // cout << "                 PLAYER 1 TURN" << endl;
        // cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 0" << endl;
        // cin >> n6;

        // if (n6 == 1)
        // {
        //     if (n == 1 || n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1 || n5 == 1)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][0] = a;
        //     }
        // }
        // if (n6 == 2)
        // {
        //     if (n == 2 || n1 == 2 || n2 == 2 || n3 == 2 || n4 == 2 || n5 == 2)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][1] = a;
        //     }
        // }
        // if (n6 == 3)
        // {
        //     if (n == 3 || n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3 || n5 == 3)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][2] = a;
        //     }
        // }
        // if (n6 == 4)
        // {
        //     if (n == 4 || n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4 || n5 == 4)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][0] = a;
        //     }
        // }
        // if (n6 == 5)
        // {
        //     if (n == 5 || n1 == 5 || n2 == 5 || n3 == 5 || n4 == 5 || n5 == 5)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][1] = a;
        //     }
        // }
        // if (n6 == 6)
        // {
        //     if (n == 6 || n1 == 6 || n2 == 6 || n3 == 6 || n4 == 6 || n5 == 6)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][2] = a;
        //     }
        // }
        // if (n6 == 7)
        // {
        //     if (n == 7 || n1 == 7 || n2 == 7 || n3 == 7 || n4 == 7 || n5 == 7)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][0] = a;
        //     }
        // }
        // if (n6 == 8)
        // {
        //     if (n == 8 || n1 == 8 || n2 == 8 || n3 == 8 || n4 == 8 || n5 == 8)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][1] = a;
        //     }
        // }
        // if (n6 == 9)
        // {
        //     if (n == 9 || n1 == 9 || n2 == 9 || n3 == 9 || n4 == 9 || n5 == 9)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n6;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n6)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][2] = a;
        //     }
        // }
        // cout << "                                A           B         C" << endl;
        // cout << "                                                           " << endl;
        // cout << "                              ___________________________" << endl;

        // cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // if (iswinner(0))
        // {
        //     cout << "CONRAGULATIONS"
        //          << "   " << name << "  "
        //          << "YOU HAVE WON" << endl;
        //     cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
        //     cin >> z;
        //     if (z == 'y')
        //     {
        //     }
        //     if (z == 'n')
        //     {
        //         break;
        //     }
        // }

        // cout << "Press any key" << endl;

        // getch();
        // header();

        // cout << "                 PLAYER 2 TURN" << endl;
        // cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 1" << endl;

        // cin >> n7;

        // if (n7 == 1)
        // {
        //     if (n == 1 || n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1 || n5 == 1 || n6 == 1)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[0][0] = a;
        //     }
        // }
        // if (n7 == 2)
        // {
        //     if (n == 2 || n1 == 2 || n2 == 2 || n3 == 2 || n4 == 2 || n5 == 2 || n6 == 2)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[0][1] = a;
        //     }
        // }
        // if (n7 == 3)
        // {
        //     if (n == 3 || n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3 || n5 == 3 || n6 == 3)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[0][2] = a;
        //     }
        // }
        // if (n7 == 4)
        // {
        //     if (n == 4 || n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4 || n5 == 4 || n6 == 4)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[1][0] = a;
        //     }
        // }
        // if (n7 == 5)
        // {
        //     if (n == 5 || n1 == 5 || n2 == 5 || n3 == 5 || n4 == 5 || n5 == 5 || n6 == 5)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[1][1] = a;
        //     }
        // }
        // if (n7 == 6)
        // {
        //     if (n == 6 || n1 == 6 || n2 == 6 || n3 == 6 || n4 == 6 || n5 == 6 || n6 == 6)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[1][2] = a;
        //     }
        // }
        // if (n7 == 7)
        // {
        //     if (n == 7 || n1 == 7 || n2 == 7 || n3 == 7 || n4 == 7 || n5 == 7 || n6 == 7)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[2][0] = a;
        //     }
        // }
        // if (n7 == 8)
        // {
        //     if (n == 8 || n1 == 8 || n2 == 8 || n3 == 8 || n4 == 8 || n5 == 8 || n6 == 8)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[2][1] = a;
        //     }
        // }
        // if (n7 == 9)
        // {
        //     if (n == 9 || n1 == 9 || n2 == 9 || n3 == 9 || n4 == 9 || n5 == 9 || n6 == 9)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n7;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n7)
        //                 {
        //                     cout << "Enter one: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter one: " << endl;
        //         cin >> a;
        //         array[2][2] = a;
        //     }
        // }
        // cout << "                                A           B         C" << endl;
        // cout << "                                                           " << endl;
        // cout << "                              ___________________________" << endl;

        // cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;
        // if (iswinner(0))
        // {
        //     cout << "CONRAGULATIONS"
        //          << "   " << name << "  "
        //          << "YOU HAVE WON" << endl;
        //     cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
        //     cin >> z;
        //     if (z == 'y')
        //     {
        //     }
        //     if (z == 'n')
        //     {
        //         break;
        //     }
        // }
        // else if (iswinner(1))
        // {
        //     cout << "CONRAGULATIONS"
        //          << "   " << n << "   "
        //          << "YOU HAVE WON" << endl;
        //     cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
        //     cin >> z;
        //     if (z == 'y')
        //     {
        //     }
        //     if (z == 'n')
        //     {
        //         break;
        //     }
        // }
        // cout << "Press any key" << endl;
        // getch();
        // system("cls");
        // header();
        // cout << "                 PLAYER 1 TURN" << endl;
        // cout << "                 PLEASE ENTER THE BOX OF YOUR OWN WILL IN WHICH YOU WANT TO ENTER 0" << endl;
        // cin >> n8;

        // if (n8 == 1)
        // {
        //     if (n == 1 || n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1 || n5 == 1 || n6 == 1 || n7 == 1)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][0] = a;
        //     }
        // }
        // if (n8 == 2)
        // {
        //     if (n == 2 || n1 == 2 || n2 == 2 || n3 == 2 || n4 == 2 || n5 == 2 || n6 == 2 || n7 == 2)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][1] = a;
        //     }
        // }
        // if (n8 == 3)
        // {
        //     if (n == 3 || n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3 || n5 == 3 || n6 == 3 || n7 == 3)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[0][2] = a;
        //     }
        // }
        // if (n8 == 4)
        // {
        //     if (n == 4 || n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4 || n5 == 4 || n6 == 4 || n7 == 4)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][0] = a;
        //     }
        // }
        // if (n8 == 5)
        // {
        //     if (n == 5 || n1 == 5 || n2 == 5 || n3 == 5 || n4 == 5 || n5 == 5 || n6 == 5 || n7 == 5)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }

        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][1] = a;
        //     }
        // }
        // if (n8 == 6)
        // {
        //     if (n == 6 || n1 == 6 || n2 == 6 || n3 == 6 || n4 == 6 || n5 == 6 || n6 == 6 || n7 == 6)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }

        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[1][2] = a;
        //     }
        // }
        // if (n8 == 7)
        // {
        //     if (n == 7 || n1 == 7 || n2 == 7 || n3 == 7 || n4 == 7 || n5 == 7 || n6 == 7 || n7 == 7)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }

        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][0] = a;
        //     }
        // }
        // if (n8 == 8)
        // {
        //     if (n == 8 || n1 == 8 || n2 == 8 || n3 == 8 || n4 == 8 || n5 == 8 || n6 == 8 || n7 == 8)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][1] = a;
        //     }
        // }
        // if (n8 == 9)
        // {
        //     if (n == 9 || n1 == 9 || n2 == 9 || n3 == 9 || n4 == 9 || n5 == 9 || n6 == 9 || n7 == 9)
        //     {
        //         cout << " Sorry this box is reserved." << endl;
        //         cout << "Please enter another box number: " << endl;
        //         cin >> n8;
        //         for (int i = 0; i < 2; i++)
        //         {
        //             for (int j = 0; j < 2; j++)
        //             {
        //                 if (array[i][j] == n8)
        //                 {
        //                     cout << "Enter zero: " << endl;
        //                     cin >> a;
        //                     array[i][j] = a;
        //                 }
        //             }
        //         }
        //     }

        //     else
        //     {
        //         cout << "Enter zero: " << endl;
        //         cin >> a;
        //         array[2][2] = a;
        //     }
        // }
        // cout << "                                A           B         C" << endl;
        // cout << "                                                           " << endl;
        // cout << "                              ___________________________" << endl;

        // cout << "                             |   " << array[0][0] << "    |     " << array[0][1] << "   |    " << array[0][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[1][0] << "    |     " << array[1][1] << "   |    " << array[1][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // cout << "                             |   " << array[2][0] << "    |     " << array[2][1] << "   |    " << array[2][2] << "   |   " << endl;
        // cout << "                             |________|_________|________| " << endl;

        // if (iswinner(0))
        // {
        //     cout << "CONRAGULATIONS"
        //          << "   " << name << "   "
        //          << "YOU HAVE WON" << endl;
        //     cout << "Do u want to play the game again.If u want to play again press y if not then n." << endl;
        //     cin >> z;
        //     if (z == 'y')
        //     {
        //     }
        //     if (z == 'n')
        //     {
        //         break;
        //     }
        // }
    }
}

void header()
{
    cout << "                           *****************************" << endl;
    cout << "                           *****************************" << endl;
    system("color 02");
    cout << "                           _____________________________" << endl;
    cout << "                                     TIC TAC TOE" << endl;
    cout << "                           _____________________________" << endl;
    cout << "                                                         " << endl;
    system("color 02");
    cout << "                           *****************************" << endl;
    cout << "                           *****************************" << endl;

    system("color 02");
    cout << "                                                          " << endl;
    cout << "                                                          " << endl;
}
bool CheckRows(int symbol)
{
    int count = 0;
    for (int row = 0; row < 3; row++)
    {
        count = 0;
        for (int col = 0; col < 3; col++)
        {
            if (array[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool CheckColumns(int symbol)
{
    int count = 0;
    for (int col = 0; col < 3; col++)
    {
        count = 0;
        for (int row = 0; row < 3; row++)
        {
            if (array[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool CheckDiagonals(int symbol)
{
    int count = 0;
    for (int idx = 0; idx < 3; idx++)
    {
        if (array[idx][idx] == symbol)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    count = 0;
    for (int row = 0, col = 2; row < 3; row++, col--)
    {
        if (array[row][col] == symbol)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    return 0;
}
bool iswinner(int symbol)
{
    if (CheckRows(symbol) || CheckColumns(symbol) || CheckDiagonals(symbol))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
