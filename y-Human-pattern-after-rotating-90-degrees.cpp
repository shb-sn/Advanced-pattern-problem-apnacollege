#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if (i==1||i==n||j==1||j==n){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            if (i==1||i==n||j==1||j==n){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
           if (i==1||i==n||j==1||j==n){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=i; j++){
            if (i==1||i==n||j==1||j==n){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
return 0;
}
