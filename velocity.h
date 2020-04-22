//FILE: veloctiy.h

#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
  private:
   float Dx;
   float Dy;

  public:
   //constructor
  Velocity() : Dx(0.0), Dy(0.0) {};
   Velocity(float Dx, float Dy)
   {
      setDx(Dx);
      setDy(Dy);
   }
   
   //getters
   float getDx() const
   {
      return Dx;
   }

   float getDy() const
   {
      return Dy;
   }

   //setters
   void setDx(float Dx);
   void setDy(float Dy);

};

#endif
