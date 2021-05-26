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
    int Delete(class Array *arr,int index)
    {
        int x=0;
        int i;
        if(index>=0 && index<arr->length)
        {
            x=arr->A[index];
            for(i=index;i<arr->length-1;i++)
                arr->A[i]=arr->A[i+1];
            arr->length--;
            return x;
        }
        return 0;
    }
};


int main()
{
    class Array arr1={{2,3,4,5,6},10,5};
    arr1.Delete(&arr1,3);
    arr1.Display(arr1);
    return 0;
}
