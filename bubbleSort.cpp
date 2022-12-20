#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    // input part
    int n;
    cout << "enter the size of the array ,n:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // logic part

    bubbleSort(a, n);
    // output part
    cout <<"sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<endl;
    }

    return 0;
}