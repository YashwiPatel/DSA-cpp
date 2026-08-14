// Bubble sort  
/*#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
  int array[5]={3,5,2,4,1};
  for(int i=0;i<5;i++){
    for(int j=0;j<5-i-1;j++){
        if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);
        }
    }
  }
  for(int i=0;i<5;i++){
    cout<<array[i]<<" ";
  }
    return 0;
}*/

// selection sort
/*#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int arr[5]={3,4,2,5,1};
    for(int i=0;i<4;i++){
        int smallest=i;
        for(int j=i+1;j<5;j++){
            if(arr[smallest]>arr[j]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

// insertion sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={4,3,5,2,1};
   for(int i=1; i<5; i++){
    int key=arr[i];
    int j=i-1;

    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
