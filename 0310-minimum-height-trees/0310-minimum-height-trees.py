from collections import defaultdict,deque
from typing import List
class Solution:
    def findMinHeightTrees(self, n: int, edges: List[List[int]]) -> List[int]:

        if n==1:
            return[0]
        gh=defaultdict(set)
        for a,b in edges:

            gh[a].add(b)
            gh[b].add(a)

        lv=[i for i in range(n) if len(gh[i])==1]

        rn=n

        while rn>2:

            rn-=len(lv)
            nl=[]
            for i in lv:
                ne=gh[i].pop()
                gh[ne].remove(i)

                if len(gh[ne] )==1:
                    nl.append(ne)
            lv=nl

        return lv


        