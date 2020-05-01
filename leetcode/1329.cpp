//Sort the Matrix Diagonally

//https://leetcode.com/problems/sort-the-matrix-diagonally/

class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {

        int m = mat.size();
        int n = mat[0].size();
        for (int p = 0; p < m + n; p++)
        {
            int pi = p < m ? p : 0, pj = max(0, p - m + 1);
            vector<int> dia;

            for (int i = pi, j = pj; i < m && j < n; i++, j++)
            {
                dia.push_back(mat[i][j]);
            }

            sort(dia.begin(), dia.end());

            for (int i = pi, j = pj, vp = 0; i < m && j < n; i++, j++, vp++)
            {
                mat[i][j] = dia[vp];
            }
            dia.clear();
        }
        return mat;
    }
};