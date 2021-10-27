#include <stdio.h>
#include <vector>

int v, e, w; //정점, 간선, 가중치 

std::vector<int> G[10], W[10];

main() {
	int v1, v2, w;
	scanf("%d %d", &v, &e);
	
	int i, j;
	for (i=1; i<=e; i++) {
		scanf("%d %d %d", &v1, &v2, &w);
		G[v1].push_back(v2);
		W[v1].push_back(w);
	}
	
	for (i=1; i<=v; i++) {
		printf("%d: ", i);
		
		for (j=0; j<G[i].size(); j++) {
			printf("%d(%d) ", G[i][j], W[i][j]);
		}
		
		printf("\n");
	}
}

/*
input
4 6
1 2 3
1 3 4
2 1 4
2 4 6
3 2 6
4 1 6

output
1: 2(3) 3(4)
2: 1(4) 4(6)
3: 2(6)
4: 1(6)
*/
