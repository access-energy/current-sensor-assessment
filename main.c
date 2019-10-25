/**
 * Template project to read the current passing through an electricity meter.
 */

#include <stdio.h>


/**
 * I2C device definition.
 */
struct i2c_device
{
    // 7-bit address (last bit is 1).
    char address;
    int timeout;
};


/**
 * Perform a blocking read of data from the I2C.
 *
 *  @param obj     The I2C object.
 *  @param data    The buffer for receiving.
 *  @param length  The number of bytes to read.
 *  @param stop    The stop to be generated after the transfer is done.
 *  @return (int)  The number of bytes read.
 */
int i2c_read(struct i2c_device *obj, char *data, int length, int stop)
{
    // This would read data from the ADC and store it in the char array.
    // You do not have to implement this as it is device dependant.

    return 1;
}


/**
 * Perform a blocking write of data to the I2C.
 *
 *  @param obj     The I2C object.
 *  @param data    The buffer for sending.
 *  @param length  Number of bytes to write.
 *  @param stop    The stop to be generated after the transfer is done.
 *  @return (int)
 *      zero or non-zero - The number of bytes written.
 *      negative - The I2C_ERROR_XXX status.
 */
int i2c_write(struct i2c_device *obj, const char *data, int length, int stop)
{
    // This would send your char array to the ADC.
    // You do not have to implement this as it is device dependant.

    return 1;
}

/**
 * Get the measured current value.
 *
 * @return (float) The current value in Amperes.
 */
float getCurrent(void)
{
    // TODO: implement this.
    return 1;
}


/**
 * Main program loop.
 */
int main(void)
{
    // Print out the measured current value.
    printf("Current: %.2f\n", getCurrent());

    // Exit
    return 0;
}