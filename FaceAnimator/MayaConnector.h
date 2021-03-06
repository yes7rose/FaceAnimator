#pragma once
#ifndef __MAYACONNECTOR_H
#define __MAYACONNECTOR_H

#include <iostream>
#include <string>

#include "Landmarks.h"
#include "Socket.h"

class MayaConnector
{
public:
	MayaConnector();
	virtual ~MayaConnector();

	bool send(Landmarks &data);
	bool sendScript(std::string script);
	bool isConnected();

private:
	void connect();

	Socket internal_socket;
	bool connected;
};

#endif 	/* __MAYACONNECTOR_H */
