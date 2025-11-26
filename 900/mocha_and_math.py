t = int(input())

while t > 0:
  n = int(input())
  
  arr = list(map(int, input().split()))
  
  min_max = arr[0]
  
  for i in range(n):
    if arr[i] & min_max < min_max:
      min_max = arr[i] & min_max
  
  t -= 1
  print(min_max)