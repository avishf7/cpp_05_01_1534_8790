#include <iostream>
#include <string>


using namespace std;

int main() {

string str;
getline(cin, str);
str.replace(str.find(" "),1,"*");
str.replace(str.find(" "),1,"*");
str.replace(str.find(" "),1,"*");
cout << str << endl;
str.replace(str.find_last_of("*")+1,str.size()- str.find_last_of("*") + 1,"#!!@1234");
cout << str << endl;
str = str.substr(str.find("*")+1, str.size() - str.find("*"));
cout << str << endl;
str = str.substr(str.find("*") + 1, str.size() - str.find("*"));
cout << str << endl;
str = str.substr(str.find("*") + 1, str.size() - str.find("*"));
cout << str << endl;

return 0;
}