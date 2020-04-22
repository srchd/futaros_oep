#pragma once
class Engine
{
private:
	bool _isRunning = false;

public:
	void start();
	void stop();
	bool isRunning() const;
};