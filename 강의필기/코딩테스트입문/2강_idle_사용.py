import sys
input = sys.stdin.readline # 빠른 읽기 input 대신에 쓸 수 있음

a = input().rstrip() # rstrip 불필요한 띄어쓰기 날림
print(a)

# 숫자 3개
a, b, c = map(int, input().rstrip().split()) # map을 써서 간단하게 리스트로 만들 수 있다.
print(a)
print(*a) # 앞에 *를 붙이면 리스트의 원소들이 언팩킹 돼서 print된다.
