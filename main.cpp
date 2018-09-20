//Authors: Serina Garcia
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstName;
  string lastName;

  //get user input
  cout<<"What is your first name?\n";
  cin>>firstName;

  cout<<"what is your last name?\n";
  cin>>lastName;
  
  cout<<"Welcome, "<<firstName[0]<<"."<<lastName[0]<<"., here is your fortune..."<<endl;
  
  //tell fortune
  cout<<"Your Lucky Number is "<<firstName.length()<<"!"<<endl;

  return 0;
}
