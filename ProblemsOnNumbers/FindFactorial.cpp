#include<iostream>
using namespace std;

int FindFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iFact=1;

    for(int i=1;i<=iNo;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;;

    int iRet=FindFactorial(iNo);

    cout<<"Factorial is "<<iRet<<endl;
    return 0;
}