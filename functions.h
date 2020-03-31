/* A header file to hold the 
main defintions of the program
Student: Gerardo Duron
Teacher: Dr_T 10-17-2019
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
#include <iomanip>
using namespace std;


//put prototypes here
void handleOption(string);
void showMenu(); 
void Clearsceen();

string orange = "\x1b[" + to_string(33) + ";1m"; //set color.


//put definitions here
void handleOption(string userOption)
{
    double d = 0, t = 0, V = 0; // declared variables
    double Velocity, Acceleration, Motion = 0;
    string dUnit="",tUnit="";

    if(userOption == "A" || userOption == "a") // called function
    {
      cout << "\nTime to calculate Velocity\n";
      cout << "\nWhat is the displacement(d): ";
      d = validateDouble(d); // cin >> displacement;
      cout << "\nWhat is the unit of measure? ";
      dUnit = validateString(dUnit);
      cout << "\nWhat is the time(t): ";
      t = validateDouble(t); // cin >> time
      cout << "\nWhat is the unit of measure? ";
      tUnit = validateString(tUnit); 
      Velocity = d/t;//function
      cout << fixed << setprecision(4); // set to 4 decimal places.
      cout << "\nThe Velocity equals: "<< orange << Velocity << " " << dUnit <<"/"<< tUnit << endl;//print result.
      

    }
    
     else if(userOption == "B" || userOption == "b")
    {
      string VUnit="", tUnit="";//set cin >> variables

      cout << "\nTime to Calculate Acceleration\n"; 
      cout << "\nWhat is the Velocity(V): ";
      V = validateDouble(V);// cin >> Velocity
      cout << "\nWhat is the unit of measure? ";
      VUnit = validateString(VUnit);// cin >> unit of measure
      cout << "\nWhat is the Time(t): ";
      t = validateDouble(t); // cin >> Time
      cout << "\nWhat is the unit of measure? ";
      tUnit = validateString(tUnit);  // cin >> unit of measurement.
      Acceleration = V/t; // formula
      cout << fixed << setprecision(4); //set deciaml places to 4.
      cout << "\nThe Acceleration equals: " << orange << Acceleration << " " << VUnit << "/" <<tUnit << endl;
    }
    else if(userOption == "C" || userOption == "c")
    //called funciton
    {
      double v0,a,t,s0,v,s, v_bar; //set variables
      string formulaOption;
      string reset = "\x1b[0m";
      string v0Unit ="", aUnit = "", s0Unit = "", sUnit = "" , vUnit = "";
    
      cout << "\nTime to Calculate Motion\n";
      cout << "A:" << "v = v0 + at\n";
      cout << "B:" << "s = s0 + v0t + ½at2\n";
      cout << "C:" << "v^2 = v0^2 + 2a(s − s0)\n";
      cout << "D:" << "v̅ = ½(v + v0)\n\n";
      cout << "Which Equation would you be using: ";
      cout << orange; //color to letter choosen
      formulaOption = validateString(formulaOption);
    
     if (formulaOption == "A" || formulaOption == "a")
     {
      cout << orange << "You choose v = v0 + at " << endl;// color set to equation choosen.
      cout << reset;
     
      cout << "\nwhat's your initial Velocity(v0): ";
      v0 = validateDouble(v0);// cin >> velocity
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);// cin >> unit of measure
      cout << "\nwhat is your Acceleration(a) ";
      a = validateDouble(a);// cin >> acceleration
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit); // cin >> unit of measure
      cout << "\nwhat is the Time(t)?";
      t = validateDouble(t); // cin >> the time
      cout << "\nwhat is the unit of measure? ";
      tUnit = validateString(tUnit);
      v=v0+a*t; // formula
      cout << fixed << setprecision(4);
      cout << "\nThe Velocity equals: " << v << " " << v0Unit << " in " << tUnit << endl; 
      cout << reset;
      }
      
     if (formulaOption == "B" || formulaOption == "b")
     {
      cout << orange << "You choose s = s0 + v0t + ½at2 " << endl; // set color to equaiton choosen
      cout << reset; 
    
      cout << "\nwhat is your initial displacement(s0)?: ";
      s0=validateDouble(s0); // cin >>displacement
      cout << "\nwhat is the unit of measure? ";
      s0Unit = validateString(s0Unit); // cin >> unit of measure
      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0); // cin >> velocity
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);  // cin >> unit of measure
      cout << "\nwhat is your Acceleration(a) ";
      a = validateDouble(a);  // cin >> acceleration
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit);  // cin >> unit of measure
      cout << "\nwhat is the Time(t)?";
      t = validateDouble(t);    // cin >> time
      cout << "\nwhat is the unit of measure? ";
      tUnit = validateString(tUnit);
      s=(s0+(v0*t)+(0.5*a*(t*t))); //formula
      cout << "\nThe Final displacement: " << s << " " << s0Unit << endl;
      cout << reset;
     }

      if (formulaOption == "C" || formulaOption == "c")
      {
      cout << orange << "You choose: v^2 = v0^2 + 2a(s − s0) " << endl; //set color to equation
      cout << reset;

      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0);   //cin >> initial velocity
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);    // cin >> unit of measure
      cout << "\nwhat is your Acceleration(a): ";
      a = validateDouble(a);      // cin >> acceleration
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit);     // cin >> unit of measure
      cout << "\nwhat is the final displacement(s)? ";
      s = validateDouble(s);    // cin >> final displacement
      cout << "\nwhat is the unit of measure? ";
      sUnit = validateString(sUnit);     // cin >> unit of measure
      cout << "\nwhat is your initial displacement(s0)?: ";
      s0=validateDouble(s0);   // cin >> initial displacement 
      cout << "\nwhat is the unit of measure? ";
      s0Unit = validateString(s0Unit); // cin >> unit of measure
      v=(v0*v0)+((2*a)*(s-s0)); // formula
      cout << "\nThe final Velocity: " << v << " " << s0Unit << endl;
      cout << reset;
      }

      if (formulaOption == "D" || formulaOption == "d")
      {
      cout << orange << "You choose: v̅ = ½(v + v0) " << endl; // set the funcion color.
      cout << reset;

      cout << "\nwhat is you final Velocity(v): ";
      v=validateDouble(v);// cin >> final velocity
      cout << "\nwhat is the unit of measure? ";
      vUnit = validateString(vUnit);//cin >> unit of measure.
      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0);// cin >> initial Velocity
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);// cin >> unit of measure.
      v_bar = (0.5)*(v + v0);//formula
      cout << "\nThe change in Velocity is:" << v_bar << vUnit << endl;
      cout <<  reset;
     }
    
    }

     else if(userOption == "D" || userOption == "d")
    {
      double a,m,N;
      string mUnit,aUnit;

      cout << "\nTime to calculate Newton's Second Law\n";
      cout << "\nwhat is the mass(m): ";
      m = validateDouble(m); // cin >> mass of object
      cout << "\nwhat is the unit of measure?: ";
      mUnit = validateString(mUnit); // cin >> unit of measure
      cout << "\nwhat is the Acceleration(a)?: ";
      a = validateDouble(a); // cin >> acceleration
      cout << "\nwhat is the unit of measure?: ";
      aUnit = validateString(aUnit); // cin >> unit of measure
      N=(m*a); // fomula
      cout << fixed << setprecision(4); // set the decimal places to 4
      cout << "The Net force is: " << orange << N << " " << aUnit << endl; // printed the results in color. 
    }

     else if(userOption == "F" || userOption == "f")
     {
       string mUnit; // set variables 
       double m,w;
       const double g=9.80665; // set constant
      
       cout << "\nTime to calculate Weight\n";
       cout << "\nWhat is the mass(m): ";
       m = validateDouble(m); // cin >> mass
       cout << "\nwhat is the unit of measure?: ";
       mUnit = validateString(mUnit); // cin >> unit of measure. 
       w=(m*g);
       cout << fixed << setprecision(4) << endl;
       cout << "The Weight is: " << orange << w << " Newtons" << endl;
     }
     
     else if(userOption == "G" || userOption == "g")
     {
       double m,v,p; // set variables 
       string mUnit,vUnit, dUnit;

       cout << "\nTime to calculate the Momentum\n";
       cout << "\nWhat is the mass(m): ";
       m = validateDouble(m); // cin << mass
       cout << "\nwhat is the unit of measure?: ";
       mUnit = validateString(mUnit);// cin >> unit of measure
       cout << "\nWhat is the Velocity(v): ";
       v = validateDouble(v); // cin >> velocity
       cout << "\nwhat is the unit of measure?: ";
       vUnit = validateString(vUnit); // cin >> unit of measure
       cout << "\nwhat is the direction?: ";
       dUnit = validateString(dUnit); // cin >> direction 
       p=m*v; // formula
       cout << fixed << setprecision(4) << endl;
       cout << "The Momentum is: " << orange << p << " " << mUnit << " "<< vUnit << " " << dUnit << endl; // the result printed in orange

     }
    
}

void showMenu()

{
  string White = "\x1b[" + to_string(39) + ";1m"; // set color to menu 
  string orange = "\x1b[" + to_string(33) + ";1m"; // set color to menu
  cout << orange << "\nMENU" << endl; 
  // asked user to choose form menu 
  cout << orange << "A:" << White << " Want to calculate Velocity" <<endl; 
  cout << orange << "B:" << White << " Want to calculate Acceleration" << endl; 
  cout << orange << "C:" << White << " Want to calcualte Motion" << endl; 
  cout << orange << "D:" << White << " Want to calculate Newton's Second Law" << endl; 
  cout << orange << "F:" << White << " Want to calcualte Weight" << endl;
  cout << orange << "G:" << White << " Want to calculate Momentum" << endl;
  cout << orange <<"E:" << White << " Exit" << endl; 
  cout << orange <<"X:" << White << " clear the screen" << endl;  
}

#endif