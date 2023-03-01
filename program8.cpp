#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
    int iSum=0,i=0;
    while(i<iSize)
    {
        iSum+=Arr[i];
        i++;
    }
    return iSum;
}

int SumR(int Arr[],int iSize)
{
    static int iSum=0,i=0;
    while(i<iSize)
    {
        iSum+=Arr[i];
        i++;
        SumR(Arr,iSize);
    }
    return iSum;
}
int main()
{
    int iLength=0,i=0,iRet=0;
    int *p=NULL;

    cout<<"Enter Number of Elements : ";
    cin>>iLength;

    p=new int[iLength];

    cout<<"Enter the Elements : "<<"\n";
    for(int i=0;i<iLength;i++)
    {
        cin>>p[i];
    }

    iRet=SumR(p,iLength);
    cout<<"Addition is : "<<iRet;
    delete []p;
    return 0;
}