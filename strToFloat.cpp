
#include <iostream>
#include<math.h>
#include<iomanip> 
double strToFloat(std::string iString);

double strToDouble(std::string iString)
{
    for(int i = 0; i < iString.length(); i++){
        if(isalpha(iString[i])){
          std::cout << "string not a decimal number" << std::endl;
          return 1;
        }
    }
    double num = 0.0;
    int j = 0;
    char charAtIndex;
    bool flag = 0;
    bool neg = 0; 
    for(int i = 0; i < iString.length(); i++){
        if(i== 0){
            if(iString[i] == '-'){
                neg = 1;
                i = 1;
                num = (iString[i] - '0');
                continue; 
            }
            num = (iString[i] - '0');
            continue; 
        }
        if(flag == 1)
        {
            j--;
        }
        
        charAtIndex = iString[i];
        if(charAtIndex != '.')
        {
          num *=  pow(10,1);
          num += (iString[i] -'0');
        }
        else if(charAtIndex == '.'){
          flag = 1;
        }
    }
    if(neg ==1)
    {
        num *= -1;
    }
    num *=  pow(10,j);
    return num; 
    
    
}
int main(int argc,const char* argv[]){
    std::cout << "string to double (5.2)" << strToDouble("5.2") << std::endl;
    std::cout << "string to double (20.2)" << strToDouble("20.2") << std::endl;
    std::cout << "string to double (term)" << strToDouble("a.2") << std::endl;
    std::cout << "string to double (2.321)" << strToDouble("2.321") << std::endl; 
    std::cout << "string to double (2.21232132)" << std::setprecision(9) << strToDouble("2.21232132") << std::endl;
    std::cout << "string to double (6.01)" << std::setprecision(4) << strToDouble("6.01") << std::endl;
    std::cout << "string to double (-1.0)" << std::setprecision(2) << strToDouble("-1.0") << std::endl;
   
    return 0; 
}
