#include <iostream>
using namespace std;
void insertionSort(int a[],int n)
{
for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = a[i];
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = x;
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
    insertionSort(a,n);
    // output part
    cout << "sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}