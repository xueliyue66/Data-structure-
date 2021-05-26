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
    void Insert(class Array *arr,int index,int x)
    {
        int i;
        if(index>=0 && index <=arr->length)
        {
            for(i=arr->length;i>index;i--)
                arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
};


int main()
{
    class Array arr1={{2,3,4,5,6},10,5};
    arr1.Insert(&arr1,0,12);
    arr1.Display(arr1);
    return 0;
}
