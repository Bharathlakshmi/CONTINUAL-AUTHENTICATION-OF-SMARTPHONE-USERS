#include<iostream>
using namespace std;
/*
Given a string of odd length, print the string X format.
Examples :

Input: 12345
Output:
1       5
  2   4
    3
  2   4
1       5
*/
main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int a[n];
    cout<<"Enter Array : ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( i==j || i+j==n-1 )
                cout<<a[j];
            else
               cout<<" ";
        }
        cout<<endl;
    }

}
















