#include<iostream>
using namespace std;
bool checkEven(int iNo)
{
    //Logic

    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;

    bool bRet=checkEven(iNo);

    if(bRet==true)
    {
        cout<<"Number is Even"<<endl;
    }
    else
    {
        cout<<"NUmber id Odd"<<endl;
    }

    
    return 0;
}