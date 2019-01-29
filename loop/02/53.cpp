#include <iostream>
using namespace std;


//function for checking range
int range(int a[], int n)
{
    int rang = 0;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= 9) or (a[i] <= 90))
            rang++;
    }

    if (rang > 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}

//function for comparision
int Compare(int a[], int n)
{
    int total;
    for (int i = 0; i < n; i++)
    {
        if (20 == a[i])
        {
            total += a[i];
        }
    }
    if (total > 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

//function for smallest
int Smallest(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (temp > arr[i])
        {
            temp = arr[i];
        }
    }
    return temp;
}

//function for largest
int Largest(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    return temp;
}

int main()
{
    //declaring variables
    int n, opt, count, sum, min, max, com;

    //gwtting user input for array
    cout << "Enter the length in your list :" << endl;
    cout << "Number :";
    cin >> n;
    int a[n] = {};
    int i;

    //loop for storing element in array
    cout << "Enter the numbers in your list :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " number : ";
        cin >> a[i];
    }

    //displying options to the screen
    system("cls");
utty:
    cout << "\n\t\t\t----options----" << endl;
    cout << "1.--all Integer-- " << endl;
    cout << "2.--sum of Integers-- " << endl;
    cout << "3.--Avarage of integers-- " << endl;
    cout << "4.--Smallest integer-- " << endl;
    cout << "5.--Largest integer-- " << endl;
    cout << "6.--less than 20-- " << endl;
    cout << "7.--All in range-- " << endl;
    cout << "options :";
    cin >> opt;
    system("cls");
    cout << "---------------------------------------------" << endl;

    //if statement for differentfunctions with respect to options
    if (opt == 1)
    {
        cout << "Your list is :";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << ", ";
        }
    }
    else if (opt == 2)
    {
        for (size_t i = 0; i < count; i++)
        {
            sum += a[i];
        }
        cout << "\n\nThe sum of all Integer is :" << sum << endl;
    }
    else if (opt == 3)
    {
        for (size_t i = 0; i < count; i++)
        {
            sum += a[i];
        }
        int avg = sum / n;
        cout << "\n\nThe Avarage of integers is :" << avg << endl;
    }
    else if (opt == 4)
    {
        min = Smallest(a, n);
        cout << "\n\nThe Smallest integer is :" << min << endl;
    }
    else if (opt == 5)
    {
        max = Largest(a, n);
        cout << "\n\nThe Largest integer is :" << max << endl;
    }
    else if (opt == 6)
    {
        Compare(a, n);
    }
    else if (opt == 7)
    {
        range(a,n);
    }
    else
    {
        system("cls");
        cout << "\a\n\n\n\n\t\t----Bad option Try again ...----" << endl;
        system("pause");
        system("cls");
        goto utty;
    }

    cout << "\n\n\n\n\n"
         << endl;
    system("pause");
    return 0;
}