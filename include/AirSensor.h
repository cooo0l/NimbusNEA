#ifndef AIRSENSOR_H
#define AIRSENSOR_H


class MySensor {
  public:
    void begin();
    int readValue();
};

#endif