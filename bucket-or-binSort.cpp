#include <iostream>
using namespace std;

int findmax(int a[],int n)
{
    int max=a[0];
    for (int  i = 0; i < n; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
void countSort(int a[],int n)
{
    int max;
    max=findmax(a,n);
    int *c=new int[max+1];
    for (int i = 0; i < max+1; i++)
    {
        c[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    int i=0;
    int j=0;
    while (i<max+1)
    {
        if(c[i]>0)
        {
            a[j++]=i;
            c[i]--;
        }
        else 
        i++;
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
    countSort(a, n);
    // output part
    cout << "sorted array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}