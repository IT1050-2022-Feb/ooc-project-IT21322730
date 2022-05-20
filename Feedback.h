//IT21193118 Hettiarachchi H. A. A. I.
//Class of Feedback
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