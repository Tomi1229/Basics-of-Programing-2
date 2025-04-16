


Logger& Logger::getInstance()
{
	static Logger theLogger; //statikus, tehat egy peldany fog belole letezni
	return theLogger;
}