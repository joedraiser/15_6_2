#include <iostream>
#include <vector>

int main()
{
    int result=9, x=-1, y=-1;

    std::vector<int> array = {3, 7, -6, 15};

    for(int i=0;i<array.size()-1;i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if((array[i]+array[j])==result)
            {
                x=i;
                y=j;
                break;
            }
        }
        if(x!=-1&&y!=-1)
            break;
    }

    std::cout << array[x] << ' ' << array[y];
}
