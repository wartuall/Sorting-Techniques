#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    int t = h;
    int i = l, j = mid + 1, k = l;
    int B[t + 1];

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
void iterativeMergeSort(int a[], int n)
{
    int p, l, h, mid, i;

    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 <= n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(a, l, mid, h);
        }
    }
    if (p / 2 < n)
        merge(a, 0, p / 2 - 1, n);
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
    iterativeMergeSort(a, n);
    // output part
    cout << "sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}