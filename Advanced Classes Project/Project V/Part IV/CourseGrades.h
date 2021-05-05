#ifndef COURSEGRADES_H
#define COURSEGRADES_H

class CourseGrades
{
	public:
		CourseGrades();
		~CourseGrades();
		void setLab(int index, GradedActivity lab);
		void setPassFailExam(int index, PassFailExam passFailExam);
		void setEssay(int index, GradedActivity essay);
		void setFinalExam(int index, FinalExam finalExam);
	protected:
};

#endif
