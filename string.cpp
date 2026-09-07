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
/*#include <iostream>
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
}*/
// array of strings
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string names[5];
    for(int i=0;i<5;i++){
        getline(cin,names[i]);
    }
    for(int i=0;i<5;i++){
        cout<<names[i]<<" ";
    }
    return 0;
}*/

// check no of vowels ,consonants and space
/*#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int vowels=0;
    int consonants=0;
    int digit=0;
    int space=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            digit++;
        }
        else if(str[i]==' '){
            space++;
        }
        else{
            consonants++;
        }
    }
    cout<<"vowels"<<vowels<<endl;
    cout<<"consonants"<<consonants<<endl;
    cout<<"space"<<space<<endl;
    cout<<"digit"<<digit<<endl;
    
    return 0;
}*/

//
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i=0; i<str.length(); i++) {
        bool alreadyPresent = false;

        for (int j=0;j<result.length(); j++) {
            if (str[i]==result[j]) {
                alreadyPresent = true;
                break;
            }
        }
        if(!alreadyPresent) {
            result+=str[i];
        }
    }
    cout << "String after removing duplicates: " << result;
    return 0;
}*/

// first non repeating character
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){        // value of i will remain fixed untill the inner loop travels through every elemnt and then outerloops value will get increment than repeat till every elemnt  
        int count=0;                
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"first non repeating char "<<str[i];
            break;
        }
    }      
    return 0;
}*/

// first repeating char
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string :";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>1){
            cout<<"first repeating letter is: "<<str[i];
            break;
        }
    }
    return 0;
}*/

//two strings are anagrams(check if they contain the same char and same frequency)
// most frequent char
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    int maxcount=0;
    char maxchar;

    for(int i=0;i<str.length();i++){
        int count=0;
        
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxchar=str[i];
        }
    }
    cout<<"max frequent char is : "<<maxchar;
    return 0;
}*/
// string rotation
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    string goal;

    cout<<"enter the string: ";
    getline(cin,str);

    cout<<"enter the goal: ";
    getline(cin,goal);

    int length_str=str.length();
    int length_goal=goal.length();
    bool goal_achieved=false;

    if(length_str!=length_goal){
        cout<<"Not a rotation";
        return 0;
    }

    for(int i=0;i<length_str;i++){
        rotate(str.begin(),str.begin()+1,str.end());
        if(str==goal){
            goal_achieved=true;
            break;
        }
    }

    if(goal_achieved){
        cout << "Strings are rotations";
    }
    else{
        cout << "Strings are not rotations";
    }

    return 0;
}*/
//find how many times a particular word occurs in the string.
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    string goal;

    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<"Enter the goal: ";
    getline(cin, goal);

    int count=0;
    int start=0;

    while (start<str.length()) {

        int pos=str.find(' ',start);

        if (pos==string::npos) {
            pos=str.length();
        }
        string word=str.substr(start, pos-start);
        if (word==goal) {
            count++;
        }
        start=pos+1;
    }

    cout << "Total count is: " << count;
    return 0;
}*/

// remove the goiven goal

/*#include<iostream>
#include<string>
using namespace  std;
int main(){
    string str;
    string goal;

    cout<<"enter the string: ";
    getline(cin,str);

    cout<<"enter the goal: ";
    getline(cin,goal);

    int start = 0;

    while(start<str.length()){
        int pos=str.find(goal,start);          // finds space 
         if(pos==string::npos){               // if string is not found
            break;
         }
          str.erase(pos, goal.length());       // removes the string
    }
    cout<<"string after removing: "<<str<<endl;
    return 0;
}*/

// replacing a substring
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string goal;
    string replace;

    cout<<"enter the string: ";
    getline(cin,str);

    cout<<"enter the goal";
    getline(cin,goal);

    cout<<"enter the replace: ";
    getline(cin,replace);

    int start=0;

    while(start<str.length()){

        int pos=str.find(goal,start);

        if(pos==string::npos){
            break;
        }
        str.erase(pos,goal.length());
        str.insert(pos,replace);
    }
    cout<<"the new string is "<<str<<endl;
    return 0;
}*/

// string comperession
/*#include<iostream>
        #include<string>
    using namespace std;
    int main(){
        string str;
        cout<<"enter the string ";
        getline(cin,str);

        for(int i=0;i<str.length();i++){
            int count = 1;
            
            while(i+1 < str.length() && str[i]==str[i+1]){              // checks the next elemt exist and is it equal to i
                count++;
                i++;
            }
            cout<<str[i]<<count;
        }
        return 0;
}*/

// remove consecutive duplicate
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        while(i+1<str.length() && str[i]==str[i+1]){
            str.erase(i+1,1);
        }
    }
    cout<<str;
    return 0;
}*/

// remove all space
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;
    return 0;
}*/
// remove duplicate character
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string : ";
    getline(cin,str);

    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;
    return 0;
}*/