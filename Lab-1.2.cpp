#include <iostream>
using namespace std;

int main(){
  float n;
  float m;
  cout << "Enter num 1" << endl;
  cin >> m;
  cout << "Enter num 2" << endl;
  cin >> n;

  float a = m-++n;
  float b = m++<++n;
  float c = n--<--m;

  cout << "Result is:" << endl << a << endl << b << endl<< c << endl;
  
  return 0;
}