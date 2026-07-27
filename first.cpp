/*Write a C++ program that takes the following inputs:
Student's name
Student's age
Student's branch
Print the output exactly in this format:*/

/*#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    string branch;
    cin>>name>>age>>branch;
    cout<<"Hello"<<name<<endl;
    cout<<"Your age is"<<age<<endl;
    cout<<" Your branch is"<<branch<<endl;
    cout<<"welcome to c++ programming"<<endl;
    return 0;
}*/

/*Write a program that accepts the length and width of a rectangle.
Print:Area   Perimeter
#include<iostream>
using namespace std;
int main(){
    int lenght;
    int width;
    cout<<"enter the lenght"<<endl;
    cin>>lenght;
    cout<<"enter the width"<<endl;
    cin>>width;
    cout<<"Area is:"<< lenght*width<<endl;
    cout<<"parimeter is"<<2*(lenght+width)<<endl;

    return 0;
}*/
/*Simple Interest:Take,Principal,
Rate,Time,Calculate[Simple Interest = (P × R × T)/100]

#include<iostream>
using namespace std;
int main(){
    int principal;
    int rate;
    int time;
    cout<<"enter the principal";
    cin>>principal;
    cout<<"enter the rate";
    cin>>rate;
    cout<<"enter the time";
    cin>>time;
    cout<<"the simple interest:"<<principal*rate*time/100;
    return 0;
}*/
/*Input marks of five subjects.
Print,Total Marks,Percentage

#include<iostream>
using namespace std;

int main() {
    float english_marks;
    float hindi_marks;
    float maths_marks;
    float sst_marks;
    float science_marks;

    cout << "Enter the English marks: ";
    cin >> english_marks;

    cout << "Enter the Hindi marks: ";
    cin >> hindi_marks;

    cout << "Enter the Maths marks: ";
    cin >> maths_marks;

    cout << "Enter the SST marks: ";
    cin >> sst_marks;

    cout << "Enter the Science marks: ";
    cin >> science_marks;

    float total = english_marks + hindi_marks + maths_marks + sst_marks + science_marks;
    float percentage = (total / 500) * 100;

    cout << "The total marks are: " << total << endl;
    cout << "The percentage is: " << percentage << "%" << endl;

    return 0;
} */

