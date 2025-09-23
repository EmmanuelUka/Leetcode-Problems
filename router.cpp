#include <iostream>
#include <vector>
using namespace std;

//deque <Packet> queue;

class Router {
private:
    int memoryLimit_;

public:
    Router(int memoryLimit) {
        memoryLimit_=memoryLimit;
    }
    
    bool addPacket(int source, int destination, int timestamp) {
    }
    
    vector<int> forwardPacket() {
        
    }
    
    int getCount(int destination, int startTime, int endTime) {
        
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */