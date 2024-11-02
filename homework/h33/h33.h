/*
 *	@file h33.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H33_H_
#define H33_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
class Worker
{
	std::string m_name;
	double m_rate;
public:
	Worker(const std::string& name, double rate);
	virtual ~Worker() = default;
   // Remaining members here
   double getRate() const;
   std::string getName() const;
   virtual std::string payInfo(int hours) const = 0;
};

class SalariedWorker : public Worker
{
public:
	SalariedWorker(const std::string& name, double rate);
	std::string payInfo(int hours) const override;
};

class HourlyWorker : public Worker
{
public:
	HourlyWorker(const std::string& name, double rate);
	std::string payInfo(int hours) const override;
};

#endif
