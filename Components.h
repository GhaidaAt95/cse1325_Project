#ifndef Components_H
#define Components_H
#include "Robot_part.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
/********************************** Arm Class **********************************/
class Arm:public Robot_Part
{

private:
  double max_power;
public:
  Arm();
  Arm(string, int, string, string, double, double,double);
  double get_max_power();

};
/********************************** Torso class **********************************/

class Torso:public Robot_Part
{
private:
  int battery_compartments;
  int max_arms;
public:
  int get_battery_compartments();
  int get_max_arms();
  Torso();
  Torso(string, int, string, string, double, double, int, int);
};
/********************************** Locomotor class **********************************/

class Locomotor:public Robot_Part
{
private:
  double max_power;
  double max_speed;
public:
  Locomotor();
  Locomotor(string, int, string, string, double,double, double, double);
  double get_max_speed(){ return max_speed;}
  double get_max_power(){ return max_power;}
  
};
/********************************** Head class **********************************/

class Head:public Robot_Part
{

private:
  double power;
public:
  Head();
  Head(string, int, string, string, double, double,double);

  double Getpower();

};
/********************************** Battery class **********************************/

class Battery:public Robot_Part
{
private:
  double power_available;
  double max_energy;
public:
  Battery();
  Battery(string, int,string,
         string, double,double, double, double);

  double get_power();
  double get_max_energy();
};
#endif