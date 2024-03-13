#include<iostream>
using namespace std;

double f(double x){
    double t = 1/(1+x*x);
    // double t = (2.0*x) - (x*x);
    return t;
}

int main(){
    int n,i; // n for subintervals
    double a, b, h, sum = 0, integral;
    cout<<"Enter the limits of the integration,\nInitial Limit,a = ";
    cin>>a;
    cout<<"Final limit,b = ";
    cin>>b;
    cout<<"Enter the number of subintervals,n = ";
    cin>>n;
    
    if(n % 2 != 0){
        cout<<"The number of subintervals should be even";
        return 0;
    }
    double x[n+1], y[n+1];
    h = (b-a)/(double)n; // width of the subintervals

    for(i = 0; i <= n; i++){
        x[i] = a + i*h;
        y[i] = f(x[i]);
    }
    for(i = 1; i < n; i++){
        if(i % 2 == 0){
            if(i % 4 == 0){
                sum += 14.0 * y[i];
            }
            else{
                sum += 12.0 * y[i];
            }
        }
        else{
            sum += 32.0 * y[i];
        }
    }
    integral = 2.0 * h / 45.0 * (sum + 7.0*y[0] + 7.0*y[n]);
    
    cout<<"The value of integral is "<<integral<<endl;

    return 0;
}   