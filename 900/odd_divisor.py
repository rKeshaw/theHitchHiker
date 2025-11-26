import math

t = int(input())

while t > 0:
  n = int(input())
  
  log = math.log2(n)
  
  t -= 1
  if math.floor(log) == math.ceil(log):
    print("nO")
  else:
    print("yES")