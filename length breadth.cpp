#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length>>breadth;
    int area = length*breadth; 
    int peri = 2*(length+breadth);
    cout<<peri<<endl;
    cout<<area<<endl;
    return 0;
}