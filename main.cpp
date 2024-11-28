//*****************************************************************************
// Author: 
// Assignment:
// Date:
// Description:
// Sources: 
//*****************************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int WIDTH_2 = 20;

//int* fun1(int x, int y, int *min);

int* fun1(int *xptr, int *yptr, int *min);

void print_x(int &x) {
  cout << endl;
  cout << setw(WIDTH_2) << "&x" << setw(WIDTH_2) << "x" << endl;
  cout << setw(WIDTH_2) << &x << setw(WIDTH_2) << x << endl;
} 

void print_section(string s) {
  cout << endl;
  cout << s << endl; 
}

void print_min(int*& min) {
  //int *min = *ptr;
  cout << endl;
  cout << setw(WIDTH_2) << "&min" << setw(WIDTH_2) << "min" << setw(WIDTH_2) << "*min" << endl;
  cout << setw(WIDTH_2) << &min << setw(WIDTH_2) << min << setw(WIDTH_2) << *min << endl;
}

int main()
{
    int x = 5;
    print_section("    int x = 5;");
    print_x(x);
     
    int y = 10;
    int *min = NULL; // new int; NULL; 
    // print_section("int *min = new int;");
    print_section("int *min = NULL;");
    //print_min(min);

    min = fun1(&x, &y, min);

    print_section("min = fun1(x, y, min);" );
    print_x(x);
    print_min(min);  
}

int* fun1(int *x, int *y, int *min)
{
  print_section("int* fun1(int x, int y, int *min)");
  print_x(*x);
  // print_min(min);

  if(x < y)
  {
    min = x;
    print_section("min = &x;");
    print_min(min);
  }
  else
  {
    min = y;
  }
  return min;
}
