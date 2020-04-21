#include <iostream>

using namespace std;

int main(){
    int N,M,K,S;
    scanf("%d%d%d%d", &N,&M,&K,&S);
    char garden[N][M];
    for(int row=0; row<N; row++)
        for(int col=0; col<M; col++)
            scanf(" %c", &garden[row][col]);

    bool can_escape = true;
    for(int row=0; row<N; row++){
        for(int col=0; col<M; col++){
            if(S<K) {
                can_escape = false;
                break;
             }
            if(garden[row][col] == '.') S=S-2;
            if(garden[row][col] == '*') S=S+5;
            if(garden[row][col] == '#') break;
            if (col != M-1) S=S-1;
        }
        if (!can_escape) break;
    }
    if (can_escape) printf("YES\n%d\n", S);
    else printf("NO");
    return 0;
}