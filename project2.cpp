#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){

int guess_number;
int random_number;
int i=5;

srand(time(0));

random_number=rand()%11;
cout<<"\nWelcome to the number guessing game";

while(i<=5){
    
    cout<<"\nGuess the number between 1 to 10: ";
    cin>>guess_number;

    if(random_number==guess_number){
        cout<<"\nCongratulations!!! You have made the correct guess.";
        break;
    }else{
        cout<<"\nWrong Guess You Have "<<i-1<<" Chances Left";
        i--;
        if(i==1){
            cout<<"\nYou Lost Correct Answer is : "<<random_number;
        }
    }

}



    return 0;
}