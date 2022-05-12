//
#include "vector.h"
#include<memory>
using std::cout;

int main()
{  //class template
    Vector<char> v(3);
    v.PushBack('p');

    cout<<v[0]<<"\n";

    Vector<int> v1(3);

    /*std::cout<<"Create vector\n";
    Vector v(3);

    std::cout<<v.Size()<<"\n";
    std::cout<<"Program exiting...\n";

    cout<<"Call use stack vector\n";
    use_stack_vector();
    //more code here
    cout<<"use stack vector exited...\n";
    
    cout<<"Call use heap vector\n";
    use_heap_vector();
    cout<<"use heap vector exited\n";
    */
    return 0;
}

