//FILE: lander.cpp

#include "lander.h"

void Lander :: setPoint(Point point)
{
  this->point = point;
}

void Lander :: setLanded(bool landed)
{
   this->landed = landed;
}

void Lander :: setAlive(bool alive)
{
   this->alive = alive;
}

void Lander :: setFuel(int fuel)
{
   this->fuel = fuel;
}

void Lander :: applyGravity(double GRAVITY_AMOUNT)
{
   float tempDy;
   tempDy = velocity.getDy();
   tempDy -= GRAVITY_AMOUNT;
   velocity.setDy(tempDy);
}

void Lander :: applyThrustLeft()
{
   if (canThrust())
   {
      float tempDx;
      tempDx = velocity.getDx();
      tempDx += HORIZONTAL_THRUST;
      velocity.setDx(tempDx);
      if (getFuel() >= 1)
         setFuel((getFuel())-1);
   }
}

void Lander :: applyThrustRight()
{
   if (canThrust())
   {
      float tempDx;
      tempDx = velocity.getDx();
      tempDx -= HORIZONTAL_THRUST;
      velocity.setDx(tempDx);
      if (getFuel() >= 1)
         setFuel((getFuel())-1);
   }
}

void Lander :: applyThrustBottom()
{
   if (canThrust())
   {
      float tempDy;
      tempDy = velocity.getDy();
      tempDy += UPWARD_THRUST;
      velocity.setDy(tempDy);
      if (getFuel() >= 3)
         setFuel((getFuel())-3);
      else
         setFuel(getFuel() - getFuel());
   }
}

void Lander :: advance()
{
   point.setX((point.getX())+(velocity.getDx()));
   point.setY((point.getY())+(velocity.getDy()));
}

void Lander :: draw()
{
   drawLander(point);
}

