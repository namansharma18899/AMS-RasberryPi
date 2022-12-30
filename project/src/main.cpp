#include<iostream>
using namespace std;
    class company{
        public : 
        string name;
        void input( string n){
            name = n ;
            
        }
        void display(){
            cout << name;
        }
    };

int main(){
        company c;
        c.input("Spacex");
        c.display();
        
        
    return 0;
}