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

string orange = "\x1b[" + to_string(33) + ";1m"; 


//put definitions here
void handleOption(string userOption)
{
    double d = 0, t = 0, V = 0;
    double Velocity, Acceleration, Motion = 0;
    string dUnit="",tUnit="";

    if(userOption == "A" || userOption == "a")
    {
      cout << "\nTime to calculate Velocity\n";
      cout << "\nWhat is the displacement(d): ";
      d = validateDouble(d);
      cout << "\nWhat is the unit of measure? ";
      dUnit = validateString(dUnit);//cin >> displacement; 
      cout << "\nWhat is the time(t): ";
      t = validateDouble(t);
      cout << "\nWhat is the unit of measure? ";
      tUnit = validateString(tUnit); 
      Velocity = d/t;
      cout << fixed << setprecision(4);
      cout << "\nThe Velocity equals: "<< orange << Velocity << " " << dUnit <<"/"<< tUnit << endl;
      

    }
    
     else if(userOption == "B" || userOption == "b")
    {
      string VUnit="", tUnit="";

      cout << "\nTime to Calculate Acceleration\n"; 
      cout << "\nWhat is the Velocity(V): ";
      V = validateDouble(V);
      cout << "\nWhat is the unit of measure? ";
      VUnit = validateString(VUnit);
      cout << "\nWhat is the Time(t): ";
      t = validateDouble(t);
      cout << "\nWhat is the unit of measure? ";
      tUnit = validateString(tUnit); 
      Acceleration = V/t;
      cout << fixed << setprecision(4); //cin >> num; 
      cout << "\nThe Acceleration equals: " << orange << Acceleration << " " << VUnit << "/" <<tUnit << endl;
    }
    else if(userOption == "C" || userOption == "c")
    {
      double v0,a,t,s0,v,s, v_bar;
      string formulaOption;
      string reset = "\x1b[0m";
      string v0Unit ="", aUnit = "", s0Unit = "", sUnit = "" , vUnit = "";
    
      cout << "\nTime to Calculate Motion\n";
      cout << "A:" << "v = v0 + at\n";
      cout << "B:" << "s = s0 + v0t + ½at2\n";
      cout << "C:" << "v^2 = v0^2 + 2a(s − s0)\n";
      cout << "D:" << "v̅ = ½(v + v0)\n\n";
      cout << "Which Equation would you be using: ";
      cout << orange;
      formulaOption = validateString(formulaOption);
    
     if (formulaOption == "A" || formulaOption == "a")
     {
      cout << orange << "You choose v = v0 + at " << endl;
      cout << reset;
     
      cout << "\nwhat's your initial Velocity(v0): ";
      v0 = validateDouble(v0);
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);
      cout << "\nwhat is your Acceleration(a) ";
      a = validateDouble(a);
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit);
      cout << "\nwhat is the Time(t)?";
      t = validateDouble(t);
      cout << "\nwhat is the unit of measure? ";
      tUnit = validateString(tUnit);
      v=v0+a*t;
      cout << fixed << setprecision(4);
      cout << "\nThe Velocity equals: " << v << " " << v0Unit << " in " << tUnit << endl;
      cout << reset;
      }
      
     if (formulaOption == "B" || formulaOption == "b")
     {
      cout << orange << "You choose s = s0 + v0t + ½at2 " << endl;
      cout << reset;
    
      cout << "\nwhat is your initial displacement(s0)?: ";
      s0=validateDouble(s0);
      cout << "\nwhat is the unit of measure? ";
      s0Unit = validateString(s0Unit);   
      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0);     
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);      
      cout << "\nwhat is your Acceleration(a) ";
      a = validateDouble(a);      
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit);      
      cout << "\nwhat is the Time(t)?";
      t = validateDouble(t);    
      cout << "\nwhat is the unit of measure? ";
      tUnit = validateString(tUnit);
      s=(s0+(v0*t)+(0.5*a*(t*t)));
      cout << "\nThe Final displacement: " << s << " " << s0Unit << endl;
      cout << reset;
     }

      if (formulaOption == "C" || formulaOption == "c")
      {
      cout << orange << "You choose: v^2 = v0^2 + 2a(s − s0) " << endl;
      cout << reset;

      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0);   
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);     
      cout << "\nwhat is your Acceleration(a): ";
      a = validateDouble(a);      
      cout << "\nwhat is the unit of measure? ";
      aUnit = validateString(aUnit);     
      cout << "\nwhat is the final displacement(s)? ";
      s = validateDouble(s);    
      cout << "\nwhat is the unit of measure? ";
      sUnit = validateString(sUnit);     
      cout << "\nwhat is your initial displacement(s0)?: ";
      s0=validateDouble(s0);   
      cout << "\nwhat is the unit of measure? ";
      s0Unit = validateString(s0Unit);
      v=(v0*v0)+((2*a)*(s-s0));
      cout << "\nThe final Velocity: " << v << " " << s0Unit << endl;
      cout << reset;
      }

      if (formulaOption == "D" || formulaOption == "d")
      {
      cout << orange << "You choose: v̅ = ½(v + v0) " << endl;
      cout << reset;

      cout << "\nwhat is you final Velocity(v): ";
      v=validateDouble(v);
      cout << "\nwhat is the unit of measure? ";
      vUnit = validateString(vUnit);
      cout << "\nwhat is your initial Velocity(v0): ";
      v0=validateDouble(v0);
      cout << "\nwhat is the unit of measure? ";
      v0Unit = validateString(v0Unit);
      v_bar = (0.5)*(v + v0);
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
      m = validateDouble(m);
      cout << "\nwhat is the unit of meassure?: ";
      mUnit = validateString(mUnit);
      cout << "\nwhat is the Acceleration(a)?: ";
      a = validateDouble(a);
      cout << "\nwhat is the unit of meassure?: ";
      aUnit = validateString(aUnit);
      N=(m*a);
      cout << fixed << setprecision(4);
      cout << "The Net force is: " << orange << N << " " << aUnit << endl;
    }

     else if(userOption == "F" || userOption == "f")
     {
       string mUnit;
       double m,w;
       const double g=9.80665;
      
       cout << "\nTime to calculate Weight\n";
       cout << "\nWhat is the mass(m): ";
       m = validateDouble(m);
       cout << "\nwhat is the unit of measure?: ";
       mUnit = validateString(mUnit);
       w=(m*g);
       cout << fixed << setprecision(4) << endl;
       cout << "The Weight is: " << orange << w << " Newtons" << endl;
     }
     
     else if(userOption == "G" || userOption == "g")
     {
       double m,v,p;
       string mUnit,vUnit, dUnit;

       cout << "\nTime to calculate the Momentum\n";
       cout << "\nWhat is the mass(m): ";
       m = validateDouble(m);
       cout << "\nwhat is the unit of measure?: ";
       mUnit = validateString(mUnit);
       cout << "\nWhat is the Velocity(v): ";
       v = validateDouble(v);
       cout << "\nwhat is the unit of measure?: ";
       vUnit = validateString(vUnit);
       cout << "\nwhat is the direction?: ";
       dUnit = validateString(dUnit);
       p=m*v;
       cout << fixed << setprecision(4) << endl;
       cout << "The Momentum is: " << orange << p << " " << mUnit << " "<< vUnit << " " << dUnit << endl;

     }
    
}

void showMenu()

{
  string White = "\x1b[" + to_string(39) + ";1m";
  string orange = "\x1b[" + to_string(33) + ";1m";
  cout << orange << "\nMENU" << endl; 
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