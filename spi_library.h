#define SERIAL

class spi_Master{
  public: 
    spi_Master();
    void spiSend_Header(unsigned short int spi_data_out);

    void spiSend_u8(unsigned short int spi_data_out);
    void spiSend_u16(unsigned int spi_data_out);
    void spiSend_u32(unsigned long int spi_data_out);

  private: 
  	void spiSend(unsigned int spi_data_out, int length);
  	void spi_Master_Setup();
};

class spi_Slave{
  public:
    spi_Slave();
    unsigned short int spiReceive_header();

    unsigned short int spiReceive_u8();
    unsigned int spiReceive_u16();
    unsigned long int spiReceive_u32();

  private:
  	unsigned int spiReceive();
  	void spi_Slave_Setup();
};
