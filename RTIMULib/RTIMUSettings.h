////////////////////////////////////////////////////////////////////////////
//
//  This file is part of RTIMULib
//
//  Copyright (c) 2014-2015, richards-tech, LLC
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
//  Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

//  The MPU-9250 and SPI driver code is based on code generously supplied by
//  staslock@gmail.com (www.clickdrive.io)

#ifndef _RTIMUSETTINGS_H
#define _RTIMUSETTINGS_H

#include "RTMath.h"
#include "RTIMUHal.h"

//  Settings keys

#define RTIMULIB_IMU_TYPE                   "IMUType"
#define RTIMULIB_FUSION_TYPE                "FusionType"
#define RTIMULIB_BUS_IS_I2C                 "BusIsI2C"
#define RTIMULIB_I2C_SLAVEADDRESS           "I2CSlaveAddress"
#define RTIMULIB_I2C_BUS                    "I2CBus"
#define RTIMULIB_SPI_BUS                    "SPIBus"
#define RTIMULIB_SPI_SELECT                 "SPISelect"
#define RTIMULIB_SPI_SPEED                  "SPISpeed"
#define RTIMULIB_AXIS_ROTATION              "AxisRotation"

//  MPU9250 settings keys

#define RTIMULIB_MPU9250_GYROACCEL_SAMPLERATE "MPU9250GyroAccelSampleRate"
#define RTIMULIB_MPU9250_COMPASS_SAMPLERATE "MPU9250CompassSampleRate"
#define RTIMULIB_MPU9250_GYRO_LPF           "MPU9250GyroLpf"
#define RTIMULIB_MPU9250_ACCEL_LPF          "MPU9250AccelLpf"
#define RTIMULIB_MPU9250_GYRO_FSR           "MPU9250GyroFSR"
#define RTIMULIB_MPU9250_ACCEL_FSR          "MPU9250AccelFSR"

//  LSM9DS0 settings keys

#define RTIMULIB_LSM9DS0_GYRO_SAMPLERATE   "LSM9DS0GyroSampleRate"
#define RTIMULIB_LSM9DS0_GYRO_BW           "LSM9DS0GyroBW"
#define RTIMULIB_LSM9DS0_GYRO_HPF          "LSM9DS0GyroHpf"
#define RTIMULIB_LSM9DS0_GYRO_FSR          "LSM9DS0GyroFsr"

#define RTIMULIB_LSM9DS0_ACCEL_SAMPLERATE  "LSM9DS0AccelSampleRate"
#define RTIMULIB_LSM9DS0_ACCEL_FSR         "LSM9DS0AccelFsr"
#define RTIMULIB_LSM9DS0_ACCEL_LPF         "LSM9DS0AccelLpf"

#define RTIMULIB_LSM9DS0_COMPASS_SAMPLERATE "LSM9DS0CompassSampleRate"
#define RTIMULIB_LSM9DS0_COMPASS_FSR       "LSM9DS0CompassFsr"

//  LSM9DS1 settings keys

#define RTIMULIB_LSM9DS1_GYRO_SAMPLERATE   "LSM9DS1GyroSampleRate"
#define RTIMULIB_LSM9DS1_GYRO_BW           "LSM9DS1GyroBW"
#define RTIMULIB_LSM9DS1_GYRO_HPF          "LSM9DS1GyroHpf"
#define RTIMULIB_LSM9DS1_GYRO_FSR          "LSM9DS1GyroFsr"

#define RTIMULIB_LSM9DS1_ACCEL_SAMPLERATE  "LSM9DS1AccelSampleRate"
#define RTIMULIB_LSM9DS1_ACCEL_FSR         "LSM9DS1AccelFsr"
#define RTIMULIB_LSM9DS1_ACCEL_LPF         "LSM9DS1AccelLpf"

#define RTIMULIB_LSM9DS1_COMPASS_SAMPLERATE "LSM9DS1CompassSampleRate"
#define RTIMULIB_LSM9DS1_COMPASS_FSR       "LSM9DS1CompassFsr"

//  Gyro bias keys

#define RTIMULIB_GYRO_BIAS_VALID            "GyroBiasValid"
#define RTIMULIB_GYRO_BIAS_X                "GyroBiasX"
#define RTIMULIB_GYRO_BIAS_Y                "GyroBiasY"
#define RTIMULIB_GYRO_BIAS_Z                "GyroBiasZ"

//  Compass calibration and adjustment settings keys

#define RTIMULIB_COMPASSCAL_VALID           "CompassCalValid"
#define RTIMULIB_COMPASSCAL_MINX            "CompassCalMinX"
#define RTIMULIB_COMPASSCAL_MAXX            "CompassCalMaxX"
#define RTIMULIB_COMPASSCAL_MINY            "CompassCalMinY"
#define RTIMULIB_COMPASSCAL_MAXY            "CompassCalMaxY"
#define RTIMULIB_COMPASSCAL_MINZ            "CompassCalMinZ"
#define RTIMULIB_COMPASSCAL_MAXZ            "CompassCalMaxZ"

