/*
 * MCP4xxxx Library for Arduino
 * v0.1
 * MIT License
 * (c) UA6EM
 */

#ifndef MCP4xxxx_H
#define MCP4xxxx_H

class MCP4xxxx 
{
public:
	MCP4xxxx(const int& CS, const int& MOSI, const int& SCK, const uint32_t& maxSpeedWrite, const uint8_t& SPIMode);

	MCP4xxxx(const int& CS, const int& MOSI, const int& SCK);

	MCP4xxxx(const int& CS);

    void writeValue(const int& value);
    void setOff();

private:
    volatile unsigned char MSb;
    volatile unsigned char LSb;
    volatile unsigned char errorBit;
    int CSpin;
    int SCKpin;
    int MOSIpin;
    uint32_t speedW;
    uint8_t spimode;
};

#endif