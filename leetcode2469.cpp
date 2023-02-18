class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v;
        double  k,f;
        k = celsius + 273.15;
        f = (celsius * 9.0/5.0) + 32.0;
        v.push_back(k);
        v.push_back(f);
        return v;
    }
};