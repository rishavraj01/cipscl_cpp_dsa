// Selection Sort Pt-2
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
        cin >> a[i];

    // Start of selection sort
    int least_index; // stores the index of the least elements
    int j;
    for(i = 0; i < 9; i++)
    {
        least_index = i;
        for (j = i; j < 10; j++)
        {
            if (a[j] < a[least_index])
                least_index = j;
        }
        int temp;
        temp = a[i];
        a[i] = a[least_index];
        a[least_index] = temp;
    }
    cout<<"the elements after sorting are : ";
    for(i=0;i<10;i++) cout<<a[i]<<" ";
}
