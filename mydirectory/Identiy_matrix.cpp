#include<iostream>
using namespace std;

int main(){
    int n; 

    printf("Enter the size: ");
    cin>>n;

    cout<<"\nIdentity matrix of size "<<n<<": \n";
    
    //priting square matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;  
    }
    return 0;
}