#include<iostream>
using namespace std;

int main(){

    for (int i = 2; ; i++)
    {
        int temp = i;
        int sum = 0;

        while (temp != 0)
        {
            int modules = temp % 10;
            modules = modules * modules * modules * modules * modules;
            sum = sum + modules;
            temp = temp / 10;
        }

        if(sum == i){
            cout<<i<<" ";
        }
        
    }

    return 0;
}