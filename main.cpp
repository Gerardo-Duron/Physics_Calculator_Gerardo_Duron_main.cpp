
//Practice with Functions Student: yourName, Teacher: Dr_T
//10-15-2019 updated 10-16-2019 and 3-24-2020
#include "functions.h" //reference the header file 
int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(33) + ";1m"; // color to orange
  string reset = "\x1b[" + to_string(39) + ";1m"; // reset the color to white 
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
    //cin >> option; 
    cout << color; //change text to orange
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
  }
  while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\nGoodbye. Hasta luego." << endl;
  
  return 0; 
}