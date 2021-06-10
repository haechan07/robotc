import os
file = open("CMakeLists.txt", 'w') # CMakeLists.txt 초기화
files = os.listdir() # 파일 명단

file.write("""cmake_minimum_required(VERSION 3.1)
set(CMAKE_LEGACY_CYGWIN_WIN32 0)
project(CodeUp C)

set(CMAKE_C_STANDARD 99)

""") # 기본 내용

for filename in files : # for문 사용
    if ".c" not in filename : # ".c"가 파일명에 없다면
        continue # 반복문 스킵
    file.write(f"add_executable({filename.replace('.c', '')} {filename})\n") # 패턴 맞춰 작성

file.close() # 파일 닫기
exit(0) # 종료
