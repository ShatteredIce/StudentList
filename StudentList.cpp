#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <iomanip>

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
  char quit[5] = {'Q','U','I','T','\0'};
  int idDelete = 0;
  
  while(running){
    fill(input, input + 81, ' ');
    cout << "Awaiting input: ";
    cin.getline(input, 81);
    if(strcmp(input, quit) == 0){
      cout << "Program Terminated." << endl;
      running = false;
    }
    else if (strcmp(input, add) == 0){
      cout << endl << "-----ADDING STUDENT-----" << endl;
      cout << "Enter first name: ";
      cin.getline(s.nameFirst, 81);
      cout << "Enter last name: ";
      cin.getline(s.nameLast, 81);
      cout << "Enter student ID: ";
      cin >> s.id;
      cin.ignore(80,'\n');
      cout << "Enter student GPA: ";
      cin >> s.gpa;
      cin.ignore(80, '\n');
      vec.push_back(s);
    }
    else if(strcmp(input, print) == 0){
      if(vec.size() == 0){
	cout << endl << "-----NO STUDENTS-----" << endl << endl;
      }
      else{
	cout << endl << "-----STUDENT INFORMATION-----" << endl;
	for(int a = 0; a < vec.size(); a++){
	  cout << vec[a].nameFirst << " " << vec[a].nameLast << ", " << vec[a].id << ", " << setprecision(2) << fixed << vec[a].gpa << endl;
	}
      }
    }
    else if(strcmp(input, del) == 0){
      cout << endl << "-----DELETING STUDENT-----" << endl;
      cout << "Enter student ID: ";
      cin >> idDelete;
      cin.ignore(80, '\n');
      for(int a = 0; a < vec.size(); a++){
	if(idDelete == vec[a].id){
	  vec.erase(vec.begin()+a);
	}
      }
    }
  }
  return 0;
}
