//cpp
//cpp
#include "arrays_access.h"

void ArrayList::Add(int value)
{
    if(current_index < size)
    {
        elements[current_index++]=value;
    }
}

int ArrayList::Get_Index_Of(int value)
{
    auto index = -1;
    auto count = 0;

    while(count < current_index)
    {
        if(value == elements[count])
        {
            index = count;
        }

        count++;
    }

    return index;

}

void ArrayList::Delete(int value)
{
    auto index = Get_Index_Of(value);

    if(index != -1)
    {
        if(index != current_index)
        {
            Adjust_Elements(index);
        }

        current_index--;
    }
}

void ArrayList::Adjust_Elements(int index)
{
    for(auto i=index; i < current_index; i++)
    {
        elements[i] = elements[i+1];
    }
}
