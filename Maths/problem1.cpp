//Find the prime numbers till n
//Sieve of Eratosthenes

#include <iostream>

using namespace std;

void PrintPrimes(int n){
    bool prime[n + 1];
    for(int i=0;i<=n;i++){
        prime[i] = true;
    }
    for(int i = 2;i * i <= n;i++){
        if(prime[i]){
            for(int j=2*i;j<=n;j+=i){
                prime[j] = false;
        }
        }
        
    }

    std::cout<<"Prime Numbers till "<<n<<" are:\n";

    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    cout<<"\n";

}

int main(){
    int n = 50;
    PrintPrimes(n);
    return 0;
}