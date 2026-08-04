/*#include<iostream>
using namespace std;
int main(){
    int matrix[3][2];
    int row=3;
    int cols=2;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
// Sum of all elements
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int cloumns=3;
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cloumns;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cloumns;j++){
            sum=sum+arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the sum is:"<<sum;
    return 0;
}*/
// largest element 
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int columns=3;
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
    }
    cout<<"the largest element is: "<<largest;
    return 0;
}*/
// Smallest element
/*#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    int rows=4;
    int columns=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int smallest=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]<smallest){
                smallest=arr[i][j];
            }
        }
    }
    cout<<"the smallest element is: "<<smallest;
    return 0;
}*/
// row wise sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int columns=3;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<columns;j++){
            sum=sum+arr[i][j];
        }
        cout<<"the sum of rows:"<<sum<<endl;
    }
    return 0;
}*/
// column waise sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int rows=5;
    int columns=5;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int j=0;j<columns;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
            sum=sum+arr[i][j];
        }
        cout<<"the colummns sum is :"<<sum;
    }
    return 0;
}  */     
// matrix transpose
/*#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    int rows=2;
    int column=2;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<column;j++){
        for(int i=0;i<rows;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
// primary diagonal sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    int sum =0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"the primary sum is:"<<sum;
    return 0;
}*/
//Secondary digonal sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    int sum =0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(i + j == rows - 1){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"the secondar digonal sum is:"<<sum;
    return 0;
}*/
//largest element in a row 
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0; i<rows;i++){
        int largest=arr[0][0];
        for(int j=0;j<column;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
        cout<<"the largest elemnt is row wise: "<<largest;
        cout<<endl;
    }
    
    return 0;
}*/
/*//smallest element 
#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0; i<rows;i++){
        int smallest=arr[0][0];
        for(int j=0;j<column;j++){
            if(arr[i][j]<smallest){
                smallest=arr[i][j];
            }
        }
        cout<<"the smallest elemnt is row wise: "<<smallest;
        cout<<endl;
    }
    
    return 0;
}*/

// linear search on 2D array
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{2,5,7}};
    int rows=3;
    int column=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"enter the elemnt that you want to search:";
    cin>>x;

    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++){
            if(arr[i][j]==x){
                cout<<"found the element:"<<x;
            }
        }
    }
    return 0;
}*/
// count even and odd digit in matrix
/*#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int rows=3;
    int column=3;
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]%2==0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }
    }
    cout<<"the even no are:"<<even_count<<endl;
    cout<<"the odd no. are:"<<odd_count<<endl;
    return 0;
}*/
// count positive, negative and zero in matrix
/*#include<iostream>
using namespace std;
int main(){
    int matrix[3][4];
    int rows=3;
    int column=4;
    int count=0;
    int positive_count=0;
    int negative_count=0;
     for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
     }
     for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]==0){
                count++;
            }
            else if(matrix[i][j]>0){
                positive_count++;
            }
            else{
                negative_count++;
            }
        }
     }
     cout<<"the no. of zeros are:"<<count<<endl;
     cout<<"the no.of positive no are: "<<positive_count<<endl;
     cout<<"the no. of negative no. are :"<<negative_count;
     return 0;
}*/
// row with maximum sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    int max_row =0;
    int maximum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0; i<rows;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maximum){
            maximum=sum;
            max_row=i;
            
        }
        
    }
    cout<<"the largest elemnt is row wise: "<<maximum<<" the row is: "<<max_row;
    cout<<endl;
    
    return 0;
}*/
//column wise maximum sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    int max_column =0;
    int maximum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int j =0; j<column;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
            sum=sum+arr[i][j];
        }
        if(sum>maximum){
            maximum=sum;
            max_column=j;
            
        }
        
    }
    cout<<"the smallest elemnt is row wise: "<<maximum<<" the row is: "<<max_column;
    cout<<endl;
    
    return 0;
}*/
//column wise minimum sum
/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int column=3;
    int min_column =0;
    int minimum=99999999;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int j =0; j<column;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
            sum=sum+arr[i][j];
        }
        if(sum<minimum){
            minimum=sum;
            min_column=j;
            
        }
        
    }
    cout<<"the largest elemnt is row wise: "<<minimum<<" the row is: "<<min_column;
    cout<<endl;
    
    return 0;
}*/
//row with minium sum
/*#include<iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int rows = 3;
    int columns = 3;

    int min = 99999;
    int min_row = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < columns; j++) {
            sum = sum + matrix[i][j];
        }

        if(sum < min) {
            min = sum;
            min_row = i;
        }
    }

    cout << "The minimum row sum is: " << min << endl;
    cout << "The row index is: " << min_row << endl;

    return 0;
}*/

