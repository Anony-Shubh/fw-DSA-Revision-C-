#include<iostream>
using namespace std;

void secondLargest(int *arr, int n)
{
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    cout<<secondLargest(arr, n);

    return 0;
}