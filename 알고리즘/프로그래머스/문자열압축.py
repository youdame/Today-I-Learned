
def get_shortened_length(target, unit_length):
    length = len(target)  # 문자열의 전체 길이
    new_length = length  # 압축 후의 새로운 길이
    prev_substr = ""  # 이전에 검사한 부분 문자열
    count = 1  # 반복되는 횟수

    # 부분 문자열을 검사할 인덱스 범위 설정
    left = 0
    right = unit_length

    # 오른쪽 인덱스가 문자열 길이를 초과하지 않는 동안 반복
    while right <= length:
        # 현재 검사 중인 부분 문자열
        curr_substr = target[left:right]

        # 이전과 같은 부분 문자열인 경우, 반복 횟수 증가
        if prev_substr == curr_substr:
            count += 1
        else:  # 새로운 부분 문자열이 등장한 경우
            # 압축 가능한 경우
            if count > 1:
                # 압축된 부분의 길이를 반영하고, 반복 횟수에 따른 길이를 줄임

                # 만약 count가 10이라면, 2자리를 차지함
                new_length += len(str(count))

                # 압축됨으로 인해 줄어든 길이 반영
                new_length -= (count - 1) * unit_length

            # 다음 부분 문자열로 이동하고 반복 횟수 초기화
            count = 1
            
        prev_substr = curr_substr
        # 다음 부분 문자열의 인덱스 이동
        left += unit_length
        right += unit_length

    # 마지막으로 남은 압축 가능한 문자열의 길이 반영
    if count > 1:
        new_length += len(str(count))
        new_length -= (count - 1) * unit_length
        
    return new_length


def solution(given_str):
    answer = len(given_str)  # 초기값은 문자열의 전체 길이로 설정
    # 단위 길이를 1부터 문자열 길이의 절반까지 변화시키며 최소 길이를 찾음
    for unit_length in range(1, len(given_str) // 2 + 1):
        answer = min(answer, get_shortened_length(given_str, unit_length))
    return answer


if __name__ == "__main__":
    # input.txt 파일을 읽어옴
    with open('input.txt', 'r') as f:
        given_str = f.readline().strip()

    # solution 함수 호출하여 결과 출력
    result = solution(given_str)
    print(result)