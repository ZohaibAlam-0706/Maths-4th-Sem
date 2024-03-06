#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter the number of data points: ";
    cin>>n;
    double sum = 1, a, x[n], y[n], ans = 0;
    for(i = 0; i < n; i++){
        cout<<"Enter the value of x"<<i+1<<": ";
        cin>>x[i];
        cout<<"Enter the value of function corresponding to x"<<i+1<<": ";
        cin>>y[i];
    }
    cout<<"Enter the value of x for which you want to find the value of the function: ";
    cin>>a;

    for(i = 0; i < n; i++){
        sum = 1;
        for(j = 0; j < n; j++){
            if(i != j){
                sum *= (a - x[j])/(x[i]-x[j]);
            }
        }
        sum *= y[i];
        ans += sum;
    }
    cout<<"The value of the function at x = "<<a<<" is "<<ans<<endl;

    return 0;
}