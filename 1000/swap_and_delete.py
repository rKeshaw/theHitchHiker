t = int(input())

while t > 0:
  s = list(map(int, list(input())))
  hold = s.copy()
  for i in range(len(hold)):
    if hold[i] == 0:
      hold[i] = 1
    else:
      hold[i] = 0
    
  cost = 0
  
  count_0 = s.count(0)
  count_1 = s.count(1)
  
  keep0 = 0
  keep1 = 0
  
  i = 0
  s_counter = 0
  while i < len(hold):
    if i < len(hold) and hold[i] == 0:
      if keep0 < count_0:
        if 1 == s[s_counter]:
          s_counter += 1
          keep0 += 1
        else:
          cost += 1
      else:
        cost += 1
    elif i < len(hold) and hold[i] == 1:
      if keep1 < count_1:
        if 0 == s[s_counter]:
          s_counter += 1
          keep1 += 1
        else:
          cost += 1
      else:
        cost += 1
    i += 1

  t -= 1
  print(cost)
