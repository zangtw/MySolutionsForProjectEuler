def sol(x):
  strt = 2
  while strt <= x:
    while x % strt == 0:
      x = x / strt
    if x == 1:
      return strt
    strt = strt + 1

print sol(600851475143)
