#include <iostream>
using namespace std;
int main()
{
    int ar[5] = {101, 102, 103, 104, 105};
    int entry[10];
    int count[5] = {0};
    cout << "Enter 10 Book IDs: ";
    for(int i=0;i<10;i++)
    {
        cin >> entry[i];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
        if(entry[i]==ar[j])
        {
         count[j]++;
              break;
        }
        }
    }
    int max=count[0];
    int book=ar[0];

    for (int i=1;i<5;i++)
    {
        if (count[i]>max)
        {
            max=count[i];
            book=ar[i];
        }
    }

    cout << "Most taken book ID: " << book;

    return 0;
}
