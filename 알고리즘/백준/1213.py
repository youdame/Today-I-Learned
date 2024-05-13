from collections import Counter

def solution(text):
  part1 = ""
  part2 = ""
  counter = sorted(Counter(text).item())
  for key, value in counter :
    if(value % 2 == 1) :
        if(len(part2) == 1):
           return "I'm Sorry Hansoo"
        part2 = key
    part1 += (value // 2) * key 
    return part1 + part2 + part1[::-1]


if __name__ == "__main__":
    # 파일에서 입력값 읽어오기
    with open("input.txt", "r") as file:
        text = file.readline().rstrip()
    
    # 결과 출력
    answer = solution(text)
    print(answer)
