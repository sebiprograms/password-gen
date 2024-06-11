#include <iostream>
#include <string>

std::string alphabet_ = {'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
                       'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                                                         'w', 'x', 'y', 'z'};

int main() 
{
  // Creating Logic
  std::cout << "One password ready hot'n fresh!\n";

  std::string pass[8];

  //assinging data
  for(int i = 0; i < 8; i++)
  {
    int random = rand() % 26;
    pass[i] = alphabet[random];

  }



  //outputting data
  for(int i = 0; i < 8; i++)
  {
    std::cout << pass[i]; 
  }



  return 0;
}