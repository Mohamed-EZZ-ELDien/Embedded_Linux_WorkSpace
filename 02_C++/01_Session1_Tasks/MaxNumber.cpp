#include<iostream>
int main()
{
    int number;
    int max=-999999;
    int min=999999;
    int i;
    for(i=0;i<3;i++)
    {
        std::cout<<"PLS Insert Number["<<i<<"]:";
        std::cin>>number;
        if(number>max)
        {
            max=number;
        }
        if(number<min)
        {
            min=number;
        }
    }
    std::cout<<"Maximum Number= "<<max<<std::endl;
    std::cout<<"Minimum Number= "<<min<<std::endl;
    return 0;
}