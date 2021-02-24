#include <iostream>
#include <fstream>
#include <math.h> 
using namespace std; 

bool save;
string firstName; 
string pass; 
string email; 

class acount {




public: 

void makeAcount(){
std::cout<<"Enter your email:" << endl; 
std::cin >> email; 
std::cout<<"First Name:" << endl; 
std::cin >> firstName; 
std:cout<< "Last Name:" <<endl; 
std::cin >> lastName; 
std::cout<< "Password" <<endl; 
std::cin >> pass; 
std::cout << "Do you want to save your acount?(true/false)";
std::cin >> save; 






               



}
void login(){
std::cout<<"Enter your email:" << endl; 
std::cin >> email; 
std::cout<<"Enter your password: " << endl; 
std::cin >> firstName; 




}



private: 
    string firstName; 
    string lastName; 


};






int main(){


acount app; 

app.makeAcount(); 

if(save == true)
{
ofstream myfile;
  myfile.open ("sa.dat");
  myfile << email << "\n";
  myfile <<pass <<"\n";
  myfile.close();
  return 0;

}


  







}

