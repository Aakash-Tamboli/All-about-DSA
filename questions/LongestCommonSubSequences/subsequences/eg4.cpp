#include <iostream>
#include <set>
#include <vector>
#include <utility>
using namespace std;

vector<vector<int>> findAllSubSequences(int *arr, int length)
{
    vector<vector<int>> v;
    vector<int> tmp;
    set<int> s;
    int e, f, i;
    for (e = 0; e < length; e++)
    {
        if (s.find(arr[e]) != s.end())
            continue;
        s.clear();
        i = e;
        s.insert(arr[e]);
        tmp.push_back(arr[e]);
        for (f = e + 1; f < length; f++)
        {
            if (arr[i] < arr[f])
            {
                i = f;
                s.insert(arr[i]);
                tmp.push_back(arr[i]);
            }
        }
        if (e == i)
        {
            tmp.clear();
            continue;
        }
        v.push_back(vector<int>(tmp));
        tmp.clear();
    }
    return v;
}

void longestSubSequence(int *arr1, int length1, int *arr2, int length2)
{
    int i, j, k;
    vector<vector<int>> v1 = findAllSubSequences(arr1, length1);
    vector<vector<int>> v2 = findAllSubSequences(arr2, length2);
    vector<vector<int>> v3;
    vector<int> tmp1, tmp2;
    bool flag;
    for (i = 0; i < v1.size(); i++)
    {
        tmp1 = v1[i];
        for (j = 0; j < v2.size(); j++)
        {
            tmp2 = v2[j];
            if (tmp1.size() == tmp2.size())
            {
                flag = true;
                for (k = 0; k < tmp1.size(); k++)
                {
                    if (tmp1[k] != tmp2[k])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    v3.push_back(tmp1);
                }
            }
        }
    }
    cout<<v3.size()<<endl;
}
int main()
{
    int arr1[] = {2,3,6,8}; 
    int arr2[] = {2,3,4,6,9};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    longestSubSequence(arr1, length1, arr2, length2);
    return 0;
}
