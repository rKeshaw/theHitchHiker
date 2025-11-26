t = int(input())

while t > 0:
  block = list(input())
  
  diff = 0
  
  start = block[0]
  
  i = 1
  change = 0
  while i < len(block):
    if block[i] != block[i-1]:
      diff += 1
    i += 1
    
  if diff % 2 == 1:
    if block[len(block)-1] == "a":
      block[len(block)-1] = "b"
    else:
      block[len(block)-1] = "a"
  
  t -= 1
  print(''.join(block))
      