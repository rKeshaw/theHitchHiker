t = int(input())

while t > 0:
  n = int(input())
  s = list(input())
  
  begin = s[0]
  
  gap = 0
  max_needed_forward = 0
  moved_backward = 0
  
  i = 0
  while i < n:
    while i < n and s[i] == begin:
      max_needed_forward += 1
      i += 1

    while i < n and s[i] != begin:
      moved_backward += 1
      i += 1

    if gap < moved_backward:
      gap = moved_backward

    if gap < max_needed_forward:
      gap = max_needed_forward
      
    max_needed_forward = 0
    moved_backward = 0
  
  t -= 1
  print(gap + 1)
