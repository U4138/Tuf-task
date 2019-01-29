#include "iostream"
using namespace std;

int main()
{
    int opt, row;
    bool Input;

up:
    cout << "1. Pattern 1" << endl;
    cout << "2. Pattern 2" << endl;
    cout << "3. Pattern 3" << endl;
    cout << "4. Pattern 4" << endl;
    cout << "5. Quit" << endl;

    cout << "\n\nEnter option (1 to 5) :";
    cin >> opt;

    if (opt == 1)
    {
        do
        {
            cout << "\n\nEnter pattern size (2 to 9):";
            cin >> row;
            if ((row >= 2) and (row <= 9))
            {
                Input = true;
            }
            else
            {
                system("cls");
                cout << "\n\n\n\n";
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "\a\t\tPattern size incorrect Try again" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                system("pause");
                system("cls");
            }
        } while (Input == false);

        //pattren 1
        for (int i = 1; i <= row; i++)
        {
            for (int l = 1; l <= row; l++)
            {
                if (i == l)
                {
                    cout << "5 ";
                }
                else
                {
                    cout << "$ ";
                }
            }
            cout << endl;
        }
    }
    else if (opt == 2)
    {
        do
        {
            cout << "\n\nEnter pattern size (2 to 9):";
            cin >> row;
            if ((row >= 2) and (row <= 9))
            {
                Input = true;
            }
            else
            {
                system("cls");
                cout << "\n\n\n\n";
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "\a\t\tPattern size incorrect Try again" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                system("pause");
                system("cls");
            }
        } while (Input == false);

        //pattren 2
        for (int i = row; i > 0; i--)
        {
            for (int l = 1; l <= 5; l++)
            {
                if (l != i)
                {
                    cout << "$ ";
                }
                else
                {
                    cout << "5 ";
                }
            }
            cout << endl;
        }
    }
    else if (opt == 3)
    {
        do
        {
            cout << "\n\nEnter pattern size (2 to 9):";
            cin >> row;
            if ((row >= 2) and (row <= 9))
            {
                Input = true;
            }
            else
            {
                system("cls");
                cout << "\n\n\n\n";
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "\a\t\tPattern size incorrect Try again" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                system("pause");
                system("cls");
            }
        } while (Input == false);

        //pattren 3
        for (int i = row; i > 0; i--)
        {
            for (int l = 1; l <= 5; l++)
            {
                if (l <= i)
                {
                    cout << "$ ";
                }
                else
                {
                    cout << "5 ";
                }
            }
            cout << endl;
        }
    }
    else if (opt == 4)
    {
        do
        {
            cout << "\n\nEnter pattern size (2 to 9):";
            cin >> row;
            if ((row >= 2) and (row <= 9))
            {
                Input = true;
            }
            else
            {
                system("cls");
                cout << "\n\n\n\n";
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "\a\t\tPattern size incorrect Try again" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                system("pause");
                system("cls");
            }
        } while (Input == false);

        //pattren 4
        for (int i = 1; i < row; i++)
        {
            for (int l = 2; l < 7; l++)
            {
                if (l <= i)
                {
                    cout << "5 ";
                }
                else
                {
                    cout << "$ ";
                }
            }
            cout << endl;
        }
    }
    else if (opt == 5)
    {
        return false;
    }
    else
    {
        system("cls");
        cout << "\n\n\n\n\n\n";
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "\a\t\tOption incorrect. Try again" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        system("pause");
        system("cls");
        goto up;
    }

    system("pause");
    return 0;
}
