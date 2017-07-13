#include <iostream> 
#include <vector>
using namespace std; 

void days_in_a_month(const vector<size_t> & year)
{
 int month; 
 cin >> month; 
 cout << year.at(month-1) << endl;
 }
 

int main() 
{

 vector<size_t> year {31, 28, 31, 30, 31, 30,
  31, 31, 30, 31, 30, 31};
 cout << "insert month number" << endl; 
 try
 {
  for (int i = 0; i != 3; ++i)
  {
   days_in_a_month(year);
  }
 }

 catch (...) {
  cout << "task failed" << endl;
 }
 

 return -1;
}