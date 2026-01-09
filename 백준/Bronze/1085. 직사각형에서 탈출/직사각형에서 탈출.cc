#include <iostream>
#include <algorithm>

int main() {
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    
    int min_distance = std::min({x, y, w-x, h-y});
    
    std::cout << min_distance << std::endl;
    
    return 0;
}