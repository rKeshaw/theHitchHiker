t = int(input())

while t > 0:
  n, k = map(int, input().split())
  
  if n % 2 == 0:
    print("yes")
  elif k % 2 == 1:
    print("yes")    
  else:
    print("no")
  t -= 1