#include<iostream>
using namespace std;

int main(){

    int sum = 0,sum1 = 0,sum2 = 0,sum3 = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum1 = sum1 + (i*i);
    }

    cout<<"sum1 = "<<sum1<<endl;

    for (int i = 1; i <= 100; i++)
    {
        sum2 = sum2 + i;
    }

    sum3 = sum2 * sum2;

    cout<<"sum3 = "<<sum3<<endl;

    sum = sum3 - sum1;

    cout<<"sum = "<<sum;
    
    return 0;
}