class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        int n = start.size();
        
        // Step 1: Sort start and end arrays independently
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        int roomsNeeded = 0;
        int j = 0; // Pointer for end times
        
        // Step 2: Iterate through all meeting start times
        for (int i = 0; i < n; i++) {
            // If the current meeting starts before the earliest ending meeting finishes,
            // we need a new room.
            if (start[i] < end[j]) {
                roomsNeeded++;
            } else {
                // Otherwise, the room freed up, so move the end pointer
                j++;
            }
        }
        
        return roomsNeeded;
    }
};