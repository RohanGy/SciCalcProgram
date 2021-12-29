
#include "SciCalcVer1.hpp"
#include <iostream>
#include<limits>
/*
int main(int argc,const char* argv[])
{
    char decision  = 'y';
    while(decision == 'y')
    {
        float a = 0;
        float b = 0;
        char inpOperator;
   
        printf("enter val for a:\n");
        while(!(std::cin >> a)){
            std::cin.clear();
            std::cin.ignore();
            printf("invalid val for a,please try again:\n");
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        printf("enter expression(*,+,-,/)\n");
        while(! ( (std::cin >> inpOperator) && ( (inpOperator == '+') || (inpOperator == '-') || (inpOperator == '/') || (inpOperator == '*') ) ) ){
            std::cin.clear();
            std::cin.ignore();
            printf("invalid operator,please try again:\n");
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
        }
        printf("enter val for b:\n");
        while(!(std::cin >> b)){
            std::cin.clear();
            std::cin.ignore();
            printf("invalid val for b,please try again:\n");
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        switch(inpOperator)
        {
            case '+':
                std::cout << "Result: " << a+b << std::endl;
                break;
            case '-':
                std::cout << "Result: " << a-b << std::endl;
                break;
            case '/':
                std::cout << "Result: " << a/b << std::endl;
                break;
            case '*':
                std::cout << "Result: " << a*b << std::endl;
                break;
            default:
                printf("invalid operator\n");
        }
        printf("do you want to continue(y/n):");
       
        while(!( (std::cin >> decision) || (decision == 'y') || (decision == 'n'))){
            std::cin.clear();
            std::cin.ignore();
            printf("invalid choice,try again:");
        }

        
    }
    return 0;
}
*/

