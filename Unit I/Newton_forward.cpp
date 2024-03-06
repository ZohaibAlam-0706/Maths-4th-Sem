#include<iostream>
using namespace std;

int main(){
    float x[10],y[10][10];
    float yp, xi, p, f = 1, h;
    int n, i, j;
    cout<<"Enter number of entries"<<endl;
    cin>>n;
    cout<<"Enter data"<<endl;
    for(i = 0; i < n; i++){
        cin>>x[i]>>y[i][0];
    }

    cout<<"Enter the value of x for which you want the value of function: ";
    cin>>xi;
    h = x[1] - x[0];
    p = (xi - x[0])/h;
    yp = y[0][0];
    

    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }
    
    for(i = 1; i < n; i++){
        f = f * (p-i+1)/i;
        yp = yp + f * y[0][i];
    }
    cout.precision(4);
    cout<<"The value of function at x = "<<xi<<" is "<<yp<<endl<<endl;
        
    return 0;
}