#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 3, 5, 5, 3, 8};
    int largest = arr[0];
    int slargest=-1;
    for (int i = 0; i <6; i++)
    {
        if (arr[i] >largest)
            largest = arr[i];
    }
    for(int i=0;i<6;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
    }
    cout << "second largest number in the array is " << slargest;
    return 0;
}