#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,0};
    
    for(int i=0;i<5;i++)
    {
     v.push_back(i+1);   
    }
    
    v.emplace(v.begin()+3, 10);
    
    v.push_back(20);
     
    v.erase(v.begin()+2);
    
    for(int  num: v)
    {
        std::cout<< num <<" ";
    }
    
    for(std::vector<int>::iterator it = v.end(); it != v.begin(); --it)
    {
                std::cout<< *it <<" ";
    }
    return 0;
}