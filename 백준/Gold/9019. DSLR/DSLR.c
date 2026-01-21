#include <stdio.h>

int shift_left(int num) {
    int first = num / 1000;
    int other = num % 1000;
    int new = (other * 10 + first) % 10000;
    return new;
}

int shift_right(int num) {
    int last = num % 10;
    int other = num / 10;
    int new = (last * 1000 + other) % 10000;
    return new;
}

int visit[10000];

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int num, result;
        scanf("%d %d", &num, &result);
        
        for(int i = 0; i < 10000; i++) visit[i] = 0;
        
        int queue[10000], command[10000], parent[10000];
        int front = 0, rear = 0;
        
        queue[rear] = num;
        command[rear] = 0;
        parent[rear++] = -1;
        visit[num] = 1;
        
        while (front < rear) {
            int curr_num = queue[front];
            int curr_command = command[front];
            int curr_parent = parent[front++];
            
            if (curr_num == result) {
                int index = front - 1;
                char command_word[10000];
                int idx = 0;
                
                while (parent[index] != -1) {
                    if (command[index] == 1) command_word[idx++] = 'D';
                    else if (command[index] == 2) command_word[idx++] = 'S';
                    else if (command[index] == 3) command_word[idx++] = 'L';
                    else if (command[index] == 4) command_word[idx++] = 'R';
                    
                    index = parent[index];
                }
                
                for (int i = idx - 1; i >= 0; i--) printf("%c", command_word[i]);
                printf("\n");
                break;
            }
            
            int new1 = (2 * curr_num) % 10000; // D 연산
            int new2 = curr_num - 1;           // S 연산
            if (new2 == -1) new2 = 9999;
            int new3 = shift_left(curr_num);   // L 연산
            int new4 = shift_right(curr_num);  // R 연산
            
            if (!visit[new1]) {
                queue[rear] = new1;
                command[rear] = 1;
                parent[rear] = front - 1;
                visit[new1] = 1;
                rear++;
            }
            if (!visit[new2]) {
                queue[rear] = new2;
                command[rear] = 2;
                parent[rear] = front - 1;
                visit[new2] = 1;
                rear++;
            }
            if (!visit[new3]) {
                queue[rear] = new3;
                command[rear] = 3;
                parent[rear] = front - 1;
                visit[new3] = 1;
                rear++;
            }
            if (!visit[new4]) {
                queue[rear] = new4;
                command[rear] = 4;
                parent[rear] = front - 1;
                visit[new4] = 1;
                rear++;
            }
        }
    }

    return 0;
}