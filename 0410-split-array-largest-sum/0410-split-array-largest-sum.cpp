class Solution {
public:


int countStudents(vector<int>& arr, long long pages) {
    int students = 1;
    long long pagesStudent = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (pagesStudent + arr[i] <= pages) {
            pagesStudent += arr[i];
        } else {
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {

    // n = days (students), m = chapters
    if (n>m) return -1;

    long long low = *max_element(time.begin(), time.end());
    long long high = accumulate(time.begin(), time.end(), 0LL);

    while (low <= high) {
        long long mid = ( low + high)/ 2;

        int students = countStudents(time, mid);

        if (students > n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return ayushGivesNinjatest(k,nums.size(),nums);
        
    }
};