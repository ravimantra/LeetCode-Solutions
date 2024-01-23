// https://leetcode.com/problems/gas-station

class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        n = len(gas)
        net_gain = 0
        for i in range(n):
            net_gain += gas[i] - cost[i]
        
        if net_gain < 0:
            return -1
        
        for i in range(n):
            tank = 0
            for j in range(n):
                k = (i + j) % n
                tank += gas[k] - cost[k]
                if tank < 0:
                    break
            else:
                return i
        
        return -1
