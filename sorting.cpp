// Bubble sort
/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the value : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }  
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
// Selection sort
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
     int arr[5];

    cout << "Enter the values: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        int smallestIndex = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }

        swap(arr[i], arr[smallestIndex]);
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}