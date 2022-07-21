t = int(input())
mod = 1000000007

for i in range(t):
  n = int(input())
  answer = int((n*n)%mod)
  print(answer)