/*create an array and take values from user
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the value of array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
// sum of all elements
/*#include<iostream>
using namespace std ;
int main(){
    int arr[5];
    cout<<"enter the value:";
    int sum =0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
        cout<<sum<<" ";
    }
    return 0;
}*/
// largest element in array
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter 5 elemnets: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int largest = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest element is";
    cout<<largest;
    return 0;
}*/
//Sum of Elements
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the element:";
    int sum=0;

    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum =sum+arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<sum;
}*/
//product element
/*#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"enter the 6 values: ";
    int product=1;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<6;i++){
        product=product*arr[i];
    }
    cout<<"the product is:"<<endl;
    cout<<product;
    return 0;
}*/
//Count Even Numbers
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter 5 value: ";
    int count=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            count=count+1;
        }
    }
    cout<<"the total count of the even digit is:"<<count;
    return 0;
}*/
//Average of Array Elements
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enther the 5 values:";
    int sum=0;
   
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
    }
    for(int i=0; i<5;i++){
        sum=sum+arr[i];
    }
    float average =sum/5.0;
    cout<<"the average is:"<<average;
    return 0;

}*/
//Largest, Smallest, and Their Difference
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter 5 value:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int smaller=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]<smaller){
            smaller = arr[i];
        }
    }
    float difference=largest-smaller;
    cout<<"the larest number is : "<<largest;
    cout<<"the smallest number is: "<<smaller;
    cout<<"the difeerence is : "<<difference;
    return 0;
}*/
//Reverse an Array.
/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the 5 values";
    for(int i=0;i<5;i++){
       cin>>arr[i]; 
    }
    
    int left = 0;
    int right = 4;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
// count positive, negative,and zero elements
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int count=0;
    int positive_count=0;
    int negative_count=0;
    cout<<"enter the 5 values:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){
        if(arr[i]==0){
            count++;
            
        }
        else if(arr[i]>0){
            positive_count++;
           
        }
        else {
            negative_count++;
           
        }
        cout<<endl;
        }
        cout<<"the number of zero is:"<<count<<endl;
        cout<<"the count of positive element: "<< positive_count<<endl;
        cout<<"the count of the negative elemnet:"<< negative_count<<endl;
        return 0;
    }*/
// second largest elemnt
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest =arr[0];
    int second=arr[1];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if (arr[i] < largest && arr[i] > second){
            second=arr[i];
        }
    }
    cout<<endl;
    cout<<"the largest number is:"<<largest<<endl;
    cout<<"the second largest number is :"<<second<<endl;
    return 0;
}*/
//linear search
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]==10){
            cout<<"found"<<arr[i]<<"At index"<<i<<endl;
        }
    }
    return 0;
}*/
// array is sorted or not
/*#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the value:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    bool sort=true;
    for(int i=0;i<6;i++){
        if(arr[i]>arr[i+1]){
            sort=false;
        }
    }
    if(sort){cout<<"sorted";}
    else{cout<<"not sorted";}
    return 0;
}*/
// removal of duplicates in an array
/*#include<iostream>
using namespace std;
 int main(){
    int arr[]={1,1,2,3,4,4};
    int n=6;
    int left=0;
    for(int right =1;right<n;right++){
        if(arr[left]!=arr[right]){
            left++;
            arr[left]=arr[right];
        }
    }
    for (int i=0;i<=left;i++){
        cout<<arr[i];
    }
    return 0;
 }*/

// Sum of Two Arrays
/*#include<iostream>
using namespace std;
int main(){
    int arr1[5];
    cout<<"enter the first array element:";
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }
    int arr2[5];
    cout<<"enter the second array elemnt: ";
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    int result[5] ;
    for(int i=0;i<5;i++){
        result[i]=arr1[i]+arr2[i];
        
    }
    for(int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }
    return 0;

}*/
// binary seach
#include<iostream>
using namespace std;

int main()
{
    int arr[9];
    cout << "Enter the sorted array: ";
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element to search: ";
    cin >> element;
    int left = 0;
    int right = 8;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == element){
            cout << "Element Found at index " << mid;
            return 0;
        }
        else if(element > arr[mid]){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout << "Element Not Found";
    return 0;
}