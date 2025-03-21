#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Contacts{
    string name;
    string mobile_number;
};

void add_contact(const string &filename){
    Contacts c;
    ofstream OutFile(filename,ios::app);
    cout<<"Enter name: ";
    getline(cin,c.name);
    cout<<"Enter MObile_no: ";
    getline(cin,c.mobile_number);

    OutFile<<c.name<<endl;
    OutFile<<c.mobile_number<<endl;

    cout<<"Data saved successfully\n\n";

    OutFile.close();

}


void view_contact(const string &filename){
    ifstream InFile(filename);
    string name,mobile_number;
    cout<<"Contact Details\n";

    while((getline(InFile,name))&&(getline(InFile,mobile_number))){
            cout<<"Name: "<<name<<endl;
            cout<<"Mobile number: "<<mobile_number<<endl;
            cout<<"--------------------------------------------"<<endl;
    }
}

int main(){
string filename="contacts.txt";
int choice;
 
do{
    cout<<"Welcome to the Contact Management System\n";
    cout<<"1.Add contact\n";
    cout<<"2.View contact\n";
    cout<<"3.Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();
    switch(choice){
        case 1:
        add_contact(filename);
        break;

        case 2:
        view_contact(filename);
        break;

        case 3:
        
        break;

        default:
        cout<<"Enter correct choice";
        break;
    }
    

    

}while(choice!=3);

return 0;

}