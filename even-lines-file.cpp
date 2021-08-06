#include <iostream>
#include<fstream>

using namespace std;
int main()
{
    int i;

    ofstream myfile;
    
    myfile.open ("text.txt", fstream::in | fstream::out | fstream::binary);
    if (myfile.is_open())
    {
    
        for (i=1; i<1000; i++)
            { 
                myfile<<endl;      
             myfile<<"houssam"<<endl; 
             
            
            }
    } 
  return 0;
}