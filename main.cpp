#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len,len1,i,j,k;
        string a,b,c;
        cin>>a;
        len=a.size();
        len1=len/2;
        if(len%2==0)
        {
            for(i=0;i<len1;i++)
                b[i]=a[i];
            for(i=len1;i<len;i++)
                c[i]=a[i];
        }
        for(j=0;j<len1;j++)
         {
           for(k=0;k<len1;k++)
           {
                if(b[j]==c[k])
                    cout<<'YES';
                else
                    cout<<'NO';
           }
         }

    }
    return 0;
}
