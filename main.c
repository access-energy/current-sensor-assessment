#include <stdio.h>

/**
 * Template project to read the current traveling through the electricity meter
 *
 * The ADC being used is a: MCP3422 ADC (http://ww1.microchip.com/downloads/en/DeviceDoc/22088c.pdf)
 *
 * Try to:
 *      - Show how you'd communicate with the ic
 *      - Build the mini-project in the method you would in the real world
 *
 * Feel free to:
 *      - Implement additional fake ic support that may be required
 *      - Add or change this file to fit your implementation
 *      - Create additional files to support your architecture
 *      - Update the cmake file or swap to using make
 *          - You may used another IDE to build the project (Visual studio for example)
 */


/**
 * Define i2c device
 */
struct i2c_device
{
    // 7-bit address (last bit is 1)
    char address;
    int timeout;
};


/**
 * Blocking reading data
 *
 *  @param obj     The I2C object
 *  @param data    The buffer for receiving
 *  @param length  Number of bytes to read
 *  @param stop    Stop to be generated after the transfer is done
 *  @return Number of read bytes
 */
int i2c_read(struct i2c_device *obj, char *data, int length, int stop)
{
    // This would read data from the ADC and store it in the char array
    // You do not have to implement this as it is device dependant

    return 1;
}


/**
 * Blocking sending data
 *
 *  @param obj     The I2C object
 *  @param data    The buffer for sending
 *  @param length  Number of bytes to write
 *  @param stop    Stop to be generated after the transfer is done
 *  @return
 *      zero or non-zero - Number of written bytes
 *      negative - I2C_ERROR_XXX status
 */
int i2c_write(struct i2c_device *obj, const char *data, int length, int stop)
{
    // This would send your char array to the ADC
    // You do not have to implement this as it is device dependant

    return 1;
}

/**
 * Get the current
 *
 * @return float current value
 */
float getCurrent(void)
{
    return 1;
}


/**
 * Main program loop
 */
int main(void)
{
    // Do you need to init the device?
    // Set any additional registers?
    // Get the voltage across the shunt
    // Convert the differential voltage to a current

    // Print out current
    printf("Current: %f\n", getCurrent());

    // Exit
    return 0;
}