class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::deque<int> record; 
        int running = 0; 
        for (auto x: operations){
            if (x == "+"){
                auto s1 = record[0];
                auto s2 = record[1];
                record.push_front(s1 + s2);
                running += s1 + s2; 
            }
            else if (x == "D") {
                auto s = record[0]; 
                record.push_front(2 * s);
                running += 2 * s; 
            } else if (x == "C") {
                auto s = record[0]; 
                running -= s; 
                record.pop_front();

            } else {
                record.push_front(std::stoi(x)); 
                running += std::stoi(x); 
            }
        }
        return running; 

    }
};