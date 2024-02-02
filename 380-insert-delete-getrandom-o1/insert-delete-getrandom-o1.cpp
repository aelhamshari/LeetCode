using namespace std;
class RandomizedSet {
private:
    unordered_set <int> order;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (order.find(val) == order.end())
        {
            order.insert(val);
            return(true);
        }
        return(false);
    }
    
    bool remove(int val) {
        if (order.find(val) == order.end())
        {
            return(false);
        }
        order.erase(val);
        return(true);
    }
    
    int getRandom() {
        return (*next(order.begin(),rand()%order.size()));
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */