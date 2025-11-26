t = int(input())

while t > 0:
  s = list(input())
  
  steps = 0
  
  pointer = 0
  while True:
    if pointer < len(s) - 1 and ((s[pointer] == '0' and s[pointer+1] == '1') or (s[pointer] == '1' and s[pointer+1] == '0')):
      s.pop(pointer)
      s.pop(pointer)
      steps += 1
      pointer = 0
    elif pointer == len(s):
      break
    else:
      pointer += 1
    
  t -= 1
  if steps % 2:
    print("DA")
  else:
    print("NET")
    