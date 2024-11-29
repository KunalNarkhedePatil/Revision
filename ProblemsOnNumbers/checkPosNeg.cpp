#include<iostream>
using namespace std;
bool checkPosNeg(int iNo)
{
    if(iNo>0)
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
    int iValue=0;

    cout<<"Enter iValue"<<endl;
    cin>>iValue;

    bool bRet=checkPosNeg(iValue);

    if(bRet==true)
    {
        cout<<"Number is Positive"<<endl;
    }
    else
    {
        cout<<"Number is Negative"<<endl;
    }
    return 0;
}