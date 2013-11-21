/*************************************************************************
Copyright (c) 2012-2013 Miroslav Andel
All rights reserved.

For conditions of distribution and use, see copyright notice in sgct.h 
*************************************************************************/

#ifndef _SGCT_TRACKER_H_
#define _SGCT_TRACKER_H_

#include <vector>
#include "SGCTTrackingDevice.h"

namespace sgct
{

/*!
Class that manages a tracking system's properties and devices/sensors
*/
class SGCTTracker
{
public:
	SGCTTracker(std::string name);
	~SGCTTracker();
	void setEnabled(bool state);
	void addDevice(std::string name, size_t index);

	SGCTTrackingDevice * getLastDevicePtr();
	SGCTTrackingDevice * getDevicePtr(size_t index);
	SGCTTrackingDevice * getDevicePtr(const char * name);
	SGCTTrackingDevice * getDevicePtrBySensorId(int id);

	void setOrientation(double xRot, double yRot, double zRot);
	void setOrientation(double w, double x, double y, double z);
	void setOffset(double x, double y, double z);
	void setScale(double scaleVal);
	void setTransform(glm::dmat4 mat);

	glm::dmat4 getTransform();
	double getScale();

	inline size_t getNumberOfDevices() { return mTrackingDevices.size(); }
	inline const std::string & getName() { return mName; }

private:
	void calculateTransform();

private:
	std::vector<SGCTTrackingDevice *> mTrackingDevices;
	std::string mName;

	double mScale;
	glm::dmat4 mXform;
	glm::dmat4 mOrientation;
	glm::dvec3 mOffset;
};

}

#endif
