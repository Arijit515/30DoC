#include<iostream>
using namespace std;
int main()
{
    int arr[100],tot,i,num,arrTemp[50],j=0,chk=0;
    cout<<"Enter the size of the array:";
    cin>>tot;
    cout<<"Enter"<<tot<<"Array Elements:";
    for(i=0;i<tot;i++)
    {
        if(arr[i]==num)
        {
            arrTemp[j]=i;
            j++;
            chk++;
        }
    }
if (chk>0)
{
    cout<<"\nNumber Found at Index";
    tot=chk;
    for ( i = 0; i < tot; i++)
    cout<<arrTemp[i]<<" ";

}
else
cout<<"\nNumber is not found!!";
cout<<endl;
return 0;
}

        
    
    
