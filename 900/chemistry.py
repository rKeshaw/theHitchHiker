t = int(input())

while t > 0:
  n, k = map(int, input().split())
  s = list(input())
  
  dict_letter = {}
  set_s = set(s)
  for c in set_s:
    dict_letter[c] = s.count(c)
  
  deletion = k
  for k, v in dict_letter.items():
    if not deletion: 
      break
    if (v % 2): 
      dict_letter[k] -= 1
      deletion -= 1
  
  num_odd = 0
  for _, v in dict_letter.items():
    if (v % 2):
      num_odd += 1
  
  if num_odd > 1:
    print("nO")
  else:
    print("yES")
  
  t -= 1
