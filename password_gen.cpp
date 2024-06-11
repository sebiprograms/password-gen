#include <iostream>
#include <string>

std::string alphabet_ = {'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
                         'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                                                          'w', 'x', 'y', 'z'};
std::string alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
                        'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                                                          'W', 'X', 'Y', 'Z'};

int main() 
{
  int choice = 0;

 
  std::cout << "One password ready hot'n fresh!\n";

  std::string pass[8];

  //assinging data
  for(int i = 0; i < 8; i++)
  {
    int random = rand() % 26;
    choice = (i % 2 == 0)? 1 : 0;

    // Randomization Logic
    if (choice == 1)
    {
    pass[i] = alphabet_[random];
    } else if(choice == 0)
    {
      pass[i] = alphabet[random];
    }    
  }



  //outputting data
  for(int i = 0; i < 8; i++)
  {
    std::cout << pass[i]; 
  }



  return 0;
}