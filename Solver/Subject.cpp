#include "Subject.h"
using namespace School;
Subject::Subject(std::string subj) :subject{ subj } {}

std::shared_ptr<Subject> School::Subject::createSubject(std::string subj)
{
	return std::make_shared<Subject>(Subject{ subj });
}
std::string School::Subject::getSubject()
{
	return subject;
}

std::string School::Subject::ToString() const
{
	return subject;
}
