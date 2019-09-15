//File: 13.cpp
#include<string>
#include<iostream>

using namespace std;

int main()
{
  string color;
  cout << "What is your favorite color? ";
  cin >> color;

  if(color=="blue");
    cout << "My favorite color is blue also!\n";
  if(color!="blue");
    cout << "That is not my favorite color.\n";

  return 0;
}
