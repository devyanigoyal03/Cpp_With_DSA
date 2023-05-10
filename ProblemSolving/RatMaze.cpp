#include <bits/stdc++.h>
using namespace std;
#define N 4

bool safe(int m[N][N], int x, int y)
{
    if ((x >= 0 && x < N) && (y >= 0 && y < N) && m[x][y] == 1)
    {
        return true;
    }
    return false;
}

void soln(int visited[N][N])
{
    cout << "Follow the '1' Path : \n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << " " << visited[i][j] << " ";
        cout << endl;
    }
}
bool solve(int m[N][N], int x, int y, int visited[N][N])
{
    if (x == N - 1 && y == N - 1 && m[x][y] == 1)
    {
        visited[x][y] = 1;
        return true;
    }
    if (safe(m, x, y) == true)
    {
        if (visited[x][y] == 1)
            return false;
        visited[x][y] = 1;
        // Down
        if (solve(m, x + 1, y, visited) == true)
        {
            return true;
        }
        // Up
        if (solve(m, x - 1, y, visited) == true)
        {
            return true;
        }
        // Left
        if (solve(m, x, y + 1, visited) == true)
        {
            return true;
        }
        // Right
        if (solve(m, x, y - 1, visited) == true)
        {
            return true;
        }
        visited[x][y] = 0;
        return false;
    }
    return false;
}

bool solmaze(int m[N][N])
{
    int visited[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            visited[i][j] = 0;
        }
    }
    if (solve(m, 0, 0, visited) == false)
    {
        cout << "Soln not exist";
        return false;
    }
    soln(visited);
    return true;
}
int main()
{
    int m[N][N] = {{1, 0, 0, 0},
                   {1, 1, 0, 1},
                   {1, 1, 0, 0},
                   {0, 1, 1, 1}};
    solmaze(m);
    return 0;
}