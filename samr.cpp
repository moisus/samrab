#include <iostream>
#include <ctime>
#include <cmath>
#include <new>
#include <cstdlib>

using namespace std;

class Array
{
public:
    void Create (int *&Ar, const int h); //выделение памяти
    void Delete (int *&Ar); //освобождение памяти
    void Func (int *&Ar, const int h);//нужная функция 
    void Fill (int *&Ar, const int h); //заполнение данными
};

void Array::Create (int *&Ar, const int h)
{
    Ar=new int[h];
}

void Array::Fill (int *&Ar, const int h)
{
    for (int i=0;i<h;i++)
    {
        cout << "введите " << i+1 << " элемент массива" << endl;
        cin >> Ar[i];
    }
}

void Array::Delete (int *&Ar)
{
    delete []Ar;
    Ar=NULL;
}


void Array::Func (int *&Ar, const int h)
{

 int i,p=0;
 for (i=0;i<h-1;i++)
 {   
  if (Ar[i]*Ar[i+1]>0)
  p=p+1;
 }
 if (p==0)
 {
  for (i=0;i<h;i++)
  if (Ar[i]>0)
  p=p+Ar[i];
  else 
  {
   p=1;
   p=p*Ar[i];
  }
 } 
  cout << "значение р: " << p << endl;
  
 

}

int main()
{
    int *Ptr=NULL;
    Array Arr;
    int h=0;
    cout << "введите размер массива" << endl;
    cin >> h;
    Arr.Create(Ptr,h);
    Arr.Fill(Ptr,h);
    Arr.Func(Ptr,h);
    Arr.Delete(Ptr);    
    return 0;
}
