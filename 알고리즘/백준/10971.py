
import sys

INF = 1e8

visited = [] # 방문 검사 배열
matrix = [] # 비용 행렬
ans = INF # 최소 비용 저장 위해 미리 최댓값으로 초기화


# count는 방문한 도시의 수를 의미
def backtracking(n, count, cur_city, cost):
    global ans, visited, matrix

    # cost가 현재까지의 최소 비용보다 클 때, 탐색하지 않음
    if cost >= ans:
        return
    if count == n: # 종료 조건 : n개의 도시를 순회했음 출발 도시(0)로 다시 돌아올 수 있는지 확인
        # 출발 도시로 돌아올 수 있다면, 
        if matrix[cur_city][0] != 0:
            # (현재까지의 비용과 출발도시로 돌아오는 비용을 더한 값)과 최소비용인 ans를 비교하여 더 작은 값을 ans에 저장
            ans = min(ans, cost + matrix[cur_city][0])
        return
    # 이동할 수 있는 모든 도시를 탐색 
    for i in range(n): # cur_city에서 도시 i로 이동
        if matrix[cur_city][i] and not visited[i]: # 길이 있고, 아직 방문하지 않은 도시
            # i 도시를 방문했다고 표시
            visited[i] = True
            backtracking(n, count + 1, i, cost + matrix[cur_city][i])
            # 재귀 호출이 끝나면 해당 도시 i의 탐색이 끝났으므로, 다음 반복에서 다시 방문할 수 있도록 방문 여부를 해제
            visited[i] = False

def solution(n, cost):
    global ans, visited, matrix
    visited = [False] * n
    matrix = cost


    # 어느 도시에서 출발하든 값이 같으므로, 0번 도시에서부터 출발하는 경우만 검사
    visited[0] = True

    # 출발 도시에서 시작하기에 cost는 0
    backtracking(n, 1, 0, 0)

    return ans

# 한 사이클을 만들면, 어느 도시에서 시작하든 값은 같으므로 0번 도시부터 시작하는 경우만 검사하면 된다.
if __name__ == "__main__":
    # input.txt 파일에서 입력을 읽어옴
    with open('input.txt', 'r') as f:
        n = int(f.readline().strip())
        cost = [list(map(int, f.readline().split())) for _ in range(n)]
    # print(cost)
        
    # n은 도시의 수, cost는 비용 행렬
    answer = solution(n, cost)
    print(answer)
