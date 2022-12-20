#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    int t=h;
    int i = l, j = mid + 1, k = l;
    int B[t+1];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            B[k++] = a[i++];
        else
            B[k++] = a[j++];
    }
    for (; i <= mid; i++)
        B[k++] = a[i];
    for (; j <= h; j++)
        B[k++] = a[j];

    for (i = l; i <= h; i++)
        a[i] = B[i];
}

void recursiveMergeSort(int a[], int l, int h)
{

    if (l < h)
    {
        int mid = (l + h) / 2;
        recursiveMergeSort(a, l, mid);
        recursiveMergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
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
    recursiveMergeSort(a, 0, n - 1);
    // output part
    cout << "sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}