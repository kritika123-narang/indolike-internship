#include<iostream>
using namespace std;
int main(){

int count=0;
double ans;
int check;

cout<<"Do you want to play the quiz game?(0 if you don't want to play/1 if you want to play) : ";
cin>>check;

if(check==1){
    cout<<"\n-----------Welcome to the quiz----------\n";

    cout<<"\n Ques 1: What is the smallest even prime number?\n";
    cout<<"Answer: ";
    cin>> ans;
    if(ans==2){
        count=count+1;
        cout<<"Correct Answer";
    }else{
        cout<<"Wrong Answer";
    }

    cout<<"\n Ques 2: How many sides does a decagan have?\n";
    cout<<"Answer: ";
    cin>>ans;
    if(ans==10){
        count=count+1;
        cout<<"Correct Answer";
    }else{
        cout<<"Wrong Answer";
    }

    cout<<"\n Ques 3: What is the value of pi upto two decimals?\n";
    cout<<"Answer: ";
    cin>>ans;
    if(ans==3.14){
        count=count+1;
        cout<<"Correct Answer";
    }else{
        cout<<"Wrong Answer";
    }

    cout<<"\n Ques 4: What is the value of sine at 90 degree?\n";
    cout<<"Answer: ";
    cin>>ans;
    if(ans==1){
        count=count+1;
        cout<<"Correct Answer";
    }else{
        cout<<"Wrong Answer";
    }

    cout<<"\n Ques 5: What is the maximum probability of the event to happen?\n";
    cout<<"Answer: ";
    cin>>ans;
    if(ans==1){
        count=count+1;
        cout<<"Correct Answer";
    }else{
        cout<<"Wrong Answer";
    }
}
else{
    cout<<"Okay,Thank you\n";
}

cout<<"\nCongratulations!!!,Your score is : "<<count;

    return 0;
}