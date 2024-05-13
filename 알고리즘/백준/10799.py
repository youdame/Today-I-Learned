import sys

def solution(input):
    answer = 0
    stack = []

    for i in range(len(input)):
        # 여는 괄호인 경우, stack에 push
        if input[i] == "(":
            stack.append("(")

        # 닫힌 괄호인 경우
        else:
            stack.pop()

            # 이전 문자가 '('라면 레이저
            if input[i - 1] == "(":
                # 레이저이면 stack size만큼 더하기
                answer += len(stack)
            # 이전 문자가 ')'라면 쇠막대기의 끝
            else:
                # 쇠막대기의 끝이면 +1
                answer += 1

    return answer

if __name__ == "__main__":
    input = sys.stdin.readline().strip()
    answer = solution(input)
    print(answer)