#define RTIMULIB_COMPASSCAL_ELLIPSOID_VALID "compassCalEllipsoidValid"
#define RTIMULIB_COMPASSCAL_OFFSET_X        "compassCalOffsetX"
#define RTIMULIB_COMPASSCAL_OFFSET_Y        "compassCalOffsetY"
#define RTIMULIB_COMPASSCAL_OFFSET_Z        "compassCalOffsetZ"
#define RTIMULIB_COMPASSCAL_CORR11          "compassCalCorr11"
#define RTIMULIB_COMPASSCAL_CORR12          "compassCalCorr12"
#define RTIMULIB_COMPASSCAL_CORR13          "compassCalCorr13"
#define RTIMULIB_COMPASSCAL_CORR21          "compassCalCorr21"
#define RTIMULIB_COMPASSCAL_CORR22          "compassCalCorr22"
#define RTIMULIB_COMPASSCAL_CORR23          "compassCalCorr23"
#define RTIMULIB_COMPASSCAL_CORR31          "compassCalCorr31"
#define RTIMULIB_COMPASSCAL_CORR32          "compassCalCorr32"
#define RTIMULIB_COMPASSCAL_CORR33          "compassCalCorr33"

#define RTIMULIB_COMPASSADJ_DECLINATION     "compassAdjDeclination"

//  Accel calibration settings keys

#define RTIMULIB_ACCELCAL_VALID             "AccelCalValid"
#define RTIMULIB_ACCELCAL_MINX              "AccelCalMinX"
#define RTIMULIB_ACCELCAL_MAXX              "AccelCalMaxX"
#define RTIMULIB_ACCELCAL_MINY              "AccelCalMinY"
#define RTIMULIB_ACCELCAL_MAXY              "AccelCalMaxY"
#define RTIMULIB_ACCELCAL_MINZ              "AccelCalMinZ"
#define RTIMULIB_ACCELCAL_MAXZ              "AccelCalMaxZ"


class RTIMUSettings : public RTIMUHal
{
public:

    //  Standard constructor sets up for ini file in working directory

    RTIMUSettings(const char *productType = "RTIMULib");

    //  Alternate constructor allow ini file to be in any directory

    RTIMUSettings(const char *settingsDirectory, const char *productType);

    //  This function tries to find an IMU. It stops at the first valid one
    //  and returns true or else false

    bool discoverIMU(int& imuType, bool& busIsI2C, unsigned char& slaveAddress);

    //  This function sets the settings to default values.

    void setDefaults();

    //  This function loads the local variables from the settings file or uses defaults

    virtual bool loadSettings();

    //  This function saves the local variables to the settings file

    virtual bool saveSettings();

    //  These are the local variables

    int m_imuType;                                          // type code of imu in use
    int m_fusionType;                                       // fusion algorithm type code
    unsigned char m_I2CSlaveAddress;                        // I2C slave address of the imu
    int m_axisRotation;                                     // axis rotation code

    bool m_compassCalValid;                                 // true if there is valid compass calibration data
    RTVector3 m_compassCalMin;                              // the minimum values
    RTVector3 m_compassCalMax;                              // the maximum values

    bool m_compassCalEllipsoidValid;                        // true if the ellipsoid calibration data is valid
    RTVector3 m_compassCalEllipsoidOffset;                  // the ellipsoid offset
    float m_compassCalEllipsoidCorr[3][3];                  // the correction matrix

    float m_compassAdjDeclination;                          // magnetic declination adjustment - subtracted from measured

    bool m_accelCalValid;                                   // true if there is valid accel calibration data
    RTVector3 m_accelCalMin;                                // the minimum values
    RTVector3 m_accelCalMax;                                // the maximum values

    bool m_gyroBiasValid;                                   // true if the recorded gyro bias is valid
    RTVector3 m_gyroBias;                                   // the recorded gyro bias

    //  IMU-specific vars

    //  MPU9250

    int m_MPU9250GyroAccelSampleRate;                       // the sample rate (samples per second) for gyro and accel
    int m_MPU9250CompassSampleRate;                         // same for the compass
    int m_MPU9250GyroLpf;                                   // low pass filter code for the gyro
    int m_MPU9250AccelLpf;                                  // low pass filter code for the accel
    int m_MPU9250GyroFsr;                                   // FSR code for the gyro
    int m_MPU9250AccelFsr;                                  // FSR code for the accel
    
    //  LSM9DS0

    int m_LSM9DS0GyroSampleRate;                            // the gyro sample rate
    int m_LSM9DS0GyroBW;                                    // the gyro bandwidth code
    int m_LSM9DS0GyroHpf;                                   // the gyro high pass filter cutoff code
    int m_LSM9DS0GyroFsr;                                   // the gyro full scale range

    int m_LSM9DS0AccelSampleRate;                           // the accel sample rate
    int m_LSM9DS0AccelFsr;                                  // the accel full scale range
    int m_LSM9DS0AccelLpf;                                  // the accel low pass filter

    int m_LSM9DS0CompassSampleRate;                         // the compass sample rate
    int m_LSM9DS0CompassFsr;                                // the compass full scale range

    //  LSM9DS1

    int m_LSM9DS1GyroSampleRate;                            // the gyro sample rate
    int m_LSM9DS1GyroBW;                                    // the gyro bandwidth code
    int m_LSM9DS1GyroHpf;                                   // the gyro high pass filter cutoff code
    int m_LSM9DS1GyroFsr;                                   // the gyro full scale range

    int m_LSM9DS1AccelSampleRate;                           // the accel sample rate
    int m_LSM9DS1AccelFsr;                                  // the accel full scale range
    int m_LSM9DS1AccelLpf;                                  // the accel low pass filter

    int m_LSM9DS1CompassSampleRate;                         // the compass sample rate
    int m_LSM9DS1CompassFsr;                                // the compass full scale range

private:
    void setBlank();
    void setComment(const char *comment);
    void setValue(const char *key, const bool val);
    void setValue(const char *key, const int val);
    void setValue(const char *key, const RTFLOAT val);

    char m_filename[256];                                    // the settings file name

    FILE *m_fd;
};

#endif // _RTIMUSETTINGS_H

