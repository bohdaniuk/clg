#include <iostream>
#include <vector>
using namespace std;

int summArray(vector<int>&v)
{   
    int i;
    int summ;
    for(i = 0; i < v.size(); i++)
    {
        summ += v[i];
    }
    return summ;
}

void proccessArray(vector<int>&v, vector<int>&v_new)
{
    int mid = summArray(v)/v.size();
    cout << mid;
}
int main(int argc, char* argv[])
{
    vector<int>v = {4,7,8,12,2,4,6,5};
    vector<int>v_new = {};
    proccessArray(v, v_new);
    return 0;
}