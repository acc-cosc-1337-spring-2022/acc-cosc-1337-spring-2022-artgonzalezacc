//line.h
#include "shape.h"

#ifndef LINE_H
#define LINE_H

class Line : public Shape
{
public:
    void draw()override{std::cout<<"Draw line\n";}    
};

#endif