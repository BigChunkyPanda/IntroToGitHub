#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
#include <limits>

using namespace std; 
bool validateDouble(const string& input) {
char* end;
double validate = strtod(input.c_str(), &end);

return end != input.c_str() && *end == '\0' && validate <= ::numeric_limits<double>::max() && validate >= std::numeric_limits<double>::lowest();

}

int main()
{
string number;
cout << "Enter the double : " << endl;
getline(cin, number);
if(!validateDouble(number))
{
cout << "The entered string is not a valid double!!!" << endl;
}
else
{
cout << "The entered string is a valid double!!!"
<< endl;
}
return 0;
}