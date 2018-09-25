//Authors: Serina Garcia
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstName;
  string lastName;
  int leng;

  //get user input
  cout<<"What is your first name?\n";
  cin>>firstName;

  cout<<"What is your last name?\n";
  cin>>lastName;
  leng = lastName.length() - 1;
  
  cout<<"Welcome, "<<firstName[0]<<"."<<lastName[0]<<"., here is your fortune..."<<endl;
  
  //tell fortune
  cout<<"your lucky number is "<<firstName.length()<<endl;

  if (firstName[0] == 'a' || firstName[0] == 'A'|| firstName[0]== 'i'|| firstName[0] =='I'|| firstName[0] == 'o' || firstName[0] == 'O' || firstName[0]=='U' || firstName[0] =='u'){
          cout<<"you are destined to be famous!\n";

  } else {
          cout<<"you should keep a low profile.\n";

  }

if ( lastName[leng] == 'a' || lastName[leng] == 'A' || lastName[leng] == 'e' || lastName[leng] == 'E' || lastName[leng] == 'i' || lastName[leng] == 'I' || lastName[leng] == 'o' || lastName[leng] == 'O' || lastName[leng] == 'u' || lastName[leng] == 'U'){
        cout<<"you have already met your true love.\n";

} else {
        cout<<"You haven't met your true love yet.\n";
       

}
cout<<"have a good day!\n";

  return 0;
}
