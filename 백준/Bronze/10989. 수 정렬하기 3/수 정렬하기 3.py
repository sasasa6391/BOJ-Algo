n = int(input())
arr = [0] * 10001  # 리스트 초기화를 더 간단하게 할 수 있습니다.

for _ in range(n):  # 변수 i를 사용하지 않으므로 언더스코어(_)로 대체합니다.
    x = int(input())
    arr[x] += 1

for i in range(1, 10001):
    for _ in range(arr[i]):  # 변수 j를 사용하지 않으므로 언더스코어(_)로 대체합니다.
        print(i)