#include <iostream>
using namespace std;
void pattern1(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << i <<" ";
        }
        cout << endl;
    }
}

void pattern5(int N){
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout <<"* ";
        }
        cout << endl;
    }
}

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<N-j+1<<" ";
        }
        cout << endl;
    }
}

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        // Print spaces before the stars
        for (int j = 0 ; j < N-i-1; j++)
        {
            cout << " ";
        }

        // Print stars in the current row
        for (int j = 0 ; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Print spaces after the stars
        for (int j = 0 ; j < N-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}


int main()
{   
    int N = 5;
    pattern7(N);
    return 0;
}

