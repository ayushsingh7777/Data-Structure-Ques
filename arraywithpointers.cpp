#include<iostream>
using namespace std;

class myArray
{
    public:
    int total_size;
    int used_size;
    int *ptr;
    
};
    void createArray(myArray *a, int tsize, int usize)
    {
        a->total_size= tsize;
        a->used_size= usize;
        a->ptr= new int(tsize);  
     }

void show(myArray *a)
{
    for(int i=0;i < a->used_size; i++)
    {
        cout<<a->ptr[i];
    }
}

int main()
{
    myArray marks;
    createArray(&marks ,10,2);
    show(&marks);
    
    return 0;

}