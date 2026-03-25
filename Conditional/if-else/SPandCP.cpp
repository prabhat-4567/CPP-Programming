#include<iostream>
using namespace std;
int main() {
    int cp, sp, profit;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    if (cp > sp){
        cout<<"35 lakh ka investment the to 36 lakh ka ghata kese ho gya"<<endl;
        cout<<"Loss: "<<cp - sp;
    }
    else  if(sp > cp){
        cout<<"Sabaas Beta, Bahut Acche, Profit Huya Hai"<<endl;
        cout<<"Profit: "<<sp - cp;
    }
    else{
        cout<<"No Profit, No Loss";
    }

    
}