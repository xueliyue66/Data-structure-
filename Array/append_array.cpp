#include<iostream>
using namespace std;
class Array
{
public:
    int A[10];
    int size;
    int length;
public:
    void Display(class Array arr)
    {
        int i;
        std::cout<<"Elements are :";
        for(i=0;i<arr.length;i++)
            std::cout<<" "<<arr.A[i];
    }
    void Append(struct Array *arr,int x)
    {
        if(arr->length<arr->size)
            arr->A[arr->length++]=x;
    }
};


int main()
{
    class Array arr1={{2,3,4,5,6},10,5};
    arr1.Append(&arr1,10);
    arr1.Display(arr1);
    return 0;
}
