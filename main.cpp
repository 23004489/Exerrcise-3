#include <iostream>

using namespace std;

int main()
{
  int option;
    cout << "WELOCME TO THE THE MATCH MAKER You are given 6 Individuals from whom one can be your match" << endl;
    cout<<"To determine your match select want you desire the most in a patner"<<endl;
    cout<<"1.A carring person"<<endl;
    cout<<"2.A loving person"<<endl;
    cout<<"3.A person who gives money"<<endl;
    cout<<"4.A good sense of humor"<<endl;
    cout<<"5.A wise person"<<endl;
    cout<<"6.An emotinal intellegent person"<<endl;
    cout<<"enter the one you desire"<<endl;
    cin>>option;
    if (option=1){
        cout<<"you are a match for Jacob"<<endl;    }
        else if (option=2)
    {
        cout<<"you are a match for Jake"<<endl;
    }
    else if(option=3){
        cout<<"you are a match for Una"<<endl;
    }
    else if(option=4){
        cout<<"you are a match for Meshack"<<endl;
    }
    else if (option=5){
        cout<<"you are a match for Travis"<<endl;
    }
    else{
        cout<<"you are a match for Vhugala"<<endl;
    }
    return 0;
}
