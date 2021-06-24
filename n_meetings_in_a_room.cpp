class Solution
{
public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, pair<int, int>>>v;
        for (int i = 0; i < n; i++) {
            v.push_back({end[i], {start[i], i}});
        }
        sort(v.begin(), v.end());
        int count = 1;
        int curr = v[0].first;
        int i = 1;
        while (i < n) {
            if (curr < v[i].second.first)
            {
                count++;
                curr = v[i].first;
            }
            i++;
        }
        return count;
    }
};