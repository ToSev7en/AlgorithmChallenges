#include<iostream>
using namespace std;

static const int N = 100;

int main(int argc, char const *argv[])
{
    int M[N][N];
    int n, u, k, v;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            M[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cin >> u >> k;
        // 转换为 0 起点
        u--;
        for(int j = 0; j < k; j++){
            cin >> v;
            // 转换为 0 起点
            v--;
            M[u][v] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            // 小技巧：
            // j = 0 ->行首不输出空格
            // j != 0 -> 输出空格
            if(j) cout << " ";

            cout << M[i][j];
        }
        cout << endl;
    }


    return 0;
}
