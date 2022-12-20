#include <iostream>
using namespace std;
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            swap(a[i],a[j]);

    } while (i < j);
    swap(a[l], a[j]);
    return j;
}
void quickSort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = partition(a, l, h);
        quickSort(a,l,j);
        quickSort(a,j+1,h);
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

    quickSort(a,0,n);
    // output part
    cout << "sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}