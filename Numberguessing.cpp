#include <iostream>
#include <ctime> //header file to be included for time(null) fn.
int main()
{
    srand(time(0)); //provides changineg seeds
    int n = (rand()%100)+1; //when rand no. divided by 100 leaves remainder from 0 to 99 so adding +1 to get 1 to 100 no.s
    int guess;
    int c=0;
    do
    { std::cout <<"Guess the number: "<<'\n';
        std::cin>> guess;
        c++;                 //for counting no. of tries. 
        if(guess>n){
            std::cout <<"Too high dear!"<<'\n';
        }
        else if(guess < n){
            std::cout <<"Too low dear!"<<'\n';
        }
        else{
            std::cout <<"The correct guess #: "<<guess <<" @ "<<c<<" no. of tries"<<'\n';
        }
        
    }while(guess!=n);

    

}