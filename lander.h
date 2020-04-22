//FILE: lander.h

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"
#ifndef LANDER_H
#define LANDER_H
#define HORIZONTAL_THRUST .1
#define UPWARD_THRUST .3

class Lander
{
  private:
   Point point;
   Velocity velocity;
   int fuel;
   bool alive;
   bool landed;
   
  public:

  //constructor
  Lander() : fuel(500), alive(true), landed(false) 
  {
     Velocity velocity();
     Point point(100.0, 100.0);
  }
   
  //getters
  Point getPoint () const
  {
     return point;
  }
  
  Velocity getVelocity() const
  {
     return velocity;
  }

  int getFuel() const
  {
     return fuel;
  }
  
  //checks AKA boolean getters
  bool isAlive() const
  {
     return alive;
  }
  
  bool isLanded() const
  {
     return landed;
  }
  
  bool canThrust() const
  {
     if (fuel > 0)
        return true;
     else
        return false;
  }

  //setters
  void setLanded(bool landed);
  void setAlive(bool alive);
  void setFuel(int fuel);
  void setPoint(Point point);
  
  //changers
  void applyGravity(double GRAVITY_AMOUNT);
  
  void applyThrustLeft();
  void applyThrustRight();
  void applyThrustBottom();

  void advance();
  void draw();
  
  
};

#endif

   
