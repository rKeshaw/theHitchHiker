import math

t = int(input())
while t > 0:
  n = int(input())
  arr = list(map(int, input().split()))
  good_yet = False
  for i in range(n):
    for j in range(i+1, n):
      if math.gcd(arr[i], arr[j]) <= 2:
        good_yet = True
        break
    if good_yet:
      break
  t -= 1
  print("yes" if good_yet else "no")