#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct Student {
  char nameFirst[81];
  char nameLast[81];
  int id;
  float gpa;
};


int main()
{
  vector<Student> vec;
  Student s;
  
  bool running = true;
  char input[81];
  char add[4] = {'A','D','D','\0'};
  char print[6] = {'P','R','I','N','T','\0'};
  char del[8] = {'D','E','L','E','T','E','\0'};
  
  while(running){
    fill(input, input + 81, ' ');
    cout << "Awaiting input: ";
    cin.getline(input, 81);
    if (strcmp(input, add) == 0){
      cout << "ADDING STUDENT" << endl;
      cout << "Enter first name: ";
      cin.getline(s.nameFirst, 81);
      cout << "Enter last name: ";
      cin.getline(s.nameLast, 81);
      cout << "Enter student ID: ";
      cin >> s.id;
      cout << "Enter student GPA: ";
      cin >> s.gpa;
      cin.ignore();
      vec.push_back(s);
    }
    else if(strcmp(input, print) == 0){
      cout << "print";
    }
    else if(strcmp(input, del) == 0){
	cout << "delete" << endl;
    }
  }
  return 0;
}
