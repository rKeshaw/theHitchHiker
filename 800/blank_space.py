t = int(input())

while (t > 0):
  n = int(input())
  arr = input().split()
  max = 0
  keep = 0
  for i in range(n):
    if int(arr[i]) == 0:
      keep += 1
    else:
      keep = 0
    if keep > max:
      max = keep
  t -= 1

  print(max)