#include<iostream>
using namespace std;

int SumI(int iNo)
{
    int iSum=0;
    while(iNo!=0)
    {
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
    }
    return iSum;
}

int SumR(int iNo)
{
    static int iSum=0;
    if(iNo!=0)
    {
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
        SumR(iNo);
    }
    return iSum;
}
int main()
{
    int x=0;
    int iRet=0;

    cout<<"Enter the Number : "<<"\n";
    cin>>x;
    
    iRet=SumR(x);
    cout<<"Sum of Digit is : "<<iRet<<"\n";
    return 0;
}