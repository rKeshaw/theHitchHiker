n = int(input())

for j in range(n):
  s, t = input().split()
  
  map_s = {}
  map_t = {}
  
  for i in range(len(s)):
    map_s[s[i]] = s.count(s[i])
  
  for i in range(len(t)):
    map_t[t[i]] = t.count(t[i])
  
  t_counter = 0
  found = False
  
  for i in range(len(s)):
    if t_counter < len(t) and s[i] == t[t_counter]:
      if map_s[s[i]] != map_t[s[i]]:
        map_s[s[i]] -= 1
        continue
      else:
        t_counter += 1
    
    try:
      if map_s[s[i]] > map_t[s[i]]:
        map_s[s[i]] -= 1
    except:
      pass
    
    if t_counter == len(t):
      found = True
      print("YES")
      break
      
  if not found:
    print("NO")