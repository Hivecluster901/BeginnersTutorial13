#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
    void Update();
    void Processconsumption( const Dude &dude);//We are not changing the values inside the dude class, but we are changing the members of the poo class.
    void Draw(Graphics &gfx) const; //We are chainging gfx, but we are not changing the members of the poo class. 
    int x;
    int y;
    int vx;
    int vy;
    static constexpr int width = 24;// we can change const variable every single time we call the function 
                                    //whilee we cannot change constexpr variable no matter how many times the function is called.
    static constexpr int height = 24;// static members are shared all over with every object; It can be accessed with the expression: Poo::width
    bool isEaten = false;
};