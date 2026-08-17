// taking input and printing string
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    string str;
    cout<<"enter the string using cin";
    cin>>str1;      //will take only one word as input
    cin.ignore();
    cout<<"enter the string using getline";
    
    getline(cin,str);
    cout<<str1<<endl;
    cout<<str;
    return 0;
}*/
// counting characters without lenght.()
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="yashwi";
    int count=0;
    for(char ch: str ){
        count++;
    }
    cout<<str<<" "<<count;
    return 0;
}*/
// count  how many time a letter occured
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    
    char target;
    cout<<"enter the elemnt that you want to search:";
    cin>> target;

    int count =0;

    for(int i=0;i<str.length();i++){
        if(str[i]==target){
            count++;
        }
    }
    cout<< "the count is "<<count;
    return 0;
}*/
//count vowels
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    int count=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<" the counts of vowels is "<<count;
    return 0;
}*/
//count uppercase,lowercase and digit
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);

    int count_upercase=0;
    int count_lowecase=0;
    int count_numbers=0;
    int count=0;

for(int i=0;i<str.length(); i++){
    if(str[i]>='A' &&str[i]<='Z'){
        count_upercase++;
    }
    else if(str[i]>='a' &&str[i]<='z'){
        count_lowecase++;
    }
    else if(str[i]>='0' &&str[i]<='9'){
        count_numbers++;
    }
    else{
        count++;
    }
}
    cout<<"count of upercase "<<count_upercase<<endl;
    cout<<"count of lowerrcase "<<count_lowecase<<endl;
    cout<<"count of numbers "<<count_numbers<<endl;
    cout<<"count of special char "<<count<<endl;
    return 0;

}*/

// Reverse string
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin , str);
    
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}*/

// store the revrse string
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);

    string revrse;

    for(int i=str.length()-1;i>=0;i--){
        revrse+=str[i];
    }
    cout<<revrse;
    return 0;
}*/
// palidrome or not
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int left=0;
    int right=str.length()-1;
    bool palindrome =true;

    while (left<right) {
        if (str[left]!=str[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if(palindrome)
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";

    return 0;
}