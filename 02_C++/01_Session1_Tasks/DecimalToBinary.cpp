#include <bitset>
#include <iostream>
#include <string>

typedef std::bitset<32> _32bits;
typedef std::bitset<16> _16bits;
typedef std::bitset<8> _8bits;
typedef std::bitset<4> _4bits;

int main() 
{
  int choise;
  std::cout << "Decimal To Binary Press 0 && Binary To Decimal Press 1"<< std::endl;
  std::cin >> choise;
  switch (choise)   {
  case 0: {
    unsigned int num;
    std::cout << "PLS Insert Decimal Number: ";
    std::cin >> num;
    if (num <= 15)
     {
      std::cout << "Decimal Value = " << num << "    " << "Binary Value= " << _4bits(num) << std::endl;
      
    } 
    else if (num <= 255) {
      std::cout << "Decimal Value = " << num << "    " << "Binary Value= " << _8bits(num) << std::endl;
      
    } 
    else if (num <= 32768) 
    {
      std::cout << "Decimal Value = " << num << "    " << "Binary Value= " << _16bits(num) << std::endl;
      
    } 
    else if (num <= 2147516416) 
    {
      std::cout << "Decimal Value = " << num << "    "<< "Binary Value= " << _32bits(num) << std::endl;
      
    } 
    else 
    {
      std::cout << "You Insert Number Out Of Range" << std::endl;
    }
     }
  case 1:
  {
   std::cout<<"PLS Insert Binary Value: ";
    std::string binaryString;
    std::cin>>binaryString;
    unsigned long decimal = std::bitset<32>(binaryString).to_ulong();
   printf("Decimal = %lu\n", decimal);

  }
  default:
    break;
  }

  return 0;
}