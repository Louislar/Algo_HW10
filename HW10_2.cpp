#include<iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;

    for(int q=0;q<t;q++)
    {

        int classA[3]={0};
        int classALength=0;
        int classB[3]={0};
        int classBLength=0;

        int totalStuNum=0;
        cin>>totalStuNum;

        int flag1=0;
        int pre=-1;
        for(int i=0;i<totalStuNum;i++)
        {
            int tempInput=0;
            cin>>tempInput;
            if(pre>tempInput) flag1=1;
            if(flag1==0)
            {
                if(classALength>=3) flag1=2;
                else{
                    classA[classALength]=tempInput;
                    classALength++;
                }
            }
            if(flag1==1)
            {
                if(classBLength>=3) flag1=2;
                else{
                    classB[classBLength]=tempInput;
                    classBLength++;
                }
            }
            if(flag1==2)
            {

            }
            pre=tempInput;
        }

        //test
        /*for(int i=0;i<classALength;i++)
            cout<<classA[i]<<" ";
        cout<<endl;
        for(int i=0;i<classBLength;i++)
            cout<<classB[i]<<" ";*/
        //test end

        int output[3]={0};
        int outputLength=0;

        if(q!=0) cout<<endl;
        {// find output
        int i=0;
        int j=0;
        while(1)
        {
            if(outputLength>=3||i>=classALength||j>=classBLength) break;
            if(classA[i]<classB[j])
            {
                cout<<"A";
                output[outputLength]=classA[i];
                outputLength++;
                i++;
            }
            else if(classA[i]>classB[j])
            {
                cout<<"B";
                output[outputLength]=classB[i];
                outputLength++;
                j++;
            }
        }
        while(outputLength<3)
        {
            if(i>=classALength)
            {
                cout<<"B";
                output[outputLength]=classB[i];
                outputLength++;
                j++;
            }
            if(j>=classBLength)
            {
                cout<<"A";
                output[outputLength]=classA[i];
                outputLength++;
                i++;
            }

        }
        }// find output end
    }
}
