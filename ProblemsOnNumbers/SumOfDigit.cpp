#include<iostream>
using namespace std;

int SumOfDigit(int iNo)
{
    int iSum=0;

    while(iNo!=0)
    {
        iSum=iSum+iNo%10;
        iNo=iNo/10;
    }
    return iSum;
}
int main()
{
    int iNo=0;

    cout<<"Enter Number"<<endl;
    cin>>iNo;


    int iRet=SumOfDigit(iNo);

    cout<<"Sum of digit is "<<iRet<<endl;


    return 0;
}