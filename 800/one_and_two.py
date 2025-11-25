t = int(input())

while t > 0:
  n = int(input())
  arr = list(map(int, input().split()))
  
  two_count = arr.count(2)
  if two_count % 2:
    print(-1)
    t -= 1
    continue
  
  if not two_count:
    print(1)
    t -= 1
    continue
  
  k = 0
  i = 0
  while k != two_count/2:
    if arr[i] == 2:
      k += 1
    i += 1
  
  t -= 1
  print(i)
  