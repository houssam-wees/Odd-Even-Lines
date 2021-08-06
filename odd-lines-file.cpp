#include <iostream>
#include<fstream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    string line;
    int i = 0;
    fstream myfile; 
    string tester[1000];  
     myfile.open ("text.txt");
     if (myfile.is_open())
     {
        string line;
        while (myfile >> line) 
            {
                tester[i] = line;
                cout << tester[i]<< '\n';
                 i++;
                // std::cout << line << '\n' << "aray"<< '\n';
        }
  }
  myfile.close();

myfile.open ("text.txt", std::ios::out | std::ios::trunc);
  for (int j = 0; j < 1000; j++)
       {
         myfile << tester[j] << '\n' << "ritwik"<< '\n';
        }  
     
  return 0;
}