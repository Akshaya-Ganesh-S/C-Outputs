#include <iostream>
#include <string>
using namespace std;
class Students{

private:
      int regno;
      string name;

public:
    Students(int r,string n){
        regno = r;
        name = n;
        cout<<"Object created"<<endl;
     }
     void display(){
   
     cout << "Registration Number: " << regno << endl;
     cout << "Name: " << name << endl;
     }

 ~Students(){
     cout << "Decimation of object" << endl;
     }
};
int main(){
   Students boba(007,"Akshay");
   boba.display();
   return 0;

} 
