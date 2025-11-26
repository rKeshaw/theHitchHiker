t = int(input())

while t > 0:
  n = list(map(int, list(input())))
  
  check0 = False
  check5 = False
  drop = 0
  
  for i in range(len(n)-1, -1, -1):
    if n[i] == 0 and not check0:
      check0 = True
    elif n[i] == 5 and not check5:
      if check0:
        print(drop)
        break
      check5 = True
    else:
      if (n[i] == 2 or n[i] == 7) and check5:
        if check0: print(drop + 1)
        else: print(drop)
        break
      elif (n[i] == 5 or n[i] == 0) and check0:
        if check5: print(drop + 1)
        else: print(drop)
        break
      else:
        drop += 1
  
  t -= 1