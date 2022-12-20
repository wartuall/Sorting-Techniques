#include <iostream>
using namespace std;
void selectionSort(int a[],int n){
for (int i = 0; i <n-1; i++)
{
    int k=i;
    int j=i;
    while (k<n and j<n)
    {
        if (a[j]<a[k])
        {
            k=j;
            ++j;
        }
        else 
        ++j;
        
    }
    swap(a[i],a[k]);
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
    selectionSort(a, n);
    // output part
    cout << "sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}