#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;


void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}


void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(1) << i << "] = " << setw(4) << a[i] << endl;
    cout << endl;
}


int MinOdd(int* a, const int size)
{
    int minOdd;
    int imin = -1;

  
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            minOdd = a[i]; 
            imin = i;    
            break;      
        }
    }

  
    if (imin == -1)
    {
        cerr << "No Odd" << endl;
        return 0;
    }

 
    for (int i = imin + 1; i < size; i++)
    {
        if (a[i] % 2 != 0 && a[i] < minOdd)
            minOdd = a[i];
    }

    return minOdd;
}

int main()
{
    srand((unsigned)time(NULL)); 
    const int n = 10; 
    int a[n];
    int Low = -10;
    int High = 10;


    Create(a, n, Low, High);
    Print(a, n);

   
    int minOdd = MinOdd(a, n);
    if (minOdd != 0)
        cout << "MinOdd: " << minOdd << endl;

    return 0;
}
