#include <iostream>

using namespace std;

int oddoreven(int x){
    if ((x%2)==0)
        cout<<"Even";
    else
        cout<<"Odd";
}

int main (){
    int i;
    do{
        cout<<"Enter Digit(0 to exit)";
        cin>>i;
        cout<<endl;
        oddoreven(i);
    }while(i!=0);
    return 99;
}
