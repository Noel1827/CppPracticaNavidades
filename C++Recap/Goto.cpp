#include <iostream>  
using namespace std;  
int main()  
{  
// ineligible:    
//          cout<<"You are not eligible to vote!\n";    
//       cout<<"Enter your age:\n";    
//       int age;  
//       cin>>age;  
//       if (age < 18){    
//               goto ineligible;    
//       }    
//       else    
//       {    
//               cout<<"You are eligible to vote!";     
//       }     



stupid:
cout << "Enter your age";
int age;
cin >> age;
if(age > 10){
    goto stupid;
} else cout << "You are not stupid\n";
} 