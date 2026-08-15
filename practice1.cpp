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
/*#include<iostream>
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
}*/
//spiral matrix
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
     cout<<"enter the matrix:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }

    int left=0;
    int right=column-1;
    int top=0;
    int bottom=rows-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
    
    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
    }
    right--;

    for(int i=right;i>=left;i--){
        cout<<arr[bottom][i];
    }
    bottom--;
    
    for(int i=left;i>=top;i--){
        cout<<arr[i][left]<<" ";
    }
    left++;
    }
    return 0;
}*/
// binary search  1d
/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target;
    cout<<"enter the number: ";
    cin>>target;
    int first=0;
    int last=4;

    while(first<=last){
        int mid=(first+last)/2;
        if(arr[mid]==target){
            cout<<"element found:"<<arr[mid];
            break;
        }
        else if(arr[mid]>target){
            last=mid-1;
        }
        else{
            first=mid+1;
        }
    }
    
    return 0;
}*/
// 90 degree rotate
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    cout<<"enter the number:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
        cin>>arr[i][j];}
    }
    //   transpose
    for(int i=0;i<rows;i++){
        for (int j=i+1;j<column;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //reverse
    for(int i=0;i<rows;i++){
        int right=column-1;
        int left=0;
        while(left<=right){
            swap(arr[i][left],arr[i][right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j];
        }
    }
    return 0;
}