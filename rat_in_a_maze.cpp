void func(int i, int j, vector<vector<int>> &maze, int n, vector<vector<vector<int>>> &ans, vector<vector<int>> chk)
{
    if (i == n - 1 && j == n - 1)
    {
        chk[i][j] = 1;
        ans.push_back(chk);
        return;
    }
    chk[i][j] = 1;
    if (i + 1 < n && maze[i + 1][j] == 1 && chk[i + 1][j] == 0)
    {

        func(i + 1, j, maze, n, ans, chk);
    }
    if (i - 1 >= 0 && maze[i - 1][j] == 1 && chk[i - 1][j] == 0)
    {

        func(i - 1, j, maze, n, ans, chk);
    }
    if (j + 1 < n && maze[i][j + 1] == 1 && chk[i][j + 1] == 0)
    {

        func(i, j + 1, maze, n, ans, chk);
    }
    if (j - 1 >= 0 && maze[i][j - 1] == 1 && chk[i][j - 1] == 0)
    {

        func(i, j - 1, maze, n, ans, chk);
    }
}
vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
{
    vector<vector<vector<int>>> ans;
    vector<vector<int>> chk(n, vector<int>(n, 0));
    chk[0][0] = 1;
    func(0, 0, maze, n, ans, chk);
    vector<vector<int>> p;
    for (auto val : ans)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(val[i][j]);
            }
        }
        p.push_back(temp);
    }
    return p;
}