//matrix addition
/*#include<iostream>
using namespace std;
int main(){
    int arr1[3][4];
    int rows2=3;
    int columns2=4;
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[3][4];
    int rows1=3;
    int columns1=4;
    cout<<"enter the elemnet:";
    for(int i=0;i<rows1;i++){
        for(int j=0; j<columns1;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[3][4];
    int rows=3;
    int columns=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}*/
// matrix subtraction
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[2][4];
//     int arr2[2][4];
//     int arr3[2][4];

//     int row=2;
//     int column=4;
//     cout<<"enter the first array:";
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin>>arr1[i][j];
//         }
//     }

//     cout<<"enter the second:";
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin>>arr2[i][j];
//         }
//     }

//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             arr3[i][j]=arr1[i][j]-arr2[i][j];
//             cout<<arr3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// matrix multiplication
/*#include<iostream>
using namespace std;
int main(){
    int arr1[2][3];
    int arr2[3][2];
    int result[2][2];
    
    int row1=2;
    int column1=3;
    int row2=3;
    int column2=2;
    
     
    cout<<"enter the value of 1st array:";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"enter the elemnt of 2nd array: ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            int sum=0;
            for(int k=0;k<column1;k++){
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            result[i][j]=sum;
        }  
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

// Spiral matrix
/*#include<iostream>
using namespace std;

int main() {
    int matrix[4][4];
    int rows = 4;
    int column = 4;

    cout << "Enter the array:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = column - 1;

    while(top <= bottom && left <= right) {

        // Top Row
        for(int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Right Column
        for(int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Bottom Row
        for(int i = right; i >= left; i--) {
            cout << matrix[bottom][i] << " ";
        }
        bottom--;

        // Left Column
        for(int i = bottom; i >= top; i--) {
            cout << matrix[i][left] << " ";
        }
        left++;
    }

    return 0;
}*/

///Rotate matrix by 90 degree
/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int matrix[3][3];
    int rows=3;
    int columns=3;
    cout<<"enter the array:";

    for(int i=0 ; i<rows;i++){
        for(int j=0; j<columns;j++){
            cin>>matrix[i][j];
        }
    }

    // tramspose
    for(int i=0;i<rows;i++){                           //
        for(int j=i+1;j<columns;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse
    for(int i=0;i<rows;i++){
    int right=columns-1;
    int left=0;
    while(left<right){
        swap(matrix[i][left],matrix[i][right]);
        left++;
        right--;
         }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// binary search
#include<iostream>
using namespace std;
int main(){
    int matrix[3][3];
    int rows=3;
    int columns=3;
    
    cout<<"enter the array:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>matrix[i][j];
        }
    }
    int element;
    cout<<"enter the element that you want to search";
    cin>>element;
    for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        int left= rows-1;
        int right=0;
        int middle=(left+right)/2;};
        if(matrix[i][j]>middle){
            for(int i=middle;i<=right;i++){
                if(element==matrix[i][j]){
                    cout<<"element found: "<<element;
                }
            }
            }
        }
        else if(matrix[i][j]<middle){
            for(int i= middle;i<=left;i++){
                if(element == martix[i][j]){
                    cout<<"element found:"<<element;
                }
            }
        }
        else if( matrix[i][j]==middle){
            cout<<"element found: "<<element;
        }
        else{
            cout<<"Element not found";
        }
        return 0;
    }

