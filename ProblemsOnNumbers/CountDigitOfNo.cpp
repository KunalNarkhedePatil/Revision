#include<iostream>
using namespace std;
int CountDigitOfNumber(int iNo)
{
    int iCount=0;

    while(iNo!=0)
    {
        iCount++;
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;

    cout<<"Enter the Value"<<endl;
    cin>>iValue;


    int iRet=CountDigitOfNumber(iValue);

    cout<<"Number of digit in number is "<<iRet<<endl;



    
    return 0;
}