#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int n, m;
        deque<int> dq;
        scanf("%d %d", &n, &m);
        int x;
        string cmd;
        printf("Case %d:\n", t);
        while (m--)
        {
            cin >> cmd;
            if (cmd == "pushLeft")
            {
                scanf("%d", &x);
                if (dq.size() < n)
                {
                    dq.push_front(x);
                    printf("Pushed in left: %d\n", x);
                }
                else
                    printf("The queue is full\n");
            }
            else if (cmd == "pushRight")
            {
                scanf("%d", &x);
                if (dq.size() < n)
                {
                    dq.push_back(x);
                    printf("Pushed in right: %d\n", x);
                }
                else
                    printf("The queue is full\n");
            }
            else if (cmd == "popLeft")
            {
                if (!dq.empty())
                {
                    printf("Popped from left: %d\n", dq.front());
                    dq.pop_front();
                }
                else
                    printf("The queue is empty\n");
            }
            else if (cmd == "popRight")
            {
                if (!dq.empty())
                {
                    printf("Popped from right: %d\n", dq.back());
                    dq.pop_back();
                }
                else
                    printf("The queue is empty\n");
            }
        }
    }
    return 0;
}
