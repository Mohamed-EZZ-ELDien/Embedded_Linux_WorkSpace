#include<iostream>
#include <string>
int main()
{
    std::cout<<"PLS Insert Number: ";
    int num;
    std::cin>>num;
    //Covert Number To String
    std::string numStr=std::to_string(num);
    int i;
    int sum=0;
    for(i=0;numStr[i];i++)
    {
      sum=sum+(numStr[i]-'0');
    }
     std::cout<<"Summation = "<<sum<<std::endl;
    return 0;
}