/*Temperature Converter
Input temperature in Celsius.
Print temperature in Fahrenheit.
Formula [F = (C × 9/5) + 32]
#include<iostream>
using namespace std;
int main(){
    float celsius;
    cin>>celsius;

    float fahrenheit =(celsius *9/5) + 32;
    cout<<"the fahrenheit is : "<<fahrenheit;
    return 0;
}*/
/*Swap the number
#include<iostream>
using namespace std;
int main(){
    int x=2;
    int b=3;
    int temp;
    temp=x;
    x=b;
    b=temp;
    cout << "a = " << x << endl;
    cout << "b = " << b << endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of y";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"the value of x"<<x<<endl;
    cout<<"the value of y"<<y<<endl;
    return 0;
}*/
/*Digit Breakdown
Input a three-digit number.

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of: ";
    cin>>x;
    while (x>0){
        int temp=x%10;
        cout<<temp<<endl;
        x=x/10;
    }
   return 0; 
    
}*/
/*
#include<iostream>
using namespace std;
int main(){
    float time;
    string unit;
    cout<<"enter the time";
    cin>>time>>unit;
    if(unit =="hr"){
        time =time *3600;
        cout<<"total seconds are"<<time;
    }
    else {
        time =time*60;
        cout<<"the total seconds are"<<time;
    }
return 0;
    
}*/
/*12 th question greedy
#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"enter the amounnt"<<endl;
    cin>>amount;

    int note500=amount/500;
    amount = amount%500;
    int note200=amount/200;
    amount=amount%200;
    int note100=amount/100;
    amount=amount%100;
    int note50=amount/50;
    amount=amount%50;
    int note20=amount/20;
    amount=amount%20;
    int note10=amount/10;
    amount=amount%10;
    int coin5=amount/5;
    amount=amount%5;
    int coin2=amount/2;
    amount=amount%2;
    int coin1=amount/1;
    amount=amount%1;

    cout<<"total number of 500 notes required:"<<note500<<endl;
    cout<<"total number of 200 notes required:"<<note200<<endl;
    cout<<"total number of 100 notes required:"<<note100<<endl;
    cout<<"total number of 50 notes required:"<<note50<<endl;
    cout<<"total number of 20 notes required:"<<note20<<endl;
    cout<<"total number of 10 notes required:"<<note10<<endl;
    cout<<"total number of 5rs coin required:"<<coin5<<endl;
    cout<<"total number of 2rs coin required:"<<coin2<<endl;
    cout<<"total number of coin1 notes required:"<<coin1<<endl;

    return 0;


#include<iostream>
using namespace std;
int main(){
    int hours,mins;
    cout<<"enter the hours:"<<endl;
    cin>>hours;
    cout<<"enter the mins:"<<endl;
    cin>>mins;
    mins=mins+1;
    if(mins==60){
        mins=0;
        hours=hours+1;
        if(hours==24){
            hours=00;}
        cout<<hours<<":"<<mins<<endl;    
    }
    else{
        cout<<hours<<":"<<mins<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    cout<<"ASCII values of the character is: "<<(int)ch;
    return 0;
15th
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    cout<<"the previous letter is"<<char(ch-1)<<endl;
    cout<<"the next letter is "<<char(ch+1)<<endl;
    return 0;

}*/

/*Write a program that:
Creates a void printNumber() function.
Takes an integer input from the user inside the function.
Prints the number inside the function.
In main(), only call the function.
#include<iostream>
using namespace std;
void printnumber(){
    int n ;
    cout<<"enter the number: "<<endl;
    cin>>n;

    cout<<"the number is: "<<n;
} 
int main(){ 
    printnumber();
    return 0;
}*/

/*Write a program that creates a function named greet()
#include<iostream>
using namespace std;
void greet(){
    string name;
    cout<<"enter your name: ";
    cin>>name;

    cout<<"Hello "<<name<<"! I hope you are ding well and lets start coding";

}
int main(){
    greet();
    return 0;
}*/
/*Square of a Number Using Function
#include<iostream>
using namespace std;
void square(int n){
    n = n*n;
    cout<<" the square is: "<<n;
}
int main(){
    square(19);
    return 0;
}*/
/*Write a C++ program that determines whether a number is even or odd using a function.
#include<iostream>
using namespace std;
void number(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    if (n%2==0){
        cout<<"the number is even"<< endl;
    }
    else{cout<<"the number is odd";}
}
int main(){
    number();
    return 0;
}*/
/*Reverse a Number Using a Function
#include<iostream>
using namespace std;
void reverse(){
    int n ;
    cout<<"enter the number:";
    cin>>n;
    int temp;

    while(n>0){
        temp=n%10;
        cout<<temp;
        n=n/10;
    }
}
int main(){
    reverse();
    return 0;
}*/
/* sum of digits
#include<iostream>
using namespace std;
void sum(){
    int n ;
    cout<<"enter the number:";
    cin>>n;
    int sum =0;
    int digit;

    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
}cout<<sum;}
int main(){
    sum();
    return 0;
}*/
/*count
#include<iostream>
using namespace std;

void countDigits(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int digit;
    int count=0;
    while(n>0){
        digit=n%10;
        count=count+1;
        n=n/10;
    }

    cout<<count<<endl;
}

int main(){
    countDigits();
    return 0;
}*/
// return function
/*#include<iostream>
using namespace std;
int multiplication(int a,int b){
    return a*b;
}

int main(){
    int x=multiplication(5,6);
    cout<<x;
    return 0;
}*/
