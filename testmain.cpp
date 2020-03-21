// TESTING PROGRAM IN CPP //
#include <iostream>
using namespace std;

// DECLARING SUBROUTINES //
int addfunc(int a, int b); 
void subsfunc(int& a, int& b, int&c);

// MAIN PROGRAM //

int main()
{

// DECLARING VARIABLES //
   const char* line;
   const char newline = '\n';
   int a, b, c, r, n, i;

// CHARACTER TESTS //
   line = " Hello World ";
   cout << newline;
   cout << line << endl;
   cout << newline;

// INTEGER TESTS //
   a = 3;
   b = 5;
   c = a + b;
   cout << " Printing sum of ";
   cout << a;
   cout << " and ";
   cout << b;
   cout << " = ";
   cout << c << endl;
   cout << newline;

// LOOP TEST //

   cout << " Looping " << c << " times " << endl;
   cout << newline;
   a = b = 0;
   for (n=0; n<c; ++n) {
      ++a;
      --b;
   }
   cout << " a, b and c values : ";
   cout << a << " " << b << " " << c << endl;
   cout << newline; 

// SUBROUTINE TEST //

   r = addfunc(a, b);
   cout << " Adding a + b = " << r << endl;
   cout << newline; 
   subsfunc(a, b, r);
   cout << " Substrating a - b = " << r << endl;
   cout << newline; 

// TESTING ARRAYS //

   double vect[5] = { };
   double xx = 0.1;
   for (n=0; n<5; ++n) { 
      vect[n] = xx;
      cout << " n = " << n << " val[n] = " << vect[n] << endl; 
      xx += 1.0;
   }
   cout << newline;
   char cline1[] = {" UC Berkeley "};
   char cline2[] = {" Quarantine "};
   cout << cline1 << endl;
   cout << " In " << endl;
   cout << cline2 << endl;
   cout << newline; 

//   



// END OF THE PROGRAM //
   return 0;
}

// ***** //

int addfunc(int a, int b) {
   int c;
   c = a + b;
   return c;
}

// ***** //

void subsfunc(int& a, int& b, int& c) {
   c = a - b;
}

// ***** //


