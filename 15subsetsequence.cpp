#include<bits/stdc++.h>

using namespace std;



void subsets(vector<int>& nums, int index, vector<int>& output, vector<vector<int>>& ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    subsets(nums, index + 1, output, ans);

    // include
    output.push_back(nums[index]);
    subsets(nums, index + 1, output, ans);
    output.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {

        cin >> nums[i];
    }

    vector<vector<int>> ans;
    vector<int> output;
    subsets(nums, 0, output, ans);
    for (auto output : ans)
    {
        for (auto ele : output)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}