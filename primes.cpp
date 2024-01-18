
/********ZIHAN_13**********/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define n 10000
int pr[1000001];

void primes(){
    pr[0]=pr[1]=1;
    for(int i=2; i<=sqrt(1000000) ; i++){
        if(pr[i]==0){
            //pr[i]=cnt++;
            for(int j=i*i; j<=(1000000); j+=i){
                pr[j]=1;
            }
        }
    }
    

}

int main(){
    primes();
    for(int i=0 ; i<=1000000; i++){
        if(pr[i]==0){
            cout << i << " ";
        }
    }
    
}
