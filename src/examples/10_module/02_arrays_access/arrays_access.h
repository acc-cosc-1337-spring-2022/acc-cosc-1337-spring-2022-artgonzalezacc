//header
class ArrayList
{
public:
    ArrayList(int* array) : elements(array){}
    void Add(int value);
    void Delete(int value);
    int Get_Index_Of(int value);
    int Size()const{return current_index;}
    int* Get_Elements(){return elements;}
private:
    int size;
    int current_index{0};
    int* elements;
    void Adjust_Elements(int index);
};
