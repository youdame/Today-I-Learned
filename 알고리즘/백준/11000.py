import heapq as hq

# 필요한 강의실 수를 구하는 함수
def get_min_classroom(lectures):
    lectures.sort() # 오름차순 정렬
    # pq 자체가 힙임
    pq = [-1]   # 처음 인덱스 에러를 피하기 위해 음수 값 삽입. (첫번째 강의 때 갱신될 값)

    for start, end in lectures:
        if pq[0] <= start:  # 가장 빨리 끝나는 강의실을 사용할 수 있는 경우
            # heappop은 가장 작은 원소를 제거하는 메소드
            hq.heappop(pq)
        # 힙의 불변성을 유지하면서, 두 번째 인자를 삽입
        hq.heappush(pq, end)    # 끝나는 시간 삽입
    
    return len(pq)  # pq의 길이가 사용 중인 강의실의 수가 된다.

if __name__ == "__main__":
    # 입력 파일 읽기
    with open("input.txt", "r") as file:
        n = int(file.readline().strip()) # 첫 번째 줄에서 강의 수를 읽음
        lectures = [tuple(map(int, line.strip().split())) for line in file] # 나머지 줄에서 각각의 강의 시작과 끝 시간을 읽음
    # 연산 & 출력
    print(get_min_classroom(lectures))
