#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 40; i++)
    {
        for (int j = i+1; j <= 50; j++)
        {
            for (int k = j+1; k <= 60; k++)
            {
                int sum = i + j + k;
                if ((i*i) + (j*j) == (k*k) && sum == 120)
                {
                    cout<<i<<","<<j<<","<<k<<"  ";
                }
                
            }
            
        }
        
    }
    
    return 0;
}