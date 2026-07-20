#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=0;//Stores how many times the array should be rotated.
    int n=0;//Temporarily stores the first element during rotation.

   int ar[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the number of items: ";
    cin>>x;

        for(int i=0;i<x;i++)
        {
            n=ar[0];
            for(int j=0;j<4;j++)
            {
                ar[j]=ar[j+1];
            }
            ar[4]=n;
            cout<<endl;
        }


        for(int i=0;i<5;i++)
        {
            cout<<ar[i]<<" ";
        }


    return 0;
}
