class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if (n == 0) {
            return tasks.size();
        }
        array<int, 26> freq = {0};
        for (char task : tasks) {
            freq[task - 'A']++;
        }
        int max_freq = *max_element(freq.begin(), freq.end());
        int max_count = 0;
        for (int count : freq){
            if (count == max_freq) {
                max_count++;
            }
        }
        int result = (max_freq - 1) * (n + 1) + max_count;
        return max(result, (int)tasks.size());
    }
};
