#include <iostream>
void doNothing(int&)
{}

int main()
{
  /*  std::cout << "Hello World!\n";                          // Everything from here to the end of the line is ignored
    std::cout << "It is very nice to meet you!\n";          // this is easier to read
    
    
    int u{};
    int z{};
    std::cin >> u >> z;
    std::cout << "ur number is " << u << " and " << z;*/
    
  /*  int x;                                                  //always initialize variables with "int x{};"
    doNothing(x);
    std::cout << x;
    */

    int a{};
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Double that number is: " << a * 2;
    
    return 0;                                               //


}

