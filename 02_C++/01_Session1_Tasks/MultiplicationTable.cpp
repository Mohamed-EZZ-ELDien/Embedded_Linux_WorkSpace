#include<iostream>
int main()
{
    std::cout<<"-------------------------"<<std::endl;
    std::cout<<"||Multiplication Table ||"<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
    int i,j;
    for(i=2;i<=12;i++)
    {
        for(j=1;j<=12;j++)
        {
            std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl;
        }
         std::cout<<"================="<<std::endl;
    }
    return 0;
    
}