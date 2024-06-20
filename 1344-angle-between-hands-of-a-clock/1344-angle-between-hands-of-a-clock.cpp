class Solution {
public:

    double angleClock(int hour, int minutes) 
    {
        double minDegree = 0, hourDegree = 0, correctTime = 0;

        minDegree = minutes * 6;
        hourDegree = (double)(hour * 30 + (double) ((double)minutes * (double)0.5) );

        correctTime = abs(minDegree - hourDegree);

        return correctTime <= 180 ? correctTime : (360 - correctTime);
    }
};