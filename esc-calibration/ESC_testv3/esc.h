class Esc{
	public:
		Esc(servo); //constructor
		void setSpeed(int); 
		int getSpeed(void);
	private:
		int speed;
		int pin;
		int maxSignal = 2000;
		int minSignal = 700;
		Servo esc;
}