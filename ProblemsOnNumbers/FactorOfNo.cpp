#include<iostream>
using namespace std;

void FindFactorOfNumber(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        if(iNo%i==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;

    FindFactorOfNumber(iNo);
    return 0;
}