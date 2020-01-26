#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int oula(int n)
{
    int sum = 1;
    for(int i = 2; i*i <= n; i++)
	{
        int k = 0;
        while(n%i == 0) 
		{
            n /= i;
            k++;
        }
        if(k) sum *= ((int)pow(i*1.0,k-1))*(i-1);
    }
    if(n>1) sum *= (n-1);
    return sum;
}
int main(){
    int n;
    while(cin >> n,n){
        int sum = oula(n);
        cout << sum << endl;
    }
}
