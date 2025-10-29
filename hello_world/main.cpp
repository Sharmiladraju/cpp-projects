#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world Sharmi"<<endl;
    cout<<"Hiiii";
   
    int n;
     cin>>n;
    cout<<"printing triangle"<<endl;
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"Reverse printing traingle\n";
    for(int i=0;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;    }

    //system("pause>0");
    return 0;

}