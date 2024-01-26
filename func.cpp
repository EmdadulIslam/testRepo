#include<iostream>
#include <string>
using namespace std;
void hbd(string name,int age);
int main(){

    string name;
    int age;
    cout<<"Enter your name:"<<endl;
    getline(cin,name);
    cout<<"Enter your age:"<<endl;
    cin>>age;
    hbd(name, age);
    
    return 0;

}

void hbd(string name,int age){
    cout<<"Happy Birthday "<< name <<". Your age is "<< age <<endl;
}