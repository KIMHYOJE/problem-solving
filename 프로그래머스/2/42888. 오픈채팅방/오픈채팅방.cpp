#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    unordered_map<string, string> userName;  // uid -> 최신 닉네임
    vector<pair<string, bool>> actions;      // uid + Enter/Leave 여부
    
    // 1단계: 처리
    for (const string& r : record) {
        stringstream ss(r);
        string cmd, uid, name;
        ss >> cmd;
        
        if (cmd == "Enter") {
            ss >> uid >> name;
            userName[uid] = name;
            actions.emplace_back(uid, true);  // true: Enter
        } else if (cmd == "Leave") {
            ss >> uid;
            actions.emplace_back(uid, false); // false: Leave
        } else if (cmd == "Change") {
            ss >> uid >> name;
            userName[uid] = name;
        }
    }
    
    // 2단계: 결과 생성
    vector<string> answer;
    for (const auto& action : actions) {
        const string& uid = action.first;
        bool isEnter = action.second;
        
        string msg = userName[uid] + (isEnter ? "님이 들어왔습니다." : "님이 나갔습니다.");
        answer.push_back(msg);
    }
    
    return answer;
}
