#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
    int iFact=1;
    
    while(iNo!=0)
    {
        iFact*=iNo;
        iNo--;
    }
    return iFact;
}

int FactorialR(int iNo)
{
    static int iFact=1;
    
    if(iNo!=0)
    {
        iFact*=iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}
int main()
{
    int x=0,iRet=0;
    cout<<"Enter Number : ";
    cin>>x;

    iRet=FactorialR(x);
    cout<<iRet;
    return 0;
}