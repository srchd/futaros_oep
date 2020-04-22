#include "engine.h"
bool Engine::isRunning() const {
	return _isRunning;
}
void Engine::start() {
	_isRunning = true;
}
void Engine::stop() {
	_isRunning = false;
}