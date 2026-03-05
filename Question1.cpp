#include<iostream>
#include "Question1.h"

#include<cmath>

namespace prc{

    void  getDifference(int n1,int n2, int n3){
        std:: cout << "Difference of "<< n1 << " and " << n2 << " is "<< std::abs(n1-n2)<<  "\n";
    }



    void isPrime(int n){
        int numOfDivisors = 2;//min number of divisors for any number
        for (int i = 2 ; i < n-1 && numOfDivisors == 2 ; ++i )
            if (n%i==0)
                ++numOfDivisors;

        if(numOfDivisors==2)
            std::cout << n<< " is a prime number."<<  "\n";
        else
            std::cout << n << " is not a prime number."<<  "\n";

    }

    void powerOf(int n,int x){
        int result = 1;
        for (int i = x ; i >= 1 ; --i )
            result*=n;
        std::cout << n <<  " to the power " << x << " is "<< result<< "\n";
    }

    void sumOfIndivDigit(int num){
    
        int sum = 0;
        int origNum = num;
        while(num > 0){
            sum+=num%10;
            num = num/10;
        }

        std:: cout << "Sum of number ' " << origNum << " ' digit's is : "<< sum << "\n";

    }

    void testQ1(){
        int choice,n,x;
        std::cout <<"++++++++++++++++++++++++++++++++++++++++++++QUESTION 1 TESTING IN PROGRESS...++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
        std::cout<< "To check enter your number choice:\n\n1. Check Power of n^x. \n2. Check the sum of digit \n3.Check if a number is Prime  . \n4. Check the difference of 2 numbers.\n\nEnter you choice : ";
        std::cin >> choice;
        std::string continueTesting = "";
        while (true)
        { 
           
            switch (choice)
            {
                case 1:
                    std::cout << "Enter number (base) : ";
                    std::cin >> n;

                    std::cout << "Enter number (exponent) : ";
                    std::cin >> x;

                    powerOf(n,x);
                    break;

                case 2:
                    std::cout << "Enter number : ";
                    std::cin >> n;
                    sumOfIndivDigit(n);

                    break;

                case 3:
                    std::cout << "Enter number : ";
                    std::cin >> n;
                    isPrime(n);

                    break;
                case 4:
                    std::cout << "Enter first number : ";
                    std::cin >> n;
                    std::cout << "Enter second number : ";
                    std::cin >> x;
                    getDifference(n,x);
                    break;
        
              
            }
            std::cout<<"Stop testing [- reply with Y -] ? : ";
            std::cin >> continueTesting;
            if(continueTesting == "Y")
                break;

            std::cout << "\nN not entered , hence testing continues\nEnter you choice : ";
            std::cin>>choice;
            
            
            
        }
    }
}