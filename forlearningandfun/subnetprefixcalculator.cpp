
#include <iostream>
using namespace std;

int main(){

    int x, firstbrac, secondbrac, thirdbrac, fourthbrac;
    cout << "Please enter your subnet prefix \n";
    cin >> x;

    switch(x){

    case '32':
    cout << "Your subnet is 255.255.255.255";
           break;
        
    case '31':
    cout << "Your subnet is 255.255.255.254";
       break;
  
    case '30':
    cout << "Your subnet is 255.255.255.252";
        break;
  
    case '29':
    cout << "Your subnet is 255.255.255.248";
        break;
  
    case '28':
    cout << " Your subnet is 255.255.255.240";
        break;
  
    case '27':
    cout << "Your subnet is 255.255.255.224";
        break;
  
    case '26':
    cout << "Your subnet is 255.255.255.192";
        break;
  
    case '25':
    cout << "Your subnet is 255.255.255.128";
        break;
    
    case '24':
    cout << "Your subnet is 255.255.255.0";
        break;
    
    case '23':
    cout << "Your subnet is 255.255.254.0";
        break;
    
    case '22':
    cout << "Your subnet is 55.255.252.0";
        break;
    
    case '21':
    cout << "Your subnet is 255.255.248.0";
        break;
    
    case '20':
    cout << "Your subnet is 255.255.240.0";
        break;
    
    case '19':
    cout << "Your subnet is 255.255.224.0";
        break;
    
    case '18':
    cout << "Your subnet is 255.255.192.0";
        break;

    case '17':
    cout << "Your subnet is 255.255.128.0";
        break;
      
    case '16':
    cout << "Your subnet is 255.255.0.0";
        break;
      
    case '15':
    cout << "Your subnet is 255.254.0.0";
        break;
      
    case '14':
    cout << "Your subnet is 255.252.0.0";
        break;
      
    case '13':
    cout << "Your subnet is 255.248.0.0";
        break;
      
    case '12':
    cout << "Your subnet is 255.240.0.0";
         break;
      
    case '11':
    cout << "Your subnet is 255.224.0.0";
        break;

    case '10':
    cout << "Your subnet is 255.192.0.0";
        break;
        
    case '9':
    cout << "Your subnet is 255.128.0.0";
        break;
        
    case '8':
    cout << "Your subnet is 255.0.0.0";
        break;
        
     case '7':
     cout << "Your subnet is 254.0.0.0";
        break;
        
     case '6':
     cout << "Your subnet is 252.0.0.0";
        break;
        
      case '5':
      cout << "Your subnet is 248.0.0.0";
        break;
        
      case '4':
      cout << "Your subnet is 240.0.0.0";
        break;

      case '3':
      cout << "Your subnet is 224.0.0.0";
       break;
  
      case '2':
      cout << "Your subnet is 192.0.0.0";
        break;
  
      case '1':
      cout << "Your subnet is 128.0.0.0";
        break;

  
    
  
  
     return 0;

    }







    


}