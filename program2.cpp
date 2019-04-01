#include<omp.h>
#include<iostream>
using namespace std;


int main()
{
 #pragma omp parallel
 {
   int id=omp_get_thread_num();
   int max=4;
   #pragma omp for collapse(2)
   for(int i=0;i<max;++i)
      for(int j=0;j<max;++j)
          cout<<"Watek nr "<<id<<", iteracja ("<<i<<")"<<endl;
 }
}

