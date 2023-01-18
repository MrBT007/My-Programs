from collections import Counter
import heapq

class Solution:
    def frequencySort(self, s: str) -> str:
        count = Counter(s)
        # print(count)
        max_heap = []
        # print(count['e'])
        # for i in count:
        #     print(i)

        for i in count:
            heapq.heappush(max_heap,[-count[i],i])
        print(max_heap)
        # while len(max_heap) != 0:
        #     r = heapq.heap

        return ""
        

if __name__ == '__main__':
    sol = Solution()
    print(sol.frequencySort("Aabb"))