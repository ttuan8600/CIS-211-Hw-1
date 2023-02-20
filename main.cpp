#include <iostream>
#include <string>

using namespace std;
int main()
{
	int data1, data2, sum=0;
  string firstName;
  string option;
  string lastName;

  while (true)
  {
    cout << "Choose an option from below: \n"<<"1)To enter your name.\n" << "2)To enter two numbers.\n" << "3)To quit the program.\n";
    cout << endl;

    cout << "Enter an Option: ";
    cin >> option;
    if (option == "1")
    {
      cout << "Enter your first name: ";
	    cin >> firstName;

      cout << "Enter your last name : ";
      cin >> lastName ;  

      cout << "Welcome, "<< firstName << " " << lastName << "!"<< endl;
      cout << endl;
    }
  
    else if (option == "2")
    {
      cout << "Enter a number      : ";
      cin >> data1;

      cout << "Enter another number: ";
      cin >> data2; 

        int x = data1;
        while (data2 >= x)
        {
          sum += x; 
          x++;
        }
        if (sum == 0)
        {
          cout << "Numbers input is not in order!" << endl;
        }
        if (sum > 0)
        {
          cout <<"The sum of the integers between the two numbers is "<< sum<< "." << endl;
          cout << endl;
        }
   
    }
      else if (option == "3")
      {
        break;
      }
  }

  return 0;

}