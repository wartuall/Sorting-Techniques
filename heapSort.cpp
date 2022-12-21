#include <iostream>
using namespace std;

void heapify(int a[], int i, int n)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n and a[largest] < a[left])
    {
        largest = left;
    }
    if (right <= n and a[largest] < a[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, largest, n);
    }
}
void heapSort(int a[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(a[size], a[1]);
        --size;
        heapify(a, 1, size);
    }
}
int main()
{
    // input part
    int e;
    cout << "enter the number  of the elements of heap  ,n:";
    cin >> e;
    e = e + 1;
    int a[e];
    for (int i = 1; i < e; i++)
    {
        cin >> a[i];
    }
    /* logic part
            0th index is not used*/
    int n = e - 1;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(a, i, n);
    }
    cout << "heapfied elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    heapSort(a, n);
    cout << "heapsorted elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}