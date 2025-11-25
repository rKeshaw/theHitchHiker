import math

def gcd_comp(_list_):
  keep = _list_[0]
  for x in _list_[1:]:
    keep = math.gcd(keep, x)
  return keep

t = int(input())

while t > 0:
  n = int(input())
  arr = list(map(int, input().split()))
  res = [i for i in range(1, n+1)]
  
  for i in range(n):
    res[i] = abs(i + 1 - arr[i])
  
  t -= 1
  print(gcd_comp(res))