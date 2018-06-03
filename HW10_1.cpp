#include<iostream>

using namespace std;

int sumOfDigit(int a)
{
    if(a==0) return 0;
    else if(a==10) return 1;
    else if(a/10==0) return a;
    else if(a/10!=0) return 1+(a%10);
}

int main()
{
    int t=0;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int cNumber[16];
        char inputChar[16];
        for(int i=0;i<16;i++) //input
        {
            cin>>inputChar[i];
        }
        for(int i=0;i<16;i++)
        {
            cNumber[i]=inputChar[i]-'0';
        }
        //test
        /*for(int i=0;i<16;i++)
            cout<<cNumber[i]<<" ";*/
        //test end
        //input end

        int evenDigit[8]={0};
        int evenDigitSum=0;
        for(int i=0;i<8;i++)
        {
            evenDigit[i]=cNumber[i*2]*2;
        }
        // test
        /*for(int i=0;i<8;i++)
        {
            cout<<evenDigit[i]<<" ";
        }*/
        // test end

        for(int i=0;i<8;i++)
        {
            evenDigitSum+=sumOfDigit(evenDigit[i]);
        }
        //test
        /*cout<<evenDigitSum;*/
        //test end

        int oddDigitSum=0;
        for(int i=0;i<8;i++)
        {
            oddDigitSum+=cNumber[i*2+1];
        }
        /*cout<<oddDigitSum<<" ";*/


        int sum=oddDigitSum+evenDigitSum;
        if(t!=0) cout<<endl;
        if(sum%10!=0) cout<<"Invalid";
        else cout<<"Valid";

    }// for t end
}
