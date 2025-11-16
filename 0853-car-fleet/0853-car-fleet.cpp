class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars(n);

        for ( int i = 0; i < position.size(); i++){
            double time = (double)(target - position[i]) / speed[i];
            cars[i] = { position[i], time };
        }

        sort(cars.begin(), cars.end(),
             [](auto& a, auto& b) {
                 return a.first > b.first;
             });

        int fleets = 0;
        double max_time = 0;
        for (auto& car : cars){
            double time = car.second;
            if( time > max_time){
                fleets++;
                max_time = time;
            }
        }   
        
        return fleets;
        
        
    }
};