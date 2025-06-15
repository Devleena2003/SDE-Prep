from collections import deque
from typing import List
class Solution:
    def shortestPathLength(self, graph: List[List[int]]) -> int:
       n=len(graph)
       if n==1:
        return 0
       qu=deque()
       vi=set()

       for i in range(n):
        ma=1<<i
        qu.append((i,ma,0))
        vi.add((i,ma))
       tr=(1<<n)-1

       while qu:
        node,ma,steps=qu.popleft()

        if ma==tr:
         return steps

        for nei in graph[node]:
            nm=ma|(1<<nei)
            if(nei,nm) not in vi:
              vi.add((nei,nm))
              qu.append((nei,nm,steps+1))

       return -1