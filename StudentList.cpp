#include <iostream>
#include <vector>

using namespace std;

struct Student {
  char name[10];
  int id;
  float gpa;
};

int main()
{
  char input[21];
  cout << "Awaiting input: ";
  cin.getline(input, 21);
  cout << input << endl;

  return 0;
}
