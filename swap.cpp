#include<iostream>
using namespace std;
    void swap(int* a,int* b){
    int temp= *a;
    *a = *b;
    *b = temp;}
int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<"before swap:num1 "<<num1<<"num2= "<<num2<<endl;
    cout<<"after swap:num1 "<<num2<<"num2= "<<num1<<endl;
}
