#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct Building
{
    int x, y;
    int width, depth, height, label;
    int in()
    {
        return scanf("%d %d %d %d %d", &x, &y, &width, &depth, &height) == 5;
    }
    bool operator<(const Building &a) const
    {
        if(make_pair(x, y) != make_pair(a.x, a.y))
            return make_pair(x, y) < make_pair(a.x, a.y);
        return depth < a.depth;
    }
};
int coverL(vector< pair<int, int> > interval, int l, int r)
{
    sort(interval.begin(), interval.end());
    int y = l;
    for(int i = 0; i < interval.size(); i++)
    {
        if(interval[i].first <= y)
            y = max(y, interval[i].second);
        else
            return 0;
    }
    return y >= r;
}
void solve(Building D[], int n)
{
    sort(D, D+n);
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        vector< pair<int, int> > interval;
        for(int j = 0; j < n; j++)
        {
            if(j == i) continue;
            if(D[i].height > D[j].height || D[i].y <= D[j].y)
                continue;
            int l = max(D[i].x, D[j].x), r = min(D[i].x+D[i].width, D[j].x+D[j].width);
            if(l < r)
                interval.push_back(make_pair(l, r));
        }
        if(!coverL(interval, D[i].x, D[i].x + D[i].width))
        {
            if(f++) putchar(' ');
            printf("%d", D[i].label + 1);
        }
    }
    puts("");
}
int main()
{
    int n, cases = 0;
    Building D[128];
    while(scanf("%d", &n) == 1 && n)
    {
        for(int i = 0; i < n; i++)
            D[i].in(), D[i].label = i;
        if(cases++) puts("");
        printf("For map #%d, the visible buildings are numbered as follows:\n", cases);
        solve(D, n);
    }
    return 0;
}
