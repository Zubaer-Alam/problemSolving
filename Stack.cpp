#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int showstack(stack<int> s)
{
    cout<<endl;
    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
        cout<<endl;
    }
}

int main()
{
    stack <int> s;
    int size,choice;
    cout<<"Enter Size of Stack:";
    cin>>size;

    for (int i=0; i<size; i++)
    {
        int element;
        cin>>element;
        s.push(element);
    }

    showstack(s);

    cout<<"How many operations?:";

    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        cout<<endl;
        cout<<"1:Pop() and show | 2:push() | 3:show the stack:";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {

        case (1):
            cout<<"The topmost element "<<s.top()<<" is removed!!";
            s.pop();
            break;

        case (2):
            int element;
            cin>>element;
            s.push(element);
            cout<<element<<" successfully added to stack!!";
            break;

        case (3):
            showstack(s);
            break;
        }
    }
}




