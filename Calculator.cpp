#include <iostream>

int main()

{
    std::cout <<"**************Simple Calculator*******************************"<<'\n';
    double num1, num2, result;
    int ch;
    char op;
    std::cout <<" Enter the first two numbers"<<'\n';
    std::cin>> num1;
    std::cin>> num2;
    do{
    std::cout <<"Choose the operation to be performed"<<'\n';
    std::cout <<"Addition (+)"<<'\n';
    std::cout <<"Subtraction (-)"<<'\n';
    std::cout <<"Multiplication(*)"<<'\n';
    std::cout <<"Division(/)"<<'\n';
    std::cout << "Option Selected= ";
    std::cin>>op;
    bool valid_op=true;
 switch(op)
 {
    case '+': result=num1+num2;
              break;
    case '-': result=num1-num2;
              break;
    case '*': result=num1*num2;
              break;         
    case '/': if(num2!=0)
              { result=num1/num2;
              }
              else{
                std::cout<<"Invalid division"<<'\n';
                valid_op = false;
              }
              break;
    default: std::cout <<"That's not a valid operation"<<'\n';
    valid_op = false;
    break;
 }
 if(valid_op)
 {  std::cout<<result<<'\n';
    num1=result;
 }
 std::cout<<"Do you still have operations to be performed(Yes=1 / No=0)?"<<'\n';
   std::cin>> ch;
if(ch!=0){
    std::cout<<"Enter New number to be calculated"<<'\n';
    std::cin>>num2;
}

}while(ch!=0);


std::cout<<"Thankyou :)"<<'\n';
std::cout <<"*******************************************************************";


}