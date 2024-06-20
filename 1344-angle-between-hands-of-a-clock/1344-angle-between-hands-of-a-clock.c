double angleClock(int hour, int minutes) 
{
    double minDegree = 0, hourDegree = 0, correctTime = 0;
    
    minDegree = minutes * 6;
    hourDegree = (double)(hour * 30 + (double) (minutes *0.5));
    
    correctTime = (minDegree - hourDegree < 0) ? (hourDegree - minDegree) : (minDegree - hourDegree);
    
    return correctTime <= 180 ? correctTime : (360 - correctTime);
}