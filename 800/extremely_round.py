t = int(input())
MAX = 999999

input_list = []
map_remem = {}
for i in range(t):
  keep = int(input())
  input_list.append(keep)
  try:
    while True:
      if map_remem[keep] == 0:
        keep += MAX      
  except:
    map_remem[keep] = 0

input_list.sort()
for i in range(t):
  keep_in = 0
  start = 0
  if i == 0: 
    start = 1
  else:
    just_prev = input_list[i-1]
    keep_in = map_remem[just_prev]
    start = just_prev + 1
  for j in range(start, input_list[i] + 1):
    make_break = list(str(j))
    if make_break.count('0') >= len(make_break) - 1:
      keep_in += 1
  map_remem[input_list[i]] = keep_in

for key, value in map_remem.items():
  if key > MAX:
    key_ = key % MAX
    if key_ == 0: key_ = MAX
    print(map_remem[key_])
  else:
    print(value)