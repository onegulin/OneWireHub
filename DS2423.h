// 0x1D  4kb 1-Wire RAM with Counter
class DS2423 : public OneWireItem
{
private:

    bool duty(OneWireHub *hub);

public:

    DS2423(uint8_t ID1, uint8_t ID2, uint8_t ID3, uint8_t ID4, uint8_t ID5, uint8_t ID6, uint8_t ID7);

};
