#include <iostream>

int main() {
    long iseconds = 0;
    long days = 0, hours = 0, minutes = 0, seconds = 0;
    const unsigned int sday = 86400, shour = 3600, sminute = 60;
    std::cout << "Input seconds: ";
    std::cin >> iseconds;
    days = iseconds / (sday);
    hours = (iseconds % (sday)) / shour;
    minutes = ((iseconds % (sday)) % shour) / sminute;
    seconds = (((iseconds % (sday)) % shour) % sminute);
    std::cout << iseconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
    return 0;
}