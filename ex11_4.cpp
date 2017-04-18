#include <iterator>
#include <iostream>
#include <vector>
#include <string>
#include <cstddef> // for size_t type
using namespace std;
 
int main(void)
{
  string line_one;
  vector<string> vect_one;
  for( ; getline(cin, line_one); ) {
    vect_one.push_back(line_one);
  }
 
  const  size_t max_size = vect_one.size() + 1;
  string *string_arr = new string [max_size + 1];
  vector<string>::const_iterator vect_iter = vect_one.begin();
 
  for(string *pLine = string_arr; 
      pLine != string_arr + max_size
    && vect_iter != vect_one.end(); ++pLine,
    ++vect_iter) {
    *pLine = *vect_iter;
    cout << *pLine;
  }
  cout << endl;
 
  // не пойму как дальше правильно организовать код:
  size_t elem_vect = 0;
  for(size_t vIter = 0; vIter != vect_one.size(); ++vIter)
    for(size_t sIter = 0; sIter != line_one.size(); ++sIter)    
      ++elem_vect;
  
  cout << endl << "Vector have " << elem_vect << " char(s)"
       << endl;
 
  delete [] string_arr;
 
 
  return 0;    
}
