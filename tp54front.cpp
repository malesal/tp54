// string::front
#include <iostream>
#include <string>
int main ()
{
std::string str ("test string");
std::str.front() = 'T';
std::cout << str << '\n';
return 0;
}
