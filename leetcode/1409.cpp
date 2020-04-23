//Queries on a Permutation With Key
//https://leetcode.com/problems/queries-on-a-permutation-with-key/

class Solution
{ // O(m*n) sol
public:
    vector<int> processQueries(vector<int> &queries, int m)
    {

        vector<int> ans;
        vector<int> ar(m);

        for (int i = 0; i < m; i++)
        {
            ar[i] = i + 1;
        }

        for (int q : queries)
        {
            for (int i = 0; i < m; i++)
            {
                if (ar[i] == q)
                {
                    ans.push_back(i);
                    ar.erase(ar.begin() + i);
                    ar.insert(ar.begin(), q);
                    break;
                }
            }
        }
        return ans;
    }
};

//doubt in below
// class Solution {
// public:
//     vector<int> processQueries(vector<int>& queries, int m) {

//         unordered_map<int,int> hm;//(value and index)
//          for(int i = 0; i < queries.size(); i++)
//         {
//             if(hm.find(queries[i]) != hm.end())  //found
//             {
//                 continue;
//             }
//             else
//             {
//                 hm[queries[i]] = queries[i] - 1;
//             }
//         }
//           vector<int>ans; int temp;

//         for(auto i : hm)
//         {                                                //map created successfully
//             cout<<i.first<<" "<<i.second<<endl;
//         }

//         for(int i=0;i<queries.size()-1;i++){

//           temp = hm[queries[i]];

//             for(auto  it : hm){
//                 if(temp >it.second){
//                     it.second+=1;
//                 }
//             }
//          ans.push_back(temp);
//             hm[queries[i]]=0;

//         }
//         return ans;
//     }
// };

//correct one below
// class Solution {
// public:

//     vector<int> processQueries(vector<int>& queries, int m) {
//         map<int,int>hash;
//         for(int i = 0; i < queries.size(); i++)
//         {
//             if(hash.find(queries[i]) != hash.end())  //found
//             {
//                 continue;
//             }
//             else
//             {
//                 hash[queries[i]] = queries[i] - 1;
//             }
//         }

//         for(auto i : hash)
//         {                                                //map created successfully
//             cout<<i.first<<" "<<i.second<<endl;
//         }
//         vector<int>ans; int temp;
//         for(int i = 0; i < queries.size(); i++)
//         {
//             temp = hash[queries[i]];

//             for(auto & i : hash)
//             {
//                 if(i.second < temp)
//                 {

//                     i.second = i.second + 1;
//                 }

//             }
//             ans.push_back(temp);
//             hash[queries[i]] = 0;

//         }

//         return ans;
//     }
// };