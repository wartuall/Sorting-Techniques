#include <iostream>
using namespace std;
void Delete(int a[], int n)
{
    int i, j, x, val, temp;
    val = a[1];
    a[1] = a[n];
    a[n] = val;
    x = a[n];
    i = 1;
    j = i * 2;
    while (j < n-1)
    {
        if (a[j + 1] > a[j])
        {
            j = j + 1;
        }
        if (a[i] < a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
}

void insert(int a[], int n)
{
    int i = n;
    int temp = a[i];
    while (i > 1 and temp > a[i / 2])
    {
        a[i] = a[i / 2];
        i = i / 2;
    }
    a[i] = temp;
}
int main()
{
    // input part
    int e;
    cout << "enter the number  of the elements of heap  ,n:";
    cin >> e;
    int a[e];
    for (int i = 1; i < e; i++)
    {
        cin >> a[i];
    }
    /* logic part
        insertion of heap
            0th index is not used*/
            cout<<"max heap element :";
    for (int i = 2; i < e; i++)
    {
        insert(a, i);
    }
     for (int i = 1; i < e; i++)
    {
        cout << a[i] << endl;
    }
    // deletion of heap
    for (int i = e - 1; i > 1; i--)
    {
        Delete(a, i);
    }

    // output part
    cout << "sorted array by heap sort is:" << endl;
    for (int i = 1; i < e; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}