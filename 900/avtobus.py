t = int(input())

while t > 0:
  n = int(input())
  
  if n % 2:
    print(-1)
    t -= 1
    continue
  
  low = (n + 5) // 6
  high = n // 4
  
  t -= 1
  
  if low > high:
    print(-1)
  else:
    print(low, high)