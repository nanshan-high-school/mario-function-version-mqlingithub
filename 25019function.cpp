#include <iostream>
using namespace std;
void length(int);
int main() {
  int height;
  cout << "請輸入三角形高度(高度勿大於8或小於1):";
  cin >> height;
  if ( height < 9 && height > 0 ) {
    for ( int a = 0 ;a < height ; a++ ) {
      for (int b = height ; b > a ; b-- ) {
        cout << " ";
      }
      length (a);
      cout << "  ";
      length (a);
      cout << "\n";
    }
    cout << "高度:" << height << "\n";
  }
  else {
    cout << "高度大於8或小於1。\n";
  }
}
void length (int length) {
  for ( int b = 0 ; b <= length ; b++ ) {
    cout << "#";
  }
}
