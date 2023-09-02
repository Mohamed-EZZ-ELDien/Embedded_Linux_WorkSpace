#include<iostream>
int main()
{
    char vowel[5]={'a','i','o','e','u'};
    char letter;
    std::cout<<"PLS Insert Letter:";
    std::cin>>letter;
    int i;
    for(i=0;i<4;i++)
    {
        if(letter==vowel[i]||letter==vowel[i]-32)
        {
            std::cout<<"Letter Is Vowel"<<std::endl;
            return 0;
        }        
    }
    std::cout<<"Letter Not Vowel"<<std::endl;
    return 0;
}