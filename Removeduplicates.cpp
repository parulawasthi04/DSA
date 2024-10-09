#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 3, 5, 5, 3, 8};
    int temp;
    cout << "Sorted array is: ";
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        cout << arr[i];
    }

    return 0;
}