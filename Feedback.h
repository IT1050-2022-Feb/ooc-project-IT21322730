class Feedback
{
	private:
		string customerId;
		string feedback;
		Order*order3;

	public:
		Feedback();
		Feedback (string customerId, string feedback);
		void manageFeedback();
		void giveFeedback();
		~Feedback();
};