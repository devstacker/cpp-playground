### C++ Development First setting VS Code

https://www.youtube.com/watch?v=-erXR6k9TeE

#### basic setting

1. cpp 확장자로 파일 생성후 코드 작성 (ex hello.cpp)

   ```c++
   #include <stdio.h>
   
   int main() {
       printf("Hello, World!!\n");
   }
   ```

2. 작업 > 빌드작업실행 (sf +cm +B) -> Others -> tasks.json 파일생성

   ```json
   {
       // See https://go.microsoft.com/fwlink/?LinkId=733558
       // for the documentation about the tasks.json format
       "version": "2.0.0",
       "tasks": [
           {
               "label": "echo",
               "type": "shell",
               "command": "g++ -g hello.cpp -o hello",
               "group":{
                  "kind": "build",
                  "isDefault": true
               }
           }
       ]
   }
   ```

3. 빌드작업 실행
4. 터미널에서 ./